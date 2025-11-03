# Testing Documentation

## Overview

The lpcfmt project includes comprehensive test coverage to ensure the formatter works correctly with real-world LPC code from the FluffOS driver.

## Test Suite Summary

| Test Suite | Test Cases | Coverage |
|------------|------------|----------|
| Unit Tests | 18 | Core formatting functionality |
| Integration Tests | 18 files | Real FluffOS test files |
| Total | 36+ | 100% pass rate |

## Test Structure

```
internal/formatter/
├── formatter_test.go        # Unit tests for specific features
└── integration_test.go      # Integration tests against FluffOS code

tests/
├── *.c, *.lpc              # Original test files
└── fluffos/                # FluffOS repository test files
    ├── single/             # Single object tests (efuns, etc.)
    ├── compiler/           # Compiler feature tests
    └── operators/          # Operator and control flow tests
```

## Running Tests

### Run All Tests
```bash
go test ./internal/formatter/
```

### Run Unit Tests Only
```bash
go test ./internal/formatter/ -run TestFormat
```

### Run Integration Tests
```bash
go test ./internal/formatter/ -run TestFluffOS
```

### Verbose Output
```bash
go test -v ./internal/formatter/
```

### Run Specific Test
```bash
go test -v ./internal/formatter/ -run TestFluffOSTestSuite
```

## Test Categories

### 1. Unit Tests (`formatter_test.go`)

Tests individual formatting features:

- **TestFormatInheritance**: Inheritance statements with modifiers
  - Simple inheritance
  - Single modifier (private, public, etc.)
  - Multiple modifiers (private nosave, etc.)

- **TestFormatVariable**: Variable declarations
  - Simple variables
  - Variables with initialization
  - Variables with modifiers
  - Multiple variable declarations

- **TestFormatFunction**: Function definitions
  - Simple functions
  - Functions with return types
  - Functions with arguments

- **TestFormatClass**: Class/struct definitions
  - Simple classes
  - Classes with members

- **TestFormatComments**: Comment preservation
  - Line comments (//)
  - Block comments (/* */)
  - Mixed comments

- **TestFormatPreprocessor**: Preprocessor directives
  - #include
  - #define
  - #ifdef/#endif

- **TestFormatRealFile**: Complete file formatting

### 2. Integration Tests (`integration_test.go`)

Tests against real FluffOS repository code:

#### TestFluffOSTestSuite

Tests the formatter against 18+ real test files from the FluffOS driver repository. Each file is formatted and validated to ensure:

- No formatting errors
- Brace matching (all `{` and `}` preserved)
- Semicolon preservation
- Basic structure integrity

**Files tested:**
- `abs.c` - Absolute value efun tests
- `allocate.c` - Array allocation tests
- `capitalize.c` - String manipulation tests
- `filter.c` - Array filtering with function pointers
- `functions.c` - Function pointer tests
- `map.c` - Array mapping tests
- `master.c` - Master object (7.5KB, complex)
- `sort_array.c` - Array sorting tests
- `sprintf.c` - String formatting tests (8.7KB)
- `switch.c` - Switch statement tests
- `foreach.c` - Foreach loop tests
- `inherit.c` - Inheritance tests
- And more...

**Current Results:**
- **Total files:** 18
- **Successful:** 18
- **Failed:** 0
- **Pass rate:** 100.0%

#### TestFluffOSMasterFile

Specifically tests the complex `master.c` file which includes:
- Multiple inheritance statements
- Complex function definitions
- Switch statements
- Error handling
- Preprocessor conditionals

#### TestFluffOSPreservesComments

Validates that all comment types are preserved during formatting:
- Line comments
- Block comments
- Mixed comment styles

## Validation Criteria

The integration tests validate:

1. **No Errors**: Files must format without errors
2. **Brace Matching**: `{` and `}` counts must match original
3. **Semicolon Preservation**: `;` count preserved (within tolerance)
4. **Non-Empty Output**: Formatted file must not be empty
5. **Structure Preservation**: Key language constructs maintained

## Test Files Source

Test files are sourced from:
- **fluffos/fluffos**: Official FluffOS driver repository
  - URL: https://github.com/fluffos/fluffos
  - Path: `testsuite/single/tests/`

These files represent real-world LPC code used in production MUD servers.

## Adding New Tests

### Adding Unit Tests

1. Open `internal/formatter/formatter_test.go`
2. Add a new test function:
```go
func TestFormatNewFeature(t *testing.T) {
    tests := []struct {
        name     string
        input    string
        expected string
    }{
        {
            name:     "test case name",
            input:    `LPC code input`,
            expected: `expected formatted output`,
        },
    }

    for _, tt := range tests {
        t.Run(tt.name, func(t *testing.T) {
            result, err := Format(tt.input)
            if err != nil {
                t.Errorf("Format() error = %v", err)
                return
            }
            // Add assertions
        })
    }
}
```

### Adding Integration Test Files

1. Download test file from FluffOS:
```bash
curl -s https://raw.githubusercontent.com/fluffos/fluffos/master/testsuite/single/tests/efuns/FILENAME.c \
    -o tests/fluffos/single/FILENAME.c
```

2. Run integration tests:
```bash
go test -v ./internal/formatter/ -run TestFluffOSTestSuite
```

The test will automatically pick up new files in the `tests/fluffos/` directory.

## Continuous Integration

Tests should be run:
- Before committing changes
- In CI/CD pipeline
- After adding new features
- When updating test files

## Performance

Test execution is fast:
- Unit tests: ~10ms
- Integration tests: ~50ms
- Total: <100ms

This allows for rapid iteration during development.

## Known Limitations

Current formatter limitations (as identified through testing):

1. **String Content**: Operators/commas in strings may be affected
2. **Complex Expressions**: Very complex nested expressions may need refinement
3. **Closure Syntax**: Function pointer syntax `(: ... :)` formatting is basic

These limitations are tracked and will be addressed in future versions.

## Test Coverage Goals

- ✅ 100% of FluffOS test suite files format without errors
- ✅ All basic LPC constructs supported
- ✅ Comment preservation
- ✅ Preprocessor directive handling
- 🔄 Advanced closure formatting (in progress)
- 🔄 String literal protection (in progress)

## Troubleshooting

### Test Failures

If tests fail:

1. Check error message for specific file/line
2. Run specific test: `go test -v ./internal/formatter/ -run TestName`
3. Examine formatted output vs. original
4. Check for recent changes to formatter logic

### Missing Test Files

If integration tests are skipped:

```bash
# Test files not found - download them
curl -s https://raw.githubusercontent.com/fluffos/fluffos/master/testsuite/single/master.c \
    -o tests/fluffos/single/master.c
```

## Contributing Tests

When contributing:

1. Add tests for new features
2. Ensure all existing tests pass
3. Update this documentation
4. Include test files in PR if needed

## References

- FluffOS Repository: https://github.com/fluffos/fluffos
- FluffOS Documentation: https://www.fluffos.info/
- LPC Language Reference: https://www.fluffos.info/lpc/
