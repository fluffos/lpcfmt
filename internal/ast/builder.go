package ast

import (
	"github.com/antlr4-go/antlr/v4"
	"github.com/fluffos/lpcfmt/parser"
)

// Builder converts ANTLR parse tree to AST
type Builder struct {
	parser.BaselpcVisitor
	tokens *antlr.CommonTokenStream
}

// NewBuilder creates a new AST builder
func NewBuilder(tokens *antlr.CommonTokenStream) *Builder {
	return &Builder{
		tokens: tokens,
	}
}

// Build creates an AST from the parse tree
func (b *Builder) Build(tree parser.IProgramContext) *Program {
	result := b.Visit(tree)
	if prog, ok := result.(*Program); ok {
		return prog
	}
	return &Program{}
}

// VisitProgram builds the root Program node
func (b *Builder) VisitProgram(ctx *parser.ProgramContext) interface{} {
	prog := &Program{
		Definitions: []Definition{},
		Comments:    []*Comment{},
	}

	// Collect all definitions
	for _, def := range ctx.AllDef() {
		if result := b.Visit(def); result != nil {
			if d, ok := result.(Definition); ok {
				prog.Definitions = append(prog.Definitions, d)
			}
		}
	}

	// TODO: Collect comments from hidden channel

	return prog
}

// VisitDef dispatches to specific definition types
func (b *Builder) VisitDef(ctx *parser.DefContext) interface{} {
	if ctx.Function() != nil {
		return b.Visit(ctx.Function())
	} else if ctx.Var_() != nil {
		return b.Visit(ctx.Var_())
	} else if ctx.Inheritance() != nil {
		return b.Visit(ctx.Inheritance())
	} else if ctx.Type_decl() != nil {
		return b.Visit(ctx.Type_decl())
	} else if ctx.Modifier_change() != nil {
		return b.Visit(ctx.Modifier_change())
	}
	return nil
}

// VisitInheritance builds an Inheritance node
func (b *Builder) VisitInheritance(ctx *parser.InheritanceContext) interface{} {
	inherit := &Inheritance{
		Modifiers: []string{},
		Comments:  []*Comment{},
	}

	// Get modifiers
	if ctx.Type_modifier_list() != nil {
		for _, mod := range ctx.Type_modifier_list().AllL_TYPE_MODIFIER() {
			inherit.Modifiers = append(inherit.Modifiers, mod.GetText())
		}
	}

	// Get path
	if ctx.String_con1() != nil {
		inherit.Path = ctx.String_con1().GetText()
	}

	return inherit
}

// VisitVar builds a Variable node
func (b *Builder) VisitVar(ctx *parser.VarContext) interface{} {
	varNode := &Variable{
		Modifiers: []string{},
		Names:     []*VarName{},
		Comments:  []*Comment{},
	}

	// Get type information
	if ctx.Type_() != nil {
		typeCtx := ctx.Type_()

		// Modifiers
		if typeCtx.Type_modifier_list() != nil {
			for _, mod := range typeCtx.Type_modifier_list().AllL_TYPE_MODIFIER() {
				varNode.Modifiers = append(varNode.Modifiers, mod.GetText())
			}
		}

		// Type
		if typeCtx.Opt_basic_type() != nil {
			varNode.Type = typeCtx.Opt_basic_type().GetText()
		}
	}

	// Get variable names
	for _, nameCtx := range ctx.AllNew_name() {
		name := &VarName{
			Name: "",
		}

		// Check for pointer
		if nameCtx.Optional_star() != nil && nameCtx.Optional_star().GetText() == "*" {
			varNode.IsPointer = true
		}

		// Get name
		if nameCtx.Identifier() != nil {
			name.Name = nameCtx.Identifier().GetText()
		}

		// Get initialization value
		if nameCtx.L_ASSIGN() != nil && nameCtx.Expr0() != nil {
			name.Value = nameCtx.Expr0().GetText()
		}

		varNode.Names = append(varNode.Names, name)
	}

	return varNode
}

