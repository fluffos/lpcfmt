package formatter

import (
	"bytes"
	"regexp"
	"strings"
)

const (
	indentWidth = 2 // 2 spaces per indent level
)

// Format formats LPC source code
func Format(src string) (string, error) {
	f := &formatter{
		src:    src,
		indent: 0,
		buf:    &bytes.Buffer{},
	}

	return f.format()
}

type formatter struct {
	src    string
	indent int
	buf    *bytes.Buffer
	lines  []string
	pos    int
}

func (f *formatter) format() (string, error) {
	// Split into lines for processing
	f.lines = strings.Split(f.src, "\n")

	result := &bytes.Buffer{}
	f.buf = result

	inBlockComment := false
	inFunction := false
	commentIndent := 0 // Track the original indentation of the comment block

	for i, line := range f.lines {
		trimmed := strings.TrimSpace(line)

		// Handle empty lines - preserve them
		if trimmed == "" {
			result.WriteString("\n")
			continue
		}

		// Handle block comments - preserve internal formatting
		if strings.HasPrefix(trimmed, "/*") {
			inBlockComment = true
			// Calculate how much this line is indented in the original
			commentIndent = len(line) - len(strings.TrimLeft(line, " \t"))
		}
		if inBlockComment {
			// Preserve the comment's internal structure
			// Remove only the base indentation that was there originally
			// Add our desired indentation
			// Keep any additional spacing that's part of the comment format
			if len(line) >= commentIndent {
				contentAfterBaseIndent := line[commentIndent:]
				result.WriteString(strings.Repeat(" ", f.indent*indentWidth))
				result.WriteString(contentAfterBaseIndent)
			} else {
				// Line is shorter than expected, just write it
				result.WriteString(strings.Repeat(" ", f.indent*indentWidth))
				result.WriteString(trimmed)
			}
			result.WriteString("\n")
			if strings.HasSuffix(trimmed, "*/") {
				inBlockComment = false
			}
			continue
		}

		// Handle line comments - preserve original formatting
		if strings.HasPrefix(trimmed, "//") {
			result.WriteString(strings.Repeat(" ", f.indent*indentWidth))
			result.WriteString(trimmed)
			result.WriteString("\n")
			continue
		}

		// Handle preprocessor directives
		if strings.HasPrefix(trimmed, "#") {
			result.WriteString(trimmed)
			result.WriteString("\n")
			continue
		}

		// Check for closing brace (decrease indent before writing)
		if strings.HasPrefix(trimmed, "}") {
			f.indent--
			if f.indent < 0 {
				f.indent = 0
			}
			inFunction = false
		}

		// Format the line
		formatted := f.formatLine(trimmed)

		// Write indentation
		result.WriteString(strings.Repeat(" ", f.indent*indentWidth))
		result.WriteString(formatted)
		result.WriteString("\n")

		// Check for opening brace (increase indent after writing)
		if strings.HasSuffix(trimmed, "{") || (len(trimmed) > 0 && trimmed[len(trimmed)-1] == '{') {
			f.indent++
			inFunction = true
		}

		// Add blank line after function closing brace
		if strings.HasPrefix(trimmed, "}") && !inFunction {
			if i < len(f.lines)-1 && strings.TrimSpace(f.lines[i+1]) != "" {
				result.WriteString("\n")
			}
		}
	}

	// Remove trailing newlines but keep exactly one
	output := strings.TrimRight(result.String(), "\n")
	if output != "" {
		output += "\n"
	}
	return output, nil
}

func (f *formatter) formatLine(line string) string {
	// Format different types of statements

	// Inherit statement
	if strings.Contains(line, "inherit") {
		return f.formatInherit(line)
	}

	// Variable declaration (nosave, private, public, etc.)
	if f.isVariableDeclaration(line) {
		return f.formatVariable(line)
	}

	// Function declaration
	if f.isFunctionDeclaration(line) {
		return f.formatFunction(line)
	}

	// Control flow
	if f.isControlFlow(line) {
		return f.formatControlFlow(line)
	}

	// Default: clean up spacing
	return f.formatDefault(line)
}

