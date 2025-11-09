package formatter

// Format formats LPC source code using ANTLR parser
func Format(src string) (string, error) {
	return FormatWithANTLR(src)
}
