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

# Format from stdin
cat myfile.lpc | lpcfmt

# Format all LPC files in a directory
lpcfmt -w path/to/directory/...
```

## Building

### Go Version (Recommended)

```bash
# Generate parser from ANTLR grammar
make generate

# Build the formatter
make build

# Or use go directly
go build -o lpcfmt ./cmd/lpcfmt
```

### C++ Version

```bash
# Build with CMake
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

- **36+ test cases** covering all LPC constructs
- **18 real-world test files** from FluffOS driver
- **100% pass rate** on all tests
- **Validates**: brace matching, semicolon preservation, comment preservation

See [TESTING.md](TESTING.md) for detailed testing documentation.

## Development

The project structure:
- `lpc.g4`, `literal.g4`, `lpcid.g4` - ANTLR grammar definitions
- `cmd/lpcfmt/` - Go CLI implementation
- `internal/formatter/` - Core formatting logic and tests
- `main.cpp` - C++ implementation (experimental)
- `tests/` - Test LPC files
  - `tests/fluffos/` - Real FluffOS driver test files
- `gen/` - Generated parser code (from ANTLR)

## Contributing

Contributions are welcome! Please:

1. Add tests for new features
2. Ensure all tests pass: `go test ./...`
3. Follow the existing code style
4. Update documentation as needed

## License

See LICENSE file for details.
