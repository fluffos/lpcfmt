package formatter

import (
	"strings"
	"testing"
)

func TestFormatInheritance(t *testing.T) {
	tests := []struct {
		name     string
		input    string
		expected string
	}{
		{
			name:     "simple inherit",
			input:    `inherit "/lib/base";`,
			expected: `inherit "/lib/base";`,
		},
		{
			name:     "inherit with modifier",
			input:    `private inherit "/lib/base";`,
			expected: `private inherit "/lib/base";`,
		},
		{
			name:     "multiple modifiers",
			input:    `private nosave inherit "/lib/base";`,
			expected: `private nosave inherit "/lib/base";`,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result, err := Format(tt.input)
			if err != nil {
				t.Errorf("Format() error = %v", err)
				return
			}
			result = strings.TrimSpace(result)
			expected := strings.TrimSpace(tt.expected)
			if result != expected {
				t.Errorf("Format() = %q, want %q", result, expected)
			}
		})
	}
}

func TestFormatVariable(t *testing.T) {
	tests := []struct {
		name     string
		input    string
		expected string
	}{
		{
			name:     "simple variable",
			input:    `int x;`,
			expected: `int x;`,
		},
		{
			name:     "variable with initialization",
			input:    `int x=5;`,
			expected: `int x = 5;`,
		},
		{
			name:     "variable with modifier",
			input:    `nosave int x;`,
			expected: `nosave int x;`,
		},
		{
			name:     "multiple variables",
			input:    `int x,y,z;`,
			expected: `int x, y, z;`,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result, err := Format(tt.input)
			if err != nil {
				t.Errorf("Format() error = %v", err)
				return
			}
			result = strings.TrimSpace(result)
			expected := strings.TrimSpace(tt.expected)
			if result != expected {
				t.Errorf("Format() = %q, want %q", result, expected)
			}
		})
	}
}

func TestFormatFunction(t *testing.T) {
	tests := []struct {
		name     string
		input    string
		contains []string
	}{
		{
			name: "simple function",
			input: `void test() {
  x = 1;
}`,
			contains: []string{"void test()", "{", "x = 1;", "}"},
		},
		{
			name: "function with return type",
			input: `int getValue(){
  return 5;
}`,
			contains: []string{"int getValue()", "return 5;"},
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result, err := Format(tt.input)
			if err != nil {
				t.Errorf("Format() error = %v", err)
				return
			}
			for _, substr := range tt.contains {
				if !strings.Contains(result, substr) {
					t.Errorf("Format() result should contain %q, got:\n%s", substr, result)
				}
			}
		})
	}
}

func TestFormatClass(t *testing.T) {
	tests := []struct {
		name     string
		input    string
		contains []string
	}{
		{
			name: "simple class",
			input: `class foo {
  int x;
  string y;
}`,
			contains: []string{"class foo", "int x;", "string y;"},
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result, err := Format(tt.input)
			if err != nil {
				t.Errorf("Format() error = %v", err)
				return
			}
			for _, substr := range tt.contains {
				if !strings.Contains(result, substr) {
					t.Errorf("Format() result should contain %q, got:\n%s", substr, result)
				}
			}
		})
	}
}

func TestFormatComments(t *testing.T) {
	tests := []struct {
		name     string
		input    string
		contains []string
	}{
		{
			name: "line comment",
			input: `// This is a comment
int x;`,
			contains: []string{"// This is a comment", "int x;"},
		},
		{
			name: "block comment",
			input: `/* This is a
   block comment */
int x;`,
			contains: []string{"/* This is a", "block comment */", "int x;"},
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result, err := Format(tt.input)
			if err != nil {
				t.Errorf("Format() error = %v", err)
				return
			}
			for _, substr := range tt.contains {
				if !strings.Contains(result, substr) {
					t.Errorf("Format() result should contain %q, got:\n%s", substr, result)
				}
			}
		})
	}
}

func TestFormatPreprocessor(t *testing.T) {
	tests := []struct {
		name     string
		input    string
		contains []string
	}{
		{
			name:     "include directive",
			input:    `#include <globals.h>`,
			contains: []string{"#include <globals.h>"},
		},
		{
			name:     "define directive",
			input:    `#define MAX 100`,
			contains: []string{"#define MAX 100"},
		},
		{
			name: "ifdef directive",
			input: `#ifdef DEBUG
int x;
#endif`,
			contains: []string{"#ifdef DEBUG", "#endif"},
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			result, err := Format(tt.input)
			if err != nil {
				t.Errorf("Format() error = %v", err)
				return
			}
			for _, substr := range tt.contains {
				if !strings.Contains(result, substr) {
					t.Errorf("Format() result should contain %q, got:\n%s", substr, result)
				}
			}
		})
	}
}

func TestFormatRealFile(t *testing.T) {
	input := `// file: test.c
#include <globals.h>
inherit "/lib/base";
nosave int x=0;
public void test(){
if(x==0){
x=1;
}
}`

	result, err := Format(input)
	if err != nil {
		t.Errorf("Format() error = %v", err)
		return
	}

	// Check that result contains key elements
	if !strings.Contains(result, "inherit \"/lib/base\";") {
		t.Errorf("Result should contain properly formatted inherit statement")
	}
	if !strings.Contains(result, "nosave int x = 0;") {
		t.Errorf("Result should contain properly formatted variable with spacing around =")
	}
	if !strings.Contains(result, "public void test()") {
		t.Errorf("Result should contain function signature")
	}
}
