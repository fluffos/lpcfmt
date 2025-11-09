# LPC Test Files

This directory contains LPC test files from various sources used to validate the formatter.

## Directory Structure

```
tests/
├── fluffos/         - FluffOS driver test files (18 files)
├── mudlibs/         - MUD library test files (18 files)
│   ├── dead-souls/
│   ├── lima/
│   └── nightmare3/
├── lpc-test/        - LPC language test files (5 files)
├── nt7/             - NT7 MUD library files (5 files)
└── xkx100/          - XKX100 library files (2 files)
```

## Total Test Coverage

- **48+ test files** across all directories
- Files include `.c` and `.lpc` extensions
- Real-world code from production MUD libraries
- Covers all LPC language constructs

## Test Execution

The test suite automatically discovers and runs on all test files:

```bash
# Run all formatter tests
go test ./internal/formatter/

# Run idempotency tests on all files
go test ./internal/formatter/ -run TestIdempotencyOnAllTestFiles -v

# Run specific test directory
go test ./internal/formatter/ -run TestIdempotencyOnAllTestFiles/fluffos -v
```

## Test Strategy

### 1. Unit Tests (`formatter_test.go`)
Tests specific language constructs:
- Inheritance statements
- Variable declarations
- Function definitions
- Comments and preprocessor directives

### 2. Idempotency Tests (`idempotency_test.go`)
Verifies that `format(format(x)) == format(x)` for:
- All test files in this directory
- Ensures stable formatting
- No infinite formatting loops

### 3. Integration Tests (`integration_test.go`)
Tests complete file formatting with:
- Real-world code examples
- Complex nested structures
- Mixed language features

## Adding New Test Files

To add new test files:

1. Place `.c` or `.lpc` files in appropriate directory
2. Tests will automatically discover them
3. Run `go test ./internal/formatter/` to verify

**Note**: Files ending with `.orig` or `.formatted` are ignored by tests.

## Test File Sources

- **fluffos/**: From [FluffOS driver](https://github.com/fluffos/fluffos) testsuite
- **mudlibs/**: From various MUD libraries (Dead Souls, Lima, Nightmare)
- **lpc-test/**: LPC language specification tests
- **nt7/**: NT7 MUD library
- **xkx100/**: XKX100 library

## Known Issues

Some test files contain LPC extensions not yet fully supported:
- `@` operator (string interpolation in some dialects)
- Advanced template strings
- Dialect-specific operators

When parsing fails, the formatter returns the original source unchanged.
