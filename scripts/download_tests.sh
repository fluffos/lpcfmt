#!/bin/bash
# Download comprehensive test files from fluffos/fluffos repository

set -e

REPO_BASE="https://raw.githubusercontent.com/fluffos/fluffos/master/testsuite"
TEST_DIR="tests/fluffos"

mkdir -p "$TEST_DIR"/{single,command,clone,inherit}

echo "Downloading fluffos test files..."

# Download single tests
curl -s https://api.github.com/repos/fluffos/fluffos/contents/testsuite/single/tests/efuns | \
    grep '"download_url"' | \
    grep '\.c"' | \
    cut -d '"' -f 4 | \
    head -30 | \
    while read url; do
        filename=$(basename "$url")
        echo "Downloading: $filename"
        curl -s -f "$url" -o "$TEST_DIR/single/$filename" || true
    done

# Download command tests
for file in tests.c; do
    echo "Downloading: command/$file"
    curl -s -f "$REPO_BASE/command/$file" -o "$TEST_DIR/command/$file" || true
done

# Download master and simul_efun
for file in master.c simul_efun.c; do
    echo "Downloading: single/$file"
    curl -s -f "$REPO_BASE/single/$file" -o "$TEST_DIR/single/$file" || true
done

# Count files
total=$(find "$TEST_DIR" -name "*.c" | wc -l)
echo "Downloaded $total test files"

# Create a manifest file
find "$TEST_DIR" -name "*.c" -type f | sort > "$TEST_DIR/manifest.txt"
echo "Created manifest at $TEST_DIR/manifest.txt"
