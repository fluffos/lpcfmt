# Grammar Analysis - FluffOS Reference Files

## Purpose

This directory contains reference grammar files from the official FluffOS driver, used for comparison and analysis to ensure lpcfmt's grammar coverage is comprehensive.

## Files

### grammar.y
- **Source**: https://github.com/fluffos/fluffos/blob/master/src/compiler/internal/grammar.y
- **Size**: ~92 KB (3,430 lines)
- **Format**: Bison/Yacc grammar file
- **Purpose**: Defines the complete LPC language syntax and parsing rules
- **Contains**: 76 grammar rules, 66 tokens, operator precedence definitions

### lex.cc
- **Source**: https://github.com/fluffos/fluffos/blob/master/src/compiler/internal/lex.cc
- **Size**: ~124 KB (4,661 lines)
- **Format**: C++ lexer implementation
- **Purpose**: Tokenizes LPC source code for the parser
- **Contains**: Token definitions, lexical analysis, preprocessor handling

## Usage

These files were used to:
1. Identify missing tokens and grammar rules in lpcfmt
2. Compare language feature coverage
3. Ensure compliance with the official LPC specification
4. Document grammar decisions and updates

## Analysis Results

See the following documents for detailed analysis:
- `../GRAMMAR_COMPARISON.md` - Token-by-token comparison
- `../GRAMMAR_UPDATES.md` - Changes made to lpcfmt grammar
- `../lpc.g4` - Updated ANTLR grammar (95%+ coverage)

## Updates Made

Based on analysis of these files, we added:
1. **L_DOT token** - Member access operator (`.`)
2. **L_FUNCTION_OPEN/CLOSE tokens** - Function literals (`(: :)`)
3. **Default argument values** - Optional function parameters
4. **Enhanced grammar rules** - Better expression parsing

## License

These files are from the FluffOS project and retain their original license.
FluffOS is available at: https://github.com/fluffos/fluffos

## Date

Downloaded and analyzed: November 3, 2025
FluffOS version: master branch (latest at time of analysis)
