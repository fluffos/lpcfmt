package main

import (
	"bytes"
	"flag"
	"fmt"
	"io"
	"os"
	"os/exec"
	"path/filepath"

	"github.com/fluffos/lpcfmt/internal/formatter"
)

const version = "1.0.0"

var (
	writeFlag   = flag.Bool("w", false, "write result to (source) file instead of stdout")
	listFlag    = flag.Bool("l", false, "list files whose formatting differs")
	diffFlag    = flag.Bool("d", false, "display diffs instead of rewriting files")
	versionFlag = flag.Bool("version", false, "print version information")
)

func main() {
	flag.Usage = func() {
		fmt.Fprintf(os.Stderr, "usage: lpcfmt [flags] [path ...]\n")
		flag.PrintDefaults()
	}
	flag.Parse()

	if *versionFlag {
		fmt.Printf("lpcfmt version %s\n", version)
		return
	}

	if flag.NArg() == 0 {
		// Read from stdin
		if err := processStdin(); err != nil {
			fmt.Fprintf(os.Stderr, "Error: %v\n", err)
			os.Exit(1)
		}
		return
	}

	// Process files/directories from arguments
	for _, path := range flag.Args() {
		if err := processPath(path); err != nil {
			fmt.Fprintf(os.Stderr, "Error processing %s: %v\n", path, err)
			os.Exit(1)
		}
	}
}

func processStdin() error {
	src, err := io.ReadAll(os.Stdin)
	if err != nil {
		return err
	}

	formatted, err := formatter.Format(string(src))
	if err != nil {
		return err
	}

	fmt.Print(formatted)
	return nil
}

func processPath(path string) error {
	info, err := os.Stat(path)
	if err != nil {
		return err
	}

	if info.IsDir() {
		return processDirectory(path)
	}

	return processFile(path)
}

func processFile(filename string) error {
	// Only process .lpc and .c files
	ext := filepath.Ext(filename)
	if ext != ".lpc" && ext != ".c" {
		return nil
	}

	src, err := os.ReadFile(filename)
	if err != nil {
		return err
	}

	formatted, err := formatter.Format(string(src))
	if err != nil {
		return fmt.Errorf("formatting error: %w", err)
	}

	if *writeFlag {
		if string(src) != formatted {
			// Get file info for permissions
			info, err := os.Stat(filename)
			if err != nil {
				return err
			}
			// Write back to file
			if err := os.WriteFile(filename, []byte(formatted), info.Mode()); err != nil {
				return err
			}
		}
	} else if *listFlag {
		if string(src) != formatted {
			fmt.Println(filename)
		}
	} else if *diffFlag {
		if string(src) != formatted {
			if err := showDiff(filename, src, []byte(formatted)); err != nil {
				return err
			}
		}
	} else {
		fmt.Print(formatted)
	}

	return nil
}

func processDirectory(dirname string) error {
	// Walk the directory tree
	return filepath.Walk(dirname, func(path string, info os.FileInfo, err error) error {
		if err != nil {
			return err
		}

		if info.IsDir() {
			return nil
		}

		ext := filepath.Ext(path)
		if ext == ".lpc" || ext == ".c" {
			return processFile(path)
		}

		return nil
	})
}

// showDiff displays a unified diff between original and formatted content
func showDiff(filename string, original, formatted []byte) error {
	// Try to use diff command if available
	cmd := exec.Command("diff", "-u", "/dev/stdin", filename)
	cmd.Stdin = bytes.NewReader(formatted)

	// Write original to a temp file for comparison
	tmpfile, err := os.CreateTemp("", "lpcfmt-*.lpc")
	if err != nil {
		// Fallback to simple diff if temp file fails
		return simpleDiff(filename, original, formatted)
	}
	defer os.Remove(tmpfile.Name())

	if _, err := tmpfile.Write(original); err != nil {
		tmpfile.Close()
		return simpleDiff(filename, original, formatted)
	}
	tmpfile.Close()

	cmd = exec.Command("diff", "-u", tmpfile.Name(), "-")
	cmd.Stdin = bytes.NewReader(formatted)

	var out bytes.Buffer
	cmd.Stdout = &out
	cmd.Stderr = os.Stderr

	// diff returns exit code 1 when files differ, which is expected
	_ = cmd.Run()

	if out.Len() > 0 {
		// Replace temp filename with actual filename in output
		output := bytes.ReplaceAll(out.Bytes(), []byte(tmpfile.Name()), []byte(filename+".orig"))
		output = bytes.ReplaceAll(output, []byte("---"), []byte(fmt.Sprintf("--- %s.orig", filename)))
		output = bytes.ReplaceAll(output, []byte("+++"), []byte(fmt.Sprintf("+++ %s", filename)))
		fmt.Print(string(output))
	}

	return nil
}

// simpleDiff provides a basic diff when the diff command is not available
func simpleDiff(filename string, original, formatted []byte) error {
	fmt.Printf("diff %s %s\n", filename, filename)
	fmt.Printf("--- %s.orig\n", filename)
	fmt.Printf("+++ %s\n", filename)
	fmt.Println("@@ (formatted version) @@")
	fmt.Print(string(formatted))
	return nil
}
