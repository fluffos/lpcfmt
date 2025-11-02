# lpcfmt

A code formatter for LPC (Lars Pensjö C) language, similar to `gofmt` for Go.

## Overview

`lpcfmt` parses LPC source code and reformats it with consistent indentation, spacing, and style. It uses ANTLR4 for parsing and can be used as a command-line tool to format individual files or entire directories.

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

## Development

The project structure:
- `lpc.g4`, `literal.g4`, `lpcid.g4` - ANTLR grammar definitions
- `cmd/lpcfmt/` - Go implementation
- `main.cpp` - C++ implementation
- `tests/` - Test LPC files
- `gen/` - Generated parser code

## License

See LICENSE file for details.
