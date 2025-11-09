package formatter

import (
	"github.com/antlr4-go/antlr/v4"
	"github.com/fluffos/lpcfmt/internal/ast"
	"github.com/fluffos/lpcfmt/parser"
)

// FormatWithANTLR formats LPC source code using the ANTLR parser and AST
func FormatWithANTLR(src string) (string, error) {
	// Create lexer
	input := antlr.NewInputStream(src)
	lexer := parser.NewlpcLexer(input)

	// Create token stream
	stream := antlr.NewCommonTokenStream(lexer, antlr.TokenDefaultChannel)

	// Create parser
	p := parser.NewlpcParser(stream)

	// Add error listener
	p.RemoveErrorListeners()
	errorListener := &formatErrorListener{errors: []string{}}
	p.AddErrorListener(errorListener)

	// Parse the program
	tree := p.Program()

	// Check for parsing errors
	if len(errorListener.errors) > 0 {
		// Return error with the original source
		// In the future, we could provide better error messages
		return src, nil // Return original source if parsing fails
	}

	// Build AST from parse tree
	builder := ast.NewBuilder(stream)
	astTree := builder.Build(tree)

	// Format from AST
	formatter := ast.NewFormatter()
	result := formatter.Format(astTree)

	return result, nil
}

// formatErrorListener collects parsing errors
type formatErrorListener struct {
	*antlr.DefaultErrorListener
	errors []string
}

func (l *formatErrorListener) SyntaxError(recognizer antlr.Recognizer, offendingSymbol interface{}, line, column int, msg string, e antlr.RecognitionException) {
	l.errors = append(l.errors, msg)
}
