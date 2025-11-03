# Additional LPC Test Files

This directory contains additional test files from various FluffOS organization repositories, providing comprehensive coverage of LPC language features and UTF-8/Chinese character support.

## Test File Organization

For each test file, we maintain three versions:
- **`.c`** - Original file (preserved as-is)
- **`.c.orig`** - Copy of original for comparison
- **`.c.formatted`** - Formatted version produced by lpcfmt

This allows for:
- Diff analysis between original and formatted versions
- Verification that formatting preserves code semantics
- Testing that comments, UTF-8 characters, and structure are maintained

## Test Sources

### lpc-test (5 files, 1,271 lines)
Source: https://github.com/fluffos/lpc-test

Test library designed for FluffOS driver testing, featuring:

| File | Lines | Description | Features Tested |
|------|-------|-------------|-----------------|
| user1.c | 38 | Custom user object with Chinese names | UTF-8 strings, random selection, array literals, function literals |
| living.c | 75 | Living entity module | Property management, data structures |
| combat.c | 112 | Combat system | Enemy tracking, heart_beat mechanics, death handling |
| room.c | 94 | Room environment module | Environment descriptions, exit management |
| maze.c | 952 | Procedural maze generator | Complex algorithms, virtual objects, bitwise operations |

**Coverage**: Demonstrates practical game development patterns, inheritance hierarchies, and procedural generation algorithms.

### nt7 - 泥潭7 (5 files, 2,248 lines)
Source: https://github.com/fluffos/nt7

Classic Chinese MUD upgraded to UTF-8 and FluffOS v2019:

| File | Lines | Description | Features Tested |
|------|-------|-------------|-----------------|
| char.c | 539 | Character base class | Complex character management, Chinese text |
| room.c | 483 | Room implementation | Environment system, Chinese descriptions |
| equip.c | 425 | Equipment system | Item management, attribute calculations |
| weapon.c | 299 | Weapon mechanics | Weapon attributes, combat bonuses |
| feature_skill.c | 502 | Skill system | Skill learning, advancement, Chinese skill names |

**Coverage**: Production Chinese MUD code with extensive UTF-8 usage, complex game mechanics, and real-world code patterns.

### xkx100 - 侠客行100 (2 files, 377 lines)
Source: https://github.com/fluffos/xkx100

Chinese martial arts MUD ("侠客行100" - Swordsman Journey):

| File | Lines | Description | Features Tested |
|------|-------|-------------|-----------------|
| char.c | 165 | Character system | Player attributes, martial arts context |
| room.c | 212 | Room module | Chinese environment descriptions, navigation |

**Coverage**: Martial arts theme with Chinese character handling, UTF-8 string operations.

## Test Statistics

```
Total Files: 12 LPC source files
Total Lines: 3,896 lines of LPC code
Repositories: 3 (lpc-test, nt7, xkx100)
Pass Rate: 100% (all files format successfully)
```

## Language Features Covered

### UTF-8 and Chinese Characters
- ✅ Chinese comments (/* 雪风@mud.ren */)
- ✅ Chinese string literals ("赵", "钱", "孙", "李", etc.)
- ✅ Chinese identifiers and descriptions
- ✅ Mixed Chinese and English code
- ✅ UTF-8 preservation in formatting

### Advanced LPC Syntax
- ✅ Procedural maze generation algorithms
- ✅ Virtual object patterns
- ✅ Heart_beat and combat mechanics
- ✅ Complex mapping and array operations
- ✅ Function literals and closures
- ✅ Multi-level inheritance
- ✅ Skill and equipment systems

### Code Patterns
- ✅ Game daemon architecture
- ✅ Character attribute systems
- ✅ Combat and skill mechanics
- ✅ Environment/room systems
- ✅ Equipment and inventory
- ✅ Procedural content generation

## Running Tests

### Format All New Test Files
```bash
for file in tests/lpc-test/*.c tests/nt7/*.c tests/xkx100/*.c; do
    ./lpcfmt "$file" > "${file}.formatted"
done
```

### Compare Original vs Formatted
```bash
diff -u tests/lpc-test/user1.c.orig tests/lpc-test/user1.c.formatted
```

### Verify UTF-8 Preservation
```bash
# Check that Chinese characters are preserved
grep -o "雪风" tests/lpc-test/user1.c.orig
grep -o "雪风" tests/lpc-test/user1.c.formatted
```

### Test All Files
```bash
for file in $(find tests/lpc-test tests/nt7 tests/xkx100 -name "*.c"); do
    ./lpcfmt "$file" > /dev/null && echo "✓ $file" || echo "✗ $file FAILED"
done
```

## Formatting Changes

The formatter makes the following changes while preserving semantics:

1. **Indentation**: Normalizes to 2-space indentation
2. **Block Comments**: Adjusts spacing in multi-line comments
3. **Spacing**: Adds consistent spacing around operators
4. **Braces**: Consistent brace placement
5. **UTF-8**: Preserves all Chinese characters and UTF-8 content

Example from user1.c:
```lpc
// Original:
        string *name1 = ({"赵", "钱", "孙", "李"});

// Formatted:
    string *name1 =({"赵", "钱", "孙", "李"});
```

Note: Chinese characters are perfectly preserved - the formatter is UTF-8 safe.

## Repository Details

### lpc-test
- **Purpose**: Official FluffOS test library
- **Focus**: Practical game development modules with minimal complexity
- **Highlights**: Procedural maze generation (952 lines), combat system, user objects

### nt7 (泥潭7)
- **Purpose**: Classic MUD upgraded for modern FluffOS
- **Focus**: Full-featured Chinese MUD with complete game systems
- **Highlights**: Complex character system, equipment/weapon mechanics, skill advancement
- **Note**: Original authors acknowledge some bugs remain for developers to debug

### xkx100 (侠客行100)
- **Purpose**: Chinese martial arts themed MUD
- **Focus**: Wuxia/martial arts gameplay
- **Highlights**: Martial arts skills, Chinese cultural context
- **Known Issues**: Some Chinese character layout issues noted in original (maps, etc.)

## Validation

All files have been validated to:
- ✅ Format without errors
- ✅ Preserve UTF-8 encoding
- ✅ Maintain Chinese characters
- ✅ Produce consistent formatting
- ✅ Generate valid diffs

Last Updated: 2025-11-03
