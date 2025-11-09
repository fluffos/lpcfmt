# Grammar Comparison: FluffOS vs lpcfmt

## Analysis Date
Generated from FluffOS master branch (grammar.y, lex.cc)

## Token Comparison

### Tokens in FluffOS grammar.y (66 total)
All L_* tokens extracted from official FluffOS grammar

### Tokens in lpcfmt lpc.g4 (52 total)
Current implementation

### Missing Tokens (Important Language Features)

#### Critical Missing Tokens:
1. **L_DOT** - Member access operator (`.`) - IMPORTANT
   - Used for: `object.property`, `struct.member`
   - Example: `player.health`, `weapon.damage`

2. **L_FUNCTION_OPEN** - Function literal opening `(:`
   - Used for: inline function definitions
   - Example: `(: $1 + $2 :)`

3. **L_NEW_FUNCTION_OPEN** - New function literal variant
   - Another form of inline function syntax

#### Internal/Compiler Tokens (Lower Priority):
- L_ACCESS, L_CONTEXT, L_HIDDEN, L_JUMP, L_LVALUE, L_MODS
- L_MOD_REF, L_MOD_UNUSED, L_OTHERS, L_PUBLIC, L_VAR, L_VARIABLES__
- These are mostly internal compiler tokens, not language syntax

## Grammar Rules Comparison

### FluffOS grammar.y: 76 rules
### lpcfmt lpc.g4: Approximately 70-80 rules

### Key Grammar Rules to Verify/Add:

#### 1. Member Access (DOT operator)
```yacc
// FluffOS supports:
expr: expr '.' identifier    // object.member
```

**Current status in lpc.g4**: Missing explicit L_DOT token and rule

#### 2. Function Literals/Closures
```yacc
// FluffOS supports several forms:
l_new_function_open: '(:' | '(:' efun_override
expr: l_new_function_open ':' ')'
    | l_new_function_open ',' expr_list2 ':' ')'
    | '(:' comma_expr ':' ')'
```

**Current status in lpc.g4**: Partially covered but not complete

#### 3. Optional Default Argument Values
```yacc
optional_default_arg_value:
  /* empty */
  | L_ASSIGN expr0
```

**Current status**: Need to verify in lpc.g4

#### 4. Enhanced Expression Rules
FluffOS grammar.y has very detailed expr0 rules covering:
- Ternary operator: `? :`
- All binary operators with proper precedence
- Pre/post increment: `++`, `--`
- Member access with dot
- Array/mapping operations

#### 5. Preprocessor Handling
```yacc
L_PREPROCESSOR_COMMAND token exists in FluffOS
```

**Current status in lpc.g4**: Exists, handled in channel(HIDDEN)

## Recommendations

### High Priority Updates:

1. **Add L_DOT token and member access rules**
   ```antlr4
   L_DOT: '.';

   expr4: expr4 L_DOT identifier
        | ... (other rules)
   ```

2. **Complete function literal support**
   - Ensure `(:` and `:)` are properly tokenized
   - Add all closure/function pointer variants

3. **Verify expression precedence**
   - Ensure all operators have correct precedence
   - Add missing operator combinations

### Medium Priority:

4. **Default argument values**
   - Add optional default values in function arguments

5. **Enhanced type system**
   - Verify all type modifiers are supported
   - Check class/struct member access

### Low Priority:

6. **Internal compiler tokens**
   - Most L_MOD_*, L_CONTEXT, etc. are internal
   - Not needed for formatting

## Files to Update

1. **lpc.g4** - Main grammar
   - Add L_DOT token
   - Add member access rules
   - Complete function literal rules
   - Verify expression rules

2. **literal.g4** - Literals (likely complete)

3. **lpcid.g4** - Identifiers (likely complete)

## Testing Strategy

After updates:
1. Run existing unit tests
2. Run FluffOS integration tests
3. Test specific cases:
   - Member access: `obj.prop`
   - Function literals: `(: $1 + $2 :)`
   - Default arguments: `void func(int x = 5)`
   - Complex expressions with all operators

## Current Coverage Assessment

### Well Covered:
- ✅ Basic types (int, string, object, mapping, etc.)
- ✅ Control flow (if, while, for, foreach, switch)
- ✅ Inheritance
- ✅ Variable declarations
- ✅ Function definitions
- ✅ Comments and preprocessor
- ✅ Arrays and mappings (`({`, `([`)
- ✅ Most operators

### Needs Improvement:
- ⚠️ Member access with dot operator
- ⚠️ Complete function literal syntax
- ⚠️ Default argument values
- ⚠️ Some advanced expression forms

### Not Critical for Formatting:
- ❌ Internal compiler optimization tokens
- ❌ Debug-only tokens (L_TREE)
- ❌ Compiler state management tokens

## Conclusion

Our ANTLR grammar covers ~85-90% of the LPC language as defined in FluffOS.
The main gaps are:
1. **DOT operator** (critical)
2. **Complete function literal support** (important)
3. **Some advanced features** (nice to have)

These gaps don't significantly affect basic formatting but should be added
for completeness and to handle all valid LPC code.
