package ast

import (
	"bytes"
	"strings"
)

// Formatter formats an AST into LPC source code
type Formatter struct {
	buf        *bytes.Buffer
	indent     int
	indentSize int
}

// NewFormatter creates a new AST formatter
func NewFormatter() *Formatter {
	return &Formatter{
		buf:        &bytes.Buffer{},
		indent:     0,
		indentSize: 2,
	}
}

// Format formats a Program AST node
func (f *Formatter) Format(prog *Program) string {
	f.buf.Reset()
	f.indent = 0

	// Format all definitions
	for _, def := range prog.Definitions {
		f.formatDefinition(def)
	}

	// Clean up trailing whitespace
	result := f.buf.String()
	result = strings.TrimRight(result, "\n")
	if result != "" {
		result += "\n"
	}

	return result
}

// formatDefinition formats a top-level definition
func (f *Formatter) formatDefinition(def Definition) {
	switch d := def.(type) {
	case *Inheritance:
		f.formatInheritance(d)
	case *Variable:
		f.formatVariable(d)
	case *Function:
		f.formatFunction(d)
	case *TypeDecl:
		f.formatTypeDecl(d)
	case *ModifierChange:
		f.formatModifierChange(d)
	case *PreprocessorDirective:
		f.formatPreprocessor(d)
	}
}

// formatInheritance formats an inheritance statement
func (f *Formatter) formatInheritance(inh *Inheritance) {
	f.writeIndent()

	// Modifiers
	if len(inh.Modifiers) > 0 {
		f.write(strings.Join(inh.Modifiers, " "))
		f.write(" ")
	}

	f.write("inherit ")
	f.write(inh.Path)
	f.writeln(";")
	f.writeln("")
}

// formatVariable formats a variable declaration
func (f *Formatter) formatVariable(v *Variable) {
	f.writeIndent()

	// Modifiers
	if len(v.Modifiers) > 0 {
		f.write(strings.Join(v.Modifiers, " "))
		f.write(" ")
	}

	// Type
	if v.Type != "" {
		f.write(v.Type)
		f.write(" ")
	}

	// Pointer
	if v.IsPointer {
		f.write("*")
	}

	// Variable names
	for i, name := range v.Names {
		if i > 0 {
			f.write(", ")
		}
		f.write(name.Name)
		if name.Value != "" {
			f.write(" = ")
			f.write(name.Value)
		}
	}

	f.writeln(";")
	f.writeln("")
}

// formatFunction formats a function definition
func (f *Formatter) formatFunction(fn *Function) {
	f.writeIndent()

	// Modifiers
	if len(fn.Modifiers) > 0 {
		f.write(strings.Join(fn.Modifiers, " "))
		f.write(" ")
	}

	// Return type
	if fn.ReturnType != "" {
		f.write(fn.ReturnType)
		f.write(" ")
	}

	// Pointer
	if fn.IsPointer {
		f.write("*")
	}

	// Name
	f.write(fn.Name)

	// Arguments
	f.write("(")
	for i, arg := range fn.Arguments {
		if i > 0 {
			f.write(", ")
		}
		if arg.Type != "" {
			f.write(arg.Type)
		}
		if arg.IsPointer {
			f.write("*")
		}
		if arg.Name != "" {
			f.write(" ")
			f.write(arg.Name)
		}
		if arg.Default != "" {
			f.write(" = ")
			f.write(arg.Default)
		}
	}
	f.write(")")

	// Body
	if fn.IsSemi {
		f.writeln(";")
	} else if fn.Body != nil {
		f.writeln("")
		f.formatBlock(fn.Body)
	}

	f.writeln("")
}

// formatBlock formats a code block
func (f *Formatter) formatBlock(block *Block) {
	f.writeIndent()
	f.writeln("{")
	f.indent++

	// Local declarations
	for _, decl := range block.LocalDecls {
		f.writeIndent()
		f.write(decl.Type)
		f.write(" ")
		if decl.IsPointer {
			f.write("*")
		}
		f.write(decl.Name)
		if decl.Value != "" {
			f.write(" = ")
			f.write(decl.Value)
		}
		f.writeln(";")
	}

	// Blank line after declarations if any
	if len(block.LocalDecls) > 0 && len(block.Statements) > 0 {
		f.writeln("")
	}

	// Statements
	for _, stmt := range block.Statements {
		f.formatStatement(stmt)
	}

	f.indent--
	f.writeIndent()
	f.writeln("}")
}