// VisitFunction builds a Function node
func (b *Builder) VisitFunction(ctx *parser.FunctionContext) interface{} {
	fn := &Function{
		Modifiers: []string{},
		Arguments: []*Argument{},
		Comments:  []*Comment{},
	}

	// Get type information
	if ctx.Type_() != nil {
		typeCtx := ctx.Type_()

		// Modifiers
		if typeCtx.Type_modifier_list() != nil {
			for _, mod := range typeCtx.Type_modifier_list().AllL_TYPE_MODIFIER() {
				fn.Modifiers = append(fn.Modifiers, mod.GetText())
			}
		}

		// Return type
		if typeCtx.Opt_basic_type() != nil {
			fn.ReturnType = typeCtx.Opt_basic_type().GetText()
		}
	}

	// Check for pointer
	if ctx.Optional_star() != nil && ctx.Optional_star().GetText() == "*" {
		fn.IsPointer = true
	}

	// Get function name
	if ctx.Identifier() != nil {
		fn.Name = ctx.Identifier().GetText()
	}

	// Get arguments (simplified for now)
	if ctx.Argument() != nil {
		// TODO: Parse arguments properly
		argText := ctx.Argument().GetText()
		if argText != "" {
			fn.Arguments = append(fn.Arguments, &Argument{
				Type: argText,
			})
		}
	}

	// Get body
	if ctx.Block_or_semi() != nil {
		if ctx.Block_or_semi().Block() != nil {
			if result := b.Visit(ctx.Block_or_semi().Block()); result != nil {
				if block, ok := result.(*Block); ok {
					fn.Body = block
				}
			}
		} else {
			// Just a semicolon
			fn.IsSemi = true
		}
	}

	return fn
}

// VisitBlock builds a Block node
func (b *Builder) VisitBlock(ctx *parser.BlockContext) interface{} {
	block := &Block{
		LocalDecls: []*LocalDecl{},
		Statements: []Statement{},
	}

	// Get local declarations (simplified)
	if ctx.Local_declarations() != nil {
		// TODO: Parse local declarations
	}

	// Get statements
	for _, stmtCtx := range ctx.AllStatement() {
		if result := b.Visit(stmtCtx); result != nil {
			if stmt, ok := result.(Statement); ok {
				block.Statements = append(block.Statements, stmt)
			}
		}
	}

	return block
}

// VisitStatement builds a Statement node
func (b *Builder) VisitStatement(ctx *parser.StatementContext) interface{} {
	// Expression statement
	if ctx.Comma_expr() != nil {
		return &ExprStatement{
			Expression: ctx.Comma_expr().GetText(),
		}
	}

	// Return statement
	if ctx.Return_stmt() != nil {
		if result := b.Visit(ctx.Return_stmt()); result != nil {
			return result
		}
	}

	// If statement
	if ctx.Cond() != nil {
		if result := b.Visit(ctx.Cond()); result != nil {
			return result
		}
	}

	// While statement
	if ctx.While_stmt() != nil {
		if result := b.Visit(ctx.While_stmt()); result != nil {
			return result
		}
	}

	// Do-while statement
	if ctx.Do_stmt() != nil {
		if result := b.Visit(ctx.Do_stmt()); result != nil {
			return result
		}
	}

	// Switch statement
	if ctx.Switch_stmt() != nil {
		if result := b.Visit(ctx.Switch_stmt()); result != nil {
			return result
		}
	}

	// Declaration block (for, foreach, or block)
	if ctx.Decl_block() != nil {
		if result := b.Visit(ctx.Decl_block()); result != nil {
			return result
		}
	}

	// Break
	if ctx.L_BREAK() != nil {
		return &BreakStatement{}
	}

	// Continue
	if ctx.L_CONTINUE() != nil {
		return &ContinueStatement{}
	}

	return nil
}

// VisitDecl_block handles for, foreach, or block
func (b *Builder) VisitDecl_block(ctx *parser.Decl_blockContext) interface{} {
	if ctx.Block() != nil {
		if result := b.Visit(ctx.Block()); result != nil {
			if block, ok := result.(*Block); ok {
				return &BlockStatement{Block: block}
			}
		}
	} else if ctx.For_stmt() != nil {
		return b.Visit(ctx.For_stmt())
	} else if ctx.Foreach() != nil {
		return b.Visit(ctx.Foreach())
	}
	return nil
}

// VisitReturn_stmt builds a ReturnStatement
func (b *Builder) VisitReturn_stmt(ctx *parser.Return_stmtContext) interface{} {
	ret := &ReturnStatement{}
	if ctx.Comma_expr() != nil {
		ret.Value = ctx.Comma_expr().GetText()
	}
	return ret
}

