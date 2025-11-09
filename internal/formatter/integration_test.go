package formatter

import (
	"os"
	"path/filepath"
	"strings"
	"testing"
)

// TestFluffOSTestSuite tests the formatter against real test files from fluffos/fluffos
func TestFluffOSTestSuite(t *testing.T) {
	testDir := "../../tests/fluffos"

	// Find all .c and .lpc files in the test directory
	var testFiles []string
	err := filepath.Walk(testDir, func(path string, info os.FileInfo, err error) error {
		if err != nil {
			return err
		}
		if !info.IsDir() && (strings.HasSuffix(path, ".c") || strings.HasSuffix(path, ".lpc")) {
			testFiles = append(testFiles, path)
		}
		return nil
	})

	if err != nil {
		t.Fatalf("Failed to walk test directory: %v", err)
	}

	if len(testFiles) == 0 {
		t.Skip("No test files found in tests/fluffos directory - run download script first")
	}

	t.Logf("Found %d test files from fluffos repository", len(testFiles))

	failures := []string{}
	successes := 0

	for _, testFile := range testFiles {
		t.Run(filepath.Base(testFile), func(t *testing.T) {
			// Read the file
			content, err := os.ReadFile(testFile)
			if err != nil {
				t.Errorf("Failed to read %s: %v", testFile, err)
				failures = append(failures, testFile+": read error")
				return
			}

			// Format the content
			formatted, err := Format(string(content))
			if err != nil {
				t.Errorf("Failed to format %s: %v", testFile, err)
				failures = append(failures, testFile+": format error")
				return
			}

			// Validate basic properties
			if len(formatted) == 0 && len(content) > 0 {
				t.Errorf("Formatter produced empty output for %s", testFile)
				failures = append(failures, testFile+": empty output")
				return
			}

			// Count certain key constructs to ensure they're preserved
			original := string(content)

			// Check that we have roughly the same number of braces
			origOpenBraces := strings.Count(original, "{")
			origCloseBraces := strings.Count(original, "}")
			fmtOpenBraces := strings.Count(formatted, "{")
			fmtCloseBraces := strings.Count(formatted, "}")

			if origOpenBraces != fmtOpenBraces {
				t.Errorf("Brace mismatch in %s: original had %d '{', formatted has %d '{'",
					testFile, origOpenBraces, fmtOpenBraces)
				failures = append(failures, testFile+": brace mismatch")
				return
			}

			if origCloseBraces != fmtCloseBraces {
				t.Errorf("Brace mismatch in %s: original had %d '}', formatted has %d '}'",
					testFile, origCloseBraces, fmtCloseBraces)
				failures = append(failures, testFile+": brace mismatch")
				return
			}

			// Check semicolons are preserved (roughly)
			origSemicolons := strings.Count(original, ";")
			fmtSemicolons := strings.Count(formatted, ";")

			// Allow some variance for comments containing semicolons
			if abs(origSemicolons-fmtSemicolons) > 2 {
				t.Errorf("Semicolon mismatch in %s: original had %d, formatted has %d",
					testFile, origSemicolons, fmtSemicolons)
				failures = append(failures, testFile+": semicolon mismatch")
				return
			}

			successes++
			t.Logf("✓ Successfully formatted %s (%d bytes -> %d bytes)",
				filepath.Base(testFile), len(content), len(formatted))
		})
	}

	// Summary
	t.Logf("\n=== Test Summary ===")
	t.Logf("Total files: %d", len(testFiles))
	t.Logf("Successful: %d", successes)
	t.Logf("Failed: %d", len(failures))

	if len(failures) > 0 {
		t.Logf("\nFailed files:")
		for _, f := range failures {
			t.Logf("  - %s", f)
		}
	}

	// Calculate pass rate
	passRate := float64(successes) / float64(len(testFiles)) * 100
	t.Logf("Pass rate: %.1f%%", passRate)

	if passRate < 80.0 {
		t.Errorf("Pass rate too low: %.1f%% (expected >= 80%%)", passRate)
	}
}

// TestFluffOSMasterFile specifically tests the master.c file which is complex
func TestFluffOSMasterFile(t *testing.T) {
	masterFile := "../../tests/fluffos/single/master.c"

	if _, err := os.Stat(masterFile); os.IsNotExist(err) {
		t.Skip("master.c not found - using existing test file")
		masterFile = "../../tests/1.lpc"
	}

	content, err := os.ReadFile(masterFile)
	if err != nil {
		t.Fatalf("Failed to read master.c: %v", err)
	}

	formatted, err := Format(string(content))
	if err != nil {
		t.Fatalf("Failed to format master.c: %v", err)
	}

	// Specific checks for master.c
	original := string(content)

	// Should contain key functions
	keyFunctions := []string{"connect", "compile_object", "crash", "epilog"}
	for _, fn := range keyFunctions {
		if strings.Contains(original, fn) && !strings.Contains(formatted, fn) {
			t.Errorf("Function %s disappeared after formatting", fn)
		}
	}

	// Should preserve inheritance
	if strings.Contains(original, "inherit") && !strings.Contains(formatted, "inherit") {
		t.Error("Inherit statement disappeared after formatting")
	}

	t.Logf("master.c formatted successfully: %d bytes -> %d bytes",
		len(content), len(formatted))
}

// TestFluffOSPreservesComments tests that comments are preserved
func TestFluffOSPreservesComments(t *testing.T) {
	tests := []struct {
		name  string
		input string
	}{
		{
			name: "line comments",
			input: `// This is a comment
int x;
// Another comment`,
		},
		{
			name: "block comments",
			input: `/* Block comment */
int x;
/* Multi-line
   block comment */`,
		},
		{
			name: "mixed comments",
			input: `// Line comment
/* Block */ int x; // Inline`,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			formatted, err := Format(tt.input)
			if err != nil {
				t.Fatalf("Format() error = %v", err)
			}

			// Count comment markers
			origLineComments := strings.Count(tt.input, "//")
			fmtLineComments := strings.Count(formatted, "//")

			if origLineComments != fmtLineComments {
				t.Errorf("Line comment count mismatch: orig=%d, fmt=%d",
					origLineComments, fmtLineComments)
			}

			origBlockStart := strings.Count(tt.input, "/*")
			fmtBlockStart := strings.Count(formatted, "/*")

			if origBlockStart != fmtBlockStart {
				t.Errorf("Block comment start count mismatch: orig=%d, fmt=%d",
					origBlockStart, fmtBlockStart)
			}
		})
	}
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