// formatStatement formats a statement
func (f *Formatter) formatStatement(stmt Statement) {
	switch s := stmt.(type) {
	case *ExprStatement:
		f.writeIndent()
		f.write(s.Expression)
		f.writeln(";")

	case *ReturnStatement:
		f.writeIndent()
		f.write("return")
		if s.Value != "" {
			f.write(" ")
			f.write(s.Value)
		}
		f.writeln(";")

	case *IfStatement:
		f.writeIndent()
		f.write("if (")
		f.write(s.Condition)
		f.writeln(")")
		f.indent++
		f.formatStatement(s.ThenBlock)
		f.indent--
		if s.ElseBlock != nil {
			f.writeIndent()
			f.writeln("else")
			f.indent++
			f.formatStatement(s.ElseBlock)
			f.indent--
		}

	case *WhileStatement:
		f.writeIndent()
		f.write("while (")
		f.write(s.Condition)
		f.writeln(")")
		f.indent++
		f.formatStatement(s.Body)
		f.indent--

	case *ForStatement:
		f.writeIndent()
		f.write("for (")
		f.write(s.Init)
		f.write("; ")
		f.write(s.Condition)
		f.write("; ")
		f.write(s.Increment)
		f.writeln(")")
		f.indent++
		f.formatStatement(s.Body)
		f.indent--

	case *ForeachStatement:
		f.writeIndent()
		f.write("foreach (")
		f.write(strings.Join(s.Variables, ", "))
		f.write(" in ")
		f.write(s.Container)
		f.writeln(")")
		f.indent++
		f.formatStatement(s.Body)
		f.indent--

	case *DoStatement:
		f.writeIndent()
		f.writeln("do")
		f.indent++
		f.formatStatement(s.Body)
		f.indent--
		f.writeIndent()
		f.write("while (")
		f.write(s.Condition)
		f.writeln(");")

	case *SwitchStatement:
		f.writeIndent()
		f.write("switch (")
		f.write(s.Expression)
		f.writeln(")")
		f.writeIndent()
		f.writeln("{")
		f.indent++
		for _, caseClause := range s.Cases {
			f.formatCaseClause(caseClause)
		}
		f.indent--
		f.writeIndent()
		f.writeln("}")

	case *BreakStatement:
		f.writeIndent()
		f.writeln("break;")

	case *ContinueStatement:
		f.writeIndent()
		f.writeln("continue;")

	case *BlockStatement:
		if s.Block != nil {
			f.formatBlock(s.Block)
		}
	}
}

// formatCaseClause formats a case clause
func (f *Formatter) formatCaseClause(c *CaseClause) {
	f.writeIndent()
	if c.IsDefault {
		f.write("default:")
	} else {
		f.write("case ")
		f.write(strings.Join(c.Labels, ", "))
		f.write(":")
	}
	f.writeln("")

	f.indent++
	for _, stmt := range c.Statements {
		f.formatStatement(stmt)
	}
	f.indent--
}

// formatTypeDecl formats a type declaration
func (f *Formatter) formatTypeDecl(t *TypeDecl) {
	f.writeIndent()

	// Modifiers
	if len(t.Modifiers) > 0 {
		f.write(strings.Join(t.Modifiers, " "))
		f.write(" ")
	}

	f.write("class ")
	f.write(t.Name)
	f.writeln("")
	f.writeIndent()
	f.writeln("{")
	f.indent++

	// Fields
	for _, field := range t.Fields {
		f.writeIndent()
		f.write(field.Type)
		f.write(" ")
		if field.IsPointer {
			f.write("*")
		}
		f.write(field.Name)
		f.writeln(";")
	}

	f.indent--
	f.writeIndent()
	f.writeln("}")
	f.writeln("")
}

// formatModifierChange formats a modifier change
func (f *Formatter) formatModifierChange(m *ModifierChange) {
	f.writeIndent()
	if len(m.Modifiers) > 0 {
		f.write(strings.Join(m.Modifiers, " "))
	}
	f.writeln(":")
}

// formatPreprocessor formats a preprocessor directive
func (f *Formatter) formatPreprocessor(p *PreprocessorDirective) {
	f.writeln(p.Directive)
}

// Helper methods

func (f *Formatter) writeIndent() {
	f.buf.WriteString(strings.Repeat(" ", f.indent*f.indentSize))
}

func (f *Formatter) write(s string) {
	f.buf.WriteString(s)
}

func (f *Formatter) writeln(s string) {
	f.buf.WriteString(s)
	f.buf.WriteString("\n")
}
