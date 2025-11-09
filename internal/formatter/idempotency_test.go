package formatter

import (
	"os"
	"path/filepath"
	"strings"
	"testing"
)

// TestIdempotency ensures that format(format(x)) == format(x)
// This is critical - formatting should be stable and not keep changing the output
func TestIdempotency(t *testing.T) {
	tests := []struct {
		name   string
		source string
	}{
		{
			name: "simple_code",
			source: `inherit "base";
int x=1;
void test(){return x;}`,
		},
		{
			name: "block_comment",
			source: `/*
 * Block comment
 * With multiple lines
 */
int x = 5;`,
		},
		{
			name: "nested_blocks",
			source: `void test() {
  if (x) {
    int y = 5;
  }
}`,
		},
		{
			name: "mixed_comments",
			source: `// Line comment
/* Block */ int x = 5;
/*
 * Multi-line
 */
void test() {
  // Inside function
  return x;
}`,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			// First format
			first, err := Format(tt.source)
			if err != nil {
				t.Fatalf("First format failed: %v", err)
			}

			// Second format (should be identical)
			second, err := Format(first)
			if err != nil {
				t.Fatalf("Second format failed: %v", err)
			}

			// Third format (paranoia check)
			third, err := Format(second)
			if err != nil {
				t.Fatalf("Third format failed: %v", err)
			}

			// Verify idempotency: format(format(x)) == format(x)
			if first != second {
				t.Errorf("Idempotency failed: first != second\n=== First ===\n%s\n=== Second ===\n%s", first, second)
			}

			if second != third {
				t.Errorf("Idempotency failed: second != third\n=== Second ===\n%s\n=== Third ===\n%s", second, third)
			}
		})
	}
}

// TestIdempotencyOnAllTestFiles tests idempotency on all our test files
func TestIdempotencyOnAllTestFiles(t *testing.T) {
	testDirs := []string{
		"../../tests/fluffos",
		"../../tests/mudlibs/dead-souls",
		"../../tests/mudlibs/lima",
		"../../tests/mudlibs/nightmare3",
		"../../tests/lpc-test",
		"../../tests/nt7",
		"../../tests/xkx100",
	}

	for _, dir := range testDirs {
		// Check if directory exists
		if _, err := os.Stat(dir); os.IsNotExist(err) {
			continue
		}

		err := filepath.Walk(dir, func(path string, info os.FileInfo, err error) error {
			if err != nil {
				return err
			}

			// Only process .c and .lpc files, skip .orig and .formatted
			if info.IsDir() ||
			   (!strings.HasSuffix(path, ".c") && !strings.HasSuffix(path, ".lpc")) ||
			   strings.HasSuffix(path, ".orig") ||
			   strings.HasSuffix(path, ".formatted") {
				return nil
			}

			t.Run(filepath.Base(path), func(t *testing.T) {
				content, err := os.ReadFile(path)
				if err != nil {
					t.Fatalf("Failed to read %s: %v", path, err)
				}

				// First format
				first, err := Format(string(content))
				if err != nil {
					t.Fatalf("First format of %s failed: %v", path, err)
				}

				// Second format - should be identical
				second, err := Format(first)
				if err != nil {
					t.Fatalf("Second format of %s failed: %v", path, err)
				}

				if first != second {
					// Show first difference
					firstLines := strings.Split(first, "\n")
					secondLines := strings.Split(second, "\n")
					for i := 0; i < len(firstLines) && i < len(secondLines); i++ {
						if firstLines[i] != secondLines[i] {
							t.Errorf("Idempotency failed for %s at line %d:\n  First:  %q\n  Second: %q",
								path, i+1, firstLines[i], secondLines[i])
							break
						}
					}
					if len(firstLines) != len(secondLines) {
						t.Errorf("Idempotency failed for %s: different line counts (first=%d, second=%d)",
							path, len(firstLines), len(secondLines))
					}
				}
			})

			return nil
		})

		if err != nil {
			t.Errorf("Error walking %s: %v", dir, err)
		}
	}
}

// TestCommentPreservation specifically tests that comment formatting is preserved
func TestCommentPreservation(t *testing.T) {
	tests := []struct {
		name     string
		source   string
		expected string
	}{
		{
			name: "block_comment_with_stars",
			source: `/*
 * This is a comment
 * With aligned stars
 */`,
			expected: `/*
 * This is a comment
 * With aligned stars
 */
`,
		},
		{
			name: "nested_comment",
			source: `void test() {
  /*
   * Comment inside function
   */
  int x;
}`,
			expected: `void test() {
  /*
   * Comment inside function
   */
  int x;
}
`,
		},
		{
			name: "line_comment",
			source: `// This is a line comment
int x;`,
			expected: `// This is a line comment
int x;
`,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result, err := Format(tt.source)
			if err != nil {
				t.Fatalf("Format failed: %v", err)
			}

			if result != tt.expected {
				t.Errorf("Comment preservation failed:\n=== Expected ===\n%s\n=== Got ===\n%s", tt.expected, result)
			}

			// Also verify idempotency
			second, err := Format(result)
			if err != nil {
				t.Fatalf("Second format failed: %v", err)
			}

			if result != second {
				t.Errorf("Idempotency failed after comment preservation")
			}
		})
	}
}
