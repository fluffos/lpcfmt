package ast

// Node is the interface that all AST nodes implement
type Node interface {
	node()
	String() string
}

// Position represents a source location
type Position struct {
	Line   int
	Column int
}

// Comment represents a comment (line or block)
type Comment struct {
	Text     string
	IsBlock  bool // true for /* */, false for //
	Position Position
}

func (c *Comment) node()         {}
func (c *Comment) String() string { return c.Text }

// Program is the root node
type Program struct {
	Definitions []Definition
	Comments    []*Comment
}

func (p *Program) node()         {}
func (p *Program) String() string { return "Program" }

// Definition is implemented by top-level definitions
type Definition interface {
	Node
	definition()
}

// Inheritance represents an inherit statement
type Inheritance struct {
	Modifiers []string // private, public, static, etc.
	Path      string   // inherited file path
	Comments  []*Comment
}

func (i *Inheritance) node()       {}
func (i *Inheritance) definition() {}
func (i *Inheritance) String() string {
	return "Inheritance: " + i.Path
}

// Variable represents a variable declaration
type Variable struct {
	Modifiers []string   // nosave, private, etc.
	Type      string     // int, string, etc.
	IsPointer bool       // true if *
	Names     []*VarName // variable names
	Comments  []*Comment
}

func (v *Variable) node()       {}
func (v *Variable) definition() {}
func (v *Variable) String() string {
	return "Variable: " + v.Type
}

// VarName represents a single variable name with optional initialization
type VarName struct {
	Name  string
	Value string // empty if no initialization
}

// Function represents a function definition
type Function struct {
	Modifiers  []string // public, private, etc.
	ReturnType string   // int, void, etc.
	IsPointer  bool     // true if returns pointer
	Name       string
	Arguments  []*Argument
	Body       *Block
	IsSemi     bool // true if just declaration (no body)
	Comments   []*Comment
}

func (f *Function) node()       {}
func (f *Function) definition() {}
func (f *Function) String() string {
	return "Function: " + f.Name
}

// Argument represents a function argument
type Argument struct {
	Type      string
	IsPointer bool
	Name      string
	Default   string // default value if any
}

// Block represents a code block
type Block struct {
	LocalDecls []*LocalDecl
	Statements []Statement
}

func (b *Block) node()         {}
func (b *Block) String() string { return "Block" }

// LocalDecl represents a local variable declaration
type LocalDecl struct {
	Type      string
	IsPointer bool
	Name      string
	Value     string // initialization value
}

// Statement is implemented by all statement types
type Statement interface {
	Node
	statement()
}

// ExprStatement represents an expression statement
type ExprStatement struct {
	Expression string
}

func (e *ExprStatement) node()      {}
func (e *ExprStatement) statement() {}
func (e *ExprStatement) String() string {
	return "ExprStmt: " + e.Expression
}

// ReturnStatement represents a return statement
type ReturnStatement struct {
	Value string // return value expression
}

func (r *ReturnStatement) node()      {}
func (r *ReturnStatement) statement() {}
func (r *ReturnStatement) String() string {
	return "Return"
}

// IfStatement represents an if statement
type IfStatement struct {
	Condition string
	ThenBlock Statement
	ElseBlock Statement // nil if no else
}

func (i *IfStatement) node()      {}
func (i *IfStatement) statement() {}
func (i *IfStatement) String() string {
	return "If"
}

// WhileStatement represents a while loop
type WhileStatement struct {
	Condition string
	Body      Statement
}

func (w *WhileStatement) node()      {}
func (w *WhileStatement) statement() {}
func (w *WhileStatement) String() string {
	return "While"
}

// ForStatement represents a for loop
type ForStatement struct {
	Init      string
	Condition string
	Increment string
	Body      Statement
}

func (f *ForStatement) node()      {}
func (f *ForStatement) statement() {}
func (f *ForStatement) String() string {
	return "For"
}

// ForeachStatement represents a foreach loop
type ForeachStatement struct {
	Variables []string // loop variables
	Container string   // container expression
	Body      Statement
}

func (f *ForeachStatement) node()      {}
func (f *ForeachStatement) statement() {}
func (f *ForeachStatement) String() string {
	return "Foreach"
}

// DoStatement represents a do-while loop
type DoStatement struct {
	Body      Statement
	Condition string
}

func (d *DoStatement) node()      {}
func (d *DoStatement) statement() {}
func (d *DoStatement) String() string {
	return "Do"
}

// SwitchStatement represents a switch statement
type SwitchStatement struct {
	Expression string
	Cases      []*CaseClause
}

func (s *SwitchStatement) node()      {}
func (s *SwitchStatement) statement() {}
func (s *SwitchStatement) String() string {
	return "Switch"
}

// CaseClause represents a case or default clause
type CaseClause struct {
	IsDefault  bool
	Labels     []string // case labels (can be multiple or range)
	Statements []Statement
}

// BreakStatement represents a break statement
type BreakStatement struct{}

func (b *BreakStatement) node()      {}
func (b *BreakStatement) statement() {}
func (b *BreakStatement) String() string {
	return "Break"
}

// ContinueStatement represents a continue statement
type ContinueStatement struct{}

func (c *ContinueStatement) node()      {}
func (c *ContinueStatement) statement() {}
func (c *ContinueStatement) String() string {
	return "Continue"
}

// BlockStatement wraps a Block as a Statement
type BlockStatement struct {
	Block *Block
}

func (b *BlockStatement) node()      {}
func (b *BlockStatement) statement() {}
func (b *BlockStatement) String() string {
	return "BlockStmt"
}

// TypeDecl represents a class/struct declaration
type TypeDecl struct {
	Modifiers []string
	Name      string
	Fields    []*Field
	Comments  []*Comment
}

func (t *TypeDecl) node()       {}
func (t *TypeDecl) definition() {}
func (t *TypeDecl) String() string {
	return "TypeDecl: " + t.Name
}

// Field represents a field in a class/struct
type Field struct {
	Type      string
	IsPointer bool
	Name      string
}

// ModifierChange represents a modifier change statement (modifier_list ':')
type ModifierChange struct {
	Modifiers []string
}

func (m *ModifierChange) node()       {}
func (m *ModifierChange) definition() {}
func (m *ModifierChange) String() string {
	return "ModifierChange"
}

// PreprocessorDirective represents a preprocessor directive
type PreprocessorDirective struct {
	Directive string // full directive text (e.g., "#include <foo.h>")
}

func (p *PreprocessorDirective) node()       {}
func (p *PreprocessorDirective) definition() {}
func (p *PreprocessorDirective) String() string {
	return "Preprocessor: " + p.Directive
}