// VisitCond builds an IfStatement
func (b *Builder) VisitCond(ctx *parser.CondContext) interface{} {
	ifStmt := &IfStatement{}

	if ctx.Comma_expr() != nil {
		ifStmt.Condition = ctx.Comma_expr().GetText()
	}

	if ctx.Statement() != nil {
		if result := b.Visit(ctx.Statement()); result != nil {
			if stmt, ok := result.(Statement); ok {
				ifStmt.ThenBlock = stmt
			}
		}
	}

	// Else part
	if ctx.Optional_else_part() != nil && ctx.Optional_else_part().Statement() != nil {
		if result := b.Visit(ctx.Optional_else_part().Statement()); result != nil {
			if stmt, ok := result.(Statement); ok {
				ifStmt.ElseBlock = stmt
			}
		}
	}

	return ifStmt
}

// VisitWhile_stmt builds a WhileStatement
func (b *Builder) VisitWhile_stmt(ctx *parser.While_stmtContext) interface{} {
	whileStmt := &WhileStatement{}

	if ctx.Comma_expr() != nil {
		whileStmt.Condition = ctx.Comma_expr().GetText()
	}

	if ctx.Statement() != nil {
		if result := b.Visit(ctx.Statement()); result != nil {
			if stmt, ok := result.(Statement); ok {
				whileStmt.Body = stmt
			}
		}
	}

	return whileStmt
}

// VisitFor_stmt builds a ForStatement
func (b *Builder) VisitFor_stmt(ctx *parser.For_stmtContext) interface{} {
	forStmt := &ForStatement{}

	if ctx.First_for_expr() != nil {
		forStmt.Init = ctx.First_for_expr().GetText()
	}

	exprs := ctx.AllFor_expr()
	if len(exprs) > 0 {
		forStmt.Condition = exprs[0].GetText()
	}
	if len(exprs) > 1 {
		forStmt.Increment = exprs[1].GetText()
	}

	if ctx.Statement() != nil {
		if result := b.Visit(ctx.Statement()); result != nil {
			if stmt, ok := result.(Statement); ok {
				forStmt.Body = stmt
			}
		}
	}

	return forStmt
}

// VisitType_decl builds a TypeDecl node
func (b *Builder) VisitType_decl(ctx *parser.Type_declContext) interface{} {
	typeDecl := &TypeDecl{
		Modifiers: []string{},
		Fields:    []*Field{},
		Comments:  []*Comment{},
	}

	// Get modifiers
	if ctx.Type_modifier_list() != nil {
		for _, mod := range ctx.Type_modifier_list().AllL_TYPE_MODIFIER() {
			typeDecl.Modifiers = append(typeDecl.Modifiers, mod.GetText())
		}
	}

	// Get name
	if ctx.Identifier() != nil {
		typeDecl.Name = ctx.Identifier().GetText()
	}

	// Parse fields by walking children
	// Grammar: type_modifier_list L_CLASS identifier '{' ( basic_type ( member_name ',' )* member_name ';' )* '}'
	// We need to pair each basic_type with its member_names
	children := ctx.GetChildren()
	var currentType string
	for _, child := range children {
		if basicTypeCtx, ok := child.(parser.IBasic_typeContext); ok {
			currentType = basicTypeCtx.GetText()
		} else if memberNameCtx, ok := child.(parser.IMember_nameContext); ok {
			field := &Field{
				Type:      currentType,
				IsPointer: false,
				Name:      "",
			}
			// Check for pointer
			if memberNameCtx.Optional_star() != nil && memberNameCtx.Optional_star().GetText() == "*" {
				field.IsPointer = true
			}
			// Get name
			if memberNameCtx.Identifier() != nil {
				field.Name = memberNameCtx.Identifier().GetText()
			}
			typeDecl.Fields = append(typeDecl.Fields, field)
		}
	}

	return typeDecl
}

// VisitModifier_change builds a ModifierChange node
func (b *Builder) VisitModifier_change(ctx *parser.Modifier_changeContext) interface{} {
	modChange := &ModifierChange{
		Modifiers: []string{},
	}

	if ctx.Type_modifier_list() != nil {
		for _, mod := range ctx.Type_modifier_list().AllL_TYPE_MODIFIER() {
			modChange.Modifiers = append(modChange.Modifiers, mod.GetText())
		}
	}

	return modChange
}

// Visit dispatches to the appropriate visitor method
func (b *Builder) Visit(tree antlr.ParseTree) interface{} {
	if tree == nil {
		return nil
	}
	return tree.Accept(b)
}

// VisitChildren is the default implementation
func (b *Builder) VisitChildren(node antlr.RuleNode) interface{} {
	return nil
}
