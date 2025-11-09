.PHONY: all build generate clean test install

BINARY_NAME=lpcfmt
ANTLR_VERSION=4.13.0
ANTLR_JAR=antlr-$(ANTLR_VERSION)-complete.jar
ANTLR_URL=https://www.antlr.org/download/$(ANTLR_JAR)

all: generate build

# Download ANTLR4 if not present
$(ANTLR_JAR):
	@echo "Downloading ANTLR $(ANTLR_VERSION)..."
	@curl -L -o $(ANTLR_JAR) $(ANTLR_URL) || wget -O $(ANTLR_JAR) $(ANTLR_URL)

# Generate Go parser code from ANTLR grammar
generate: $(ANTLR_JAR)
	@echo "Generating Go parser from ANTLR grammar..."
	@mkdir -p parser
	java -jar $(ANTLR_JAR) -Dlanguage=Go -visitor -package parser -o parser *.g4

# Build the Go binary
build:
	@echo "Building $(BINARY_NAME)..."
	@go build -o $(BINARY_NAME) ./cmd/lpcfmt

# Install to $GOPATH/bin
install: build
	@echo "Installing $(BINARY_NAME)..."
	@go install ./cmd/lpcfmt

# Run tests
test:
	@echo "Running tests..."
	@go test -v ./...

# Test the formatter on the test file
test-format: build
	@echo "Testing formatter on tests/1.lpc..."
	@./$(BINARY_NAME) tests/1.lpc

# Clean generated files and binaries
clean:
	@echo "Cleaning..."
	@rm -rf parser/
	@rm -f $(BINARY_NAME)
	@rm -f $(ANTLR_JAR)
	@rm -rf build/

# Build C++ version
cpp-build:
	@echo "Building C++ version..."
	@mkdir -p build
	@cd build && cmake .. && make

help:
	@echo "Available targets:"
	@echo "  all          - Generate parser and build (default)"
	@echo "  generate     - Generate Go parser from ANTLR grammar"
	@echo "  build        - Build the Go binary"
	@echo "  install      - Install to GOPATH/bin"
	@echo "  test         - Run unit tests"
	@echo "  test-format  - Test formatter on test file"
	@echo "  clean        - Remove generated files and binaries"
	@echo "  cpp-build    - Build C++ version"
