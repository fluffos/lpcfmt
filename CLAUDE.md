# CLAUDE.md - Developer Guide for AI Assistants

This guide is specifically designed for AI assistants (like Claude) working on the lpcfmt project. It contains all essential information for understanding, building, testing, and modifying the codebase.

## Project Overview

**lpcfmt** is a code formatter for LPC (Lars Pensjö C) language, similar to `gofmt` for Go. It uses an ANTLR4-based parser to format LPC source code with consistent style.

### Technology Stack
- **Language**: Go 1.22+
- **Parser Generator**: ANTLR 4.13.0
- **Build Tool**: Gradle (for parser generation)
- **Grammar Format**: ANTLR4 (.g4 files)

## Quick Start

### 1. Generate ANTLR Parser (Required First Step)

The Go parser must be generated from ANTLR grammar files before building:

```bash
# On Windows
gradlew.bat generateGoParser

# On Linux/Mac
./gradlew generateGoParser
```

This command:
- Downloads ANTLR 4.13.0 if needed
- Reads `lpc.g4`, `literal.g4`, `lpcid.g4` grammar files
- Generates Go parser code in `parser/` directory
- Creates ~19,000 lines of parser code

**Generated files** (auto-generated, don't edit):
```
parser/
├── lpc_lexer.go          (~650 lines)
├── lpc_parser.go         (~16,900 lines)
├── lpc_base_visitor.go   (~330 lines)
├── lpc_visitor.go        (~250 lines)
├── lpc_listener.go       (~495 lines)
└── lpc_base_listener.go  (~509 lines)
```

### 2. Build the Formatter

```bash
# Build executable
go build -o lpcfmt ./cmd/lpcfmt

# Or on Windows
go build -o lpcfmt.exe ./cmd/lpcfmt
```

### 3. Run Tests

```bash
# Run all tests
go test ./internal/formatter/

# Run with verbose output
go test -v ./internal/formatter/

# Run specific test
go test ./internal/formatter/ -run TestFormatInheritance -v

# Run idempotency tests on all 48+ test files
go test ./internal/formatter/ -run TestIdempotencyOnAllTestFiles -v

# Run with race detection
go test -race ./internal/formatter/
```

## Project Structure

```
lpcfmt/
├── lpc.g4, literal.g4, lpcid.g4    # ANTLR grammar definitions
├── build.gradle                     # Gradle config for parser generation
├── gradlew, gradlew.bat            # Gradle wrapper scripts
├── go.mod, go.sum                  # Go dependencies
│
├── cmd/lpcfmt/                     # CLI entry point
│   └── main.go                     # Command-line interface
│
├── internal/formatter/             # Core formatter logic
│   ├── formatter.go                # Main interface (calls ANTLR formatter)
│   ├── antlr_formatter.go          # ANTLR visitor-based formatter
│   ├── formatter_test.go           # Unit tests
│   ├── idempotency_test.go         # Idempotency tests
│   └── integration_test.go         # Integration tests
│
├── parser/                         # Auto-generated (by Gradle)
│   └── *.go                        # ANTLR-generated parser code
│
└── tests/                          # Test LPC files (48+ files)
    ├── fluffos/                    # FluffOS driver tests (18 files)
    ├── mudlibs/                    # MUD library code (18 files)
    ├── lpc-test/                   # Language tests (5 files)
    ├── nt7/                        # NT7 library (5 files)
    └── xkx100/                     # XKX100 library (2 files)
```

## Grammar Files

### lpc.g4 (Main Grammar)
- **Purpose**: LPC language syntax rules
- **Entry point**: `program` rule
- **Defines**: All language constructs (functions, variables, control flow, etc.)
- **Imports**: `literal.g4`, `lpcid.g4`

### literal.g4 (Literal Tokens)
- **Purpose**: String, number, and character literals
- **Defines**: StringLiteral, IntegerConstant, FloatingConstant
- **Features**: Escape sequences, Unicode support, binary/hex/octal numbers

### lpcid.g4 (Identifiers)
- **Purpose**: Identifier rules
- **Defines**: L_IDENTIFIER pattern (letters, digits, underscore)

## How the Formatter Works

### Architecture

```
Input LPC Code
    ↓
ANTLR Lexer (lpc_lexer.go)
    ↓
Token Stream
    ↓
ANTLR Parser (lpc_parser.go)
    ↓
Parse Tree (AST)
    ↓
FormattingVisitor (antlr_formatter.go)
    ↓
Formatted Output
```

### Key Components

#### 1. `formatter.go` (Public API)
```go
func Format(src string) (string, error)
```
- Entry point for formatting
- Calls `FormatWithANTLR()` internally

#### 2. `antlr_formatter.go` (Core Logic)
- **FormatWithANTLR()**: Sets up lexer, parser, visitor
- **FormattingVisitor**: Walks AST and generates formatted code
- **Visitor methods**: `VisitProgram()`, `VisitFunction()`, `VisitVar()`, etc.

#### 3. Visitor Pattern
Each grammar rule has a corresponding Visit method:
- `VisitProgram()` - Top-level program
- `VisitDef()` - Top-level definitions
- `VisitFunction()` - Function definitions
- `VisitVar()` - Variable declarations
- `VisitInheritance()` - Inherit statements
- `VisitBlock()` - Code blocks
- `VisitStatement()` - Statements

## Testing

### Test Types

#### 1. Unit Tests (`formatter_test.go`)
Tests individual language constructs:
```go
func TestFormatInheritance(t *testing.T)  // Inherit statements
func TestFormatVariable(t *testing.T)     // Variable declarations
func TestFormatFunction(t *testing.T)     // Function definitions
func TestFormatClass(t *testing.T)        // Class/struct definitions
func TestFormatComments(t *testing.T)     // Comment preservation
func TestFormatPreprocessor(t *testing.T) // Preprocessor directives
```

#### 2. Idempotency Tests (`idempotency_test.go`)
Ensures `format(format(x)) == format(x)`:
```go
func TestIdempotency(t *testing.T)  // Simple test cases
func TestIdempotencyOnAllTestFiles(t *testing.T)  // All 48+ files
```

**Critical**: If idempotency fails, the formatter is broken!

#### 3. Integration Tests (`integration_test.go`)
Tests complete file formatting with real-world code.

### Test File Organization

All test files auto-discovered in `tests/`:
```bash
tests/
├── fluffos/      # 18 files from FluffOS driver
├── mudlibs/      # 18 files from MUD libraries
├── lpc-test/     # 5 LPC language tests
├── nt7/          # 5 files from NT7
└── xkx100/       # 2 files from XKX100
```

**Total: 48+ test files** automatically tested for idempotency.

## Common Development Tasks

### Regenerate Parser After Grammar Changes

```bash
# 1. Edit grammar files (lpc.g4, literal.g4, or lpcid.g4)
# 2. Regenerate parser
./gradlew generateGoParser

# 3. Rebuild
go build ./cmd/lpcfmt

# 4. Run tests
go test ./internal/formatter/
```

### Add New Visitor Method

When adding support for a new grammar rule:

1. **Find the context type** in `parser/lpc_parser.go`:
   ```bash
   grep "type.*Context struct" parser/lpc_parser.go
   ```

2. **Check available methods**:
   ```bash
   grep "func (s \*YourContext)" parser/lpc_parser.go
   ```

3. **Implement visitor** in `antlr_formatter.go`:
   ```go
   func (v *FormattingVisitor) VisitYourRule(ctx *parser.YourContext) interface{} {
       // Format the rule
       return nil
   }
   ```

### Debug Parser Issues

```bash
# Run with verbose output to see parsing errors
go test -v ./internal/formatter/ 2>&1 | grep "token recognition error"

# Test single file
echo 'int x = 5;' | go run ./cmd/lpcfmt
```

### Add Test Files

1. Place `.c` or `.lpc` files in `tests/` subdirectories
2. Tests automatically discover and run on them
3. Verify with: `go test -run TestIdempotencyOnAllTestFiles -v`

## Gradle Build System

### build.gradle
Defines ANTLR parser generation task:
```gradle
task generateGoParser(type: JavaExec) {
    mainClass = 'org.antlr.v4.Tool'
    args = [
        '-Dlanguage=Go',    // Generate Go code
        '-visitor',          // Generate visitor interface
        '-package', 'parser',
        '-o', 'parser',
        'lpc.g4'            // Main grammar (imports others)
    ]
}
```

### Dependencies
- ANTLR 4.13.0 (auto-downloaded by Gradle)
- Go runtime dependency: `github.com/antlr4-go/antlr/v4 v4.13.1`

## Troubleshooting

### "Command not found: gradlew"
Use the wrapper:
```bash
# Windows
gradlew.bat generateGoParser

# Linux/Mac (make executable first)
chmod +x gradlew
./gradlew generateGoParser
```

### "Parser not found" errors
The parser directory is missing. Regenerate:
```bash
./gradlew generateGoParser
```

### Tests failing after grammar changes
1. Regenerate parser
2. Check for breaking changes in generated code
3. Update visitor methods in `antlr_formatter.go`

### Build errors in parser/
Don't edit generated files! Modify grammar instead:
1. Edit `lpc.g4`, `literal.g4`, or `lpcid.g4`
2. Regenerate: `./gradlew generateGoParser`

## Known Limitations

### Current Status
- ✅ Inheritance statements
- ✅ Variable declarations with modifiers
- ✅ Function signatures
- ✅ Idempotency on 48+ test files
- ⚠️ Comment preservation (needs work)
- ⚠️ Preprocessor directives (needs work)
- ⚠️ Function block content (partially working)
- ⚠️ Assignment spacing (`x=5` → `x = 5`)

### Grammar Coverage
- 95%+ of LPC language features
- Some dialect-specific features not supported (e.g., `@` operator)
- Returns original source if parsing fails

## Development Workflow

### Standard Workflow
```bash
# 1. Make grammar changes
vim lpc.g4

# 2. Regenerate parser
./gradlew generateGoParser

# 3. Update visitor code (if needed)
vim internal/formatter/antlr_formatter.go

# 4. Run tests
go test ./internal/formatter/

# 5. Build
go build -o lpcfmt ./cmd/lpcfmt

# 6. Test manually
echo 'int x=5;' | ./lpcfmt
```

### Before Committing
```bash
# 1. Ensure all tests pass
go test ./...

# 2. Run formatter on test files
go test -v ./internal/formatter/ -run TestIdempotencyOnAllTestFiles

# 3. Check formatting is stable
./lpcfmt -l tests/fluffos/

# 4. Build succeeds
go build ./cmd/lpcfmt
```

## Important Files to NOT Edit

These are auto-generated:
- `parser/*.go` - Generated by ANTLR
- `parser/*.interp` - ANTLR interpreter data
- `parser/*.tokens` - Token definitions
- `.gradle/` - Gradle cache

## Useful Commands

```bash
# Clean and rebuild everything
rm -rf parser/
./gradlew clean generateGoParser
go build ./cmd/lpcfmt

# Find all test files
find tests/ -name "*.c" -o -name "*.lpc" | wc -l

# Run formatter on all test files
find tests/ -name "*.c" -exec ./lpcfmt -l {} \;

# Check grammar syntax (without generating)
java -jar gradle/wrapper/gradle-wrapper.jar \
  org.antlr.v4.Tool -Dlanguage=Go lpc.g4

# View ANTLR parse tree (for debugging)
java -jar antlr-4.13.0-complete.jar lpc.g4 -gui
```

## Dependencies

### Go Dependencies
```bash
# Update dependencies
go get -u ./...
go mod tidy
```

### Required in go.mod
```
github.com/antlr4-go/antlr/v4 v4.13.1
golang.org/x/exp v0.0.0-20240506185415-9bf2ced13842
```

## CI/CD Notes

For automated builds, ensure:
1. Java 11+ installed (for Gradle/ANTLR)
2. Go 1.22+ installed
3. Run `./gradlew generateGoParser` before `go build`
4. Parser generation may take 5-10 seconds

## Additional Resources

- **ANTLR Documentation**: https://github.com/antlr/antlr4/blob/master/doc/index.md
- **ANTLR Go Target**: https://github.com/antlr/antlr4/blob/master/doc/go-target.md
- **FluffOS Grammar**: `grammar_analysis/grammar.y` (reference)
- **Test Files**: `tests/README.md`

## Summary

**To work on this project:**
1. Generate parser: `./gradlew generateGoParser`
2. Make changes to grammar or visitor code
3. Run tests: `go test ./internal/formatter/`
4. Build: `go build ./cmd/lpcfmt`
5. Regenerate parser if grammar changed

**Key insight**: The formatter uses the Visitor pattern to walk the ANTLR parse tree and generate formatted output. Most formatting logic is in `antlr_formatter.go`.