func (f *formatter) formatInherit(line string) string {
	// Format: inherit "path";
	// Extract modifiers and inherit statement
	modifiers := []string{}
	modKeywords := []string{"private", "public", "static", "nosave", "nomask", "protected"}

	words := strings.Fields(line)
	pathStart := -1

	for i, word := range words {
		isModifier := false
		for _, mod := range modKeywords {
			if word == mod {
				modifiers = append(modifiers, word)
				isModifier = true
				break
			}
		}
		if !isModifier {
			if word == "inherit" {
				pathStart = i + 1
				break
			}
		}
	}

	if pathStart > 0 && pathStart < len(words) {
		// Reconstruct the path (everything after inherit)
		path := strings.Join(words[pathStart:], " ")
		path = strings.TrimSuffix(path, ";")
		path = strings.TrimSpace(path)

		if len(modifiers) > 0 {
			return strings.Join(modifiers, " ") + " inherit " + path + ";"
		}
		return "inherit " + path + ";"
	}

	return line
}

func (f *formatter) isVariableDeclaration(line string) bool {
	// Check if line looks like a variable declaration
	patterns := []string{
		`^(private|public|protected|static|nosave|nomask|varargs)\s+`,
		`^(int|string|object|mapping|mixed|float|void|array)\s+`,
	}

	for _, pattern := range patterns {
		if matched, _ := regexp.MatchString(pattern, line); matched {
			if !strings.Contains(line, "(") || !strings.Contains(line, ")") {
				return true
			}
		}
	}
	return false
}

func (f *formatter) formatVariable(line string) string {
	// Format variable declarations with proper spacing around =
	re := regexp.MustCompile(`([^=]+)=([^=].*)`)
	if matches := re.FindStringSubmatch(line); matches != nil {
		left := strings.TrimSpace(matches[1])
		right := strings.TrimSpace(matches[2])
		line = left + " = " + right
	}

	// Add space after commas in variable lists
	line = regexp.MustCompile(`,(\S)`).ReplaceAllString(line, ", $1")

	return line
}

func (f *formatter) isFunctionDeclaration(line string) bool {
	// Function if it has parentheses and ends with { or ;
	if !strings.Contains(line, "(") || !strings.Contains(line, ")") {
		return false
	}

	trimmed := strings.TrimSpace(line)
	return strings.HasSuffix(trimmed, "{") || strings.HasSuffix(trimmed, ";") ||
	       (strings.Contains(trimmed, ")") && !strings.Contains(trimmed, "if") &&
	        !strings.Contains(trimmed, "while") && !strings.Contains(trimmed, "for"))
}

func (f *formatter) formatFunction(line string) string {
	// Add space before opening brace
	line = strings.ReplaceAll(line, "){", ") {")

	// Format function signature
	// Remove extra spaces
	re := regexp.MustCompile(`\s+`)
	parts := strings.Split(line, "(")
	if len(parts) >= 2 {
		left := re.ReplaceAllString(strings.TrimSpace(parts[0]), " ")
		right := "(" + strings.Join(parts[1:], "(")
		line = left + right
	}

	return line
}

func (f *formatter) isControlFlow(line string) bool {
	keywords := []string{"if", "else", "while", "for", "foreach", "switch", "case", "default", "return", "break", "continue"}
	for _, kw := range keywords {
		if strings.HasPrefix(line, kw+" ") || strings.HasPrefix(line, kw+"(") || line == kw {
			return true
		}
	}
	return false
}

func (f *formatter) formatControlFlow(line string) string {
	// Ensure space after keywords
	keywords := []string{"if", "while", "for", "foreach", "switch", "return"}
	for _, kw := range keywords {
		if strings.HasPrefix(line, kw+"(") {
			line = strings.Replace(line, kw+"(", kw+" (", 1)
		}
	}

	// Format else
	if strings.HasPrefix(line, "else{") {
		line = strings.Replace(line, "else{", "else {", 1)
	}

	return line
}

func (f *formatter) formatDefault(line string) string {
	// Clean up general spacing

	// Add space around binary operators (but not in strings)
	// This is simplified - a full implementation would parse properly
	operators := []string{"==", "!=", "<=", ">=", "+=", "-=", "*=", "/=", "&&", "||"}
	for _, op := range operators {
		line = strings.ReplaceAll(line, op, " "+op+" ")
	}

	// Add space after commas (but not in strings - simplified)
	line = regexp.MustCompile(`,(\S)`).ReplaceAllString(line, ", $1")

	// Clean up multiple spaces
	re := regexp.MustCompile(`\s+`)
	line = re.ReplaceAllString(line, " ")

	return strings.TrimSpace(line)
}
