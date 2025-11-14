# lpcfmt

A code formatter for LPC (Lars Pensjö C) language, similar to `gofmt` for Go.

[![Tests](https://img.shields.io/badge/tests-36%20passing-brightgreen)](TESTING.md)
[![FluffOS](https://img.shields.io/badge/FluffOS-18%20test%20files-blue)](https://github.com/fluffos/fluffos)
[![Coverage](https://img.shields.io/badge/coverage-100%25-brightgreen)](TESTING.md)

## Overview

`lpcfmt` parses LPC source code and reformats it with consistent indentation, spacing, and style. It can be used as a command-line tool to format individual files or entire directories.

**Tested against real-world code**: 100% pass rate on 18+ test files from the [FluffOS](https://github.com/fluffos/fluffos) driver repository.

## Features

- Automatic code formatting with consistent style
- Preserves comments and preprocessor directives
- Handles all LPC language constructs:
  - Inheritance statements
  - Variable declarations
  - Function definitions
  - Control flow structures
  - Expressions and operators
  - Classes and structs

## Usage

```bash
# Format a single file and output to stdout
lpcfmt myfile.lpc

# Format a file in place
lpcfmt -w myfile.lpc

# List files that need formatting
lpcfmt -l myfile.lpc

# Show diff of formatting changes
lpcfmt -d myfile.lpc

# Format from stdin
cat myfile.lpc | lpcfmt

# Format all LPC files in a directory
lpcfmt -w path/to/directory/

# Show version
lpcfmt --version
```

### Command-line Flags

- `-w` - Write result to source file instead of stdout
- `-l` - List files whose formatting differs from lpcfmt's
- `-d` - Display diffs instead of rewriting files
- `--version` - Print version information

## Preparing the Environment

### Linux

#### Fedora 43

1. Install [SDKMAN!](https://sdkman.io/)

  ```bash
  curl -s "https://get.sdkman.io" | bash
  ```
  
2. Install [Gradle](https://gradle.org/install/) 

  ```bash
  sdk install gradle
  ```

## Building

### Go Version with ANTLR Parser (Current)

#### Linux

```bash
# Create the wrapper
gradle wrapper

# Make gradlew executable, if it is not already
chmod +x gradlew

# Generate Go parser from ANTLR grammar using Gradle
./gradlew generateGoParser

# Download Go dependencies (writes go.sum) if this is a fresh clone
go mod tidy

# Build the formatter
go build -o lpcfmt ./cmd/lpcfmt
```

#### Windows

```bash
# Or use Windows batch file
gradlew.bat generateGoParser
```

### Legacy C++ Version

```bash
# Build with CMake (experimental, not actively maintained)
mkdir build && cd build
cmake ..
make
```

## Grammar

The LPC grammar is defined in ANTLR4 format:
- `lpc.g4` - Main grammar
- `literal.g4` - Literal tokens (strings, numbers)
- `lpcid.g4` - Identifier rules

## Examples

### Before formatting:

```lpc
inherit "/inherit/master/valid";
nosave int has_error=0;
public string get_last_error(){return last_error;}
```

### After formatting:

```lpc
inherit "/inherit/master/valid";

nosave int has_error = 0;

public string get_last_error()
{
  return last_error;
}
```

## Testing

The formatter includes comprehensive test coverage:

```bash
# Run all tests
go test ./internal/formatter/

# Run with verbose output
go test -v ./internal/formatter/

# Run integration tests against FluffOS code
go test -v ./internal/formatter/ -run TestFluffOS
```

### Test Results

- **48+ test files** from real-world LPC code
- **Auto-discovery** of all `.c` and `.lpc` files in `tests/` directory
- **Idempotency testing** ensures stable formatting
- **Multiple sources**: FluffOS, Dead Souls, Lima, Nightmare, NT7, XKX100
- **Validates**: syntax preservation, comment retention, formatting stability

See [tests/README.md](tests/README.md) for test file organization and [TESTING.md](TESTING.md) for detailed testing documentation.

## For AI Assistants & Developers

See **[CLAUDE.md](CLAUDE.md)** for a comprehensive development guide including:
- ANTLR parser generation
- Complete testing instructions
- Project architecture
- Development workflow
- Troubleshooting guide

## Development

The project structure:
- `lpc.g4`, `literal.g4`, `lpcid.g4` - ANTLR grammar definitions
- `cmd/lpcfmt/` - Go CLI implementation
- `internal/formatter/` - Core formatting logic and tests
  - `formatter.go` - Main formatter interface
  - `antlr_formatter.go` - ANTLR-based formatter implementation
- `parser/` - Generated Go parser code (from ANTLR, auto-generated)
- `tests/` - Test LPC files
  - `tests/fluffos/` - Real FluffOS driver test files
  - `tests/mudlibs/` - MUD library test files
- `build.gradle`, `gradlew` - Gradle wrapper for parser generation
- `main.cpp` - C++ implementation (experimental, not actively maintained)

## Contributing

Contributions are welcome! Please:

1. Add tests for new features
2. Ensure all tests pass: `go test ./...`
3. Follow the existing code style
4. Update documentation as needed

## License

See LICENSE file for details.
