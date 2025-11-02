package main

import (
	"flag"
	"fmt"
	"io"
	"os"
	"path/filepath"

	"github.com/fluffos/lpcfmt/internal/formatter"
)

var (
	writeFlag = flag.Bool("w", false, "write result to (source) file instead of stdout")
	listFlag  = flag.Bool("l", false, "list files whose formatting differs")
	diffFlag  = flag.Bool("d", false, "display diffs instead of rewriting files")
)

func main() {
	flag.Usage = func() {
		fmt.Fprintf(os.Stderr, "usage: lpcfmt [flags] [path ...]\n")
		flag.PrintDefaults()
	}
	flag.Parse()

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
