#!/usr/bin/env bash
set -e

if [ "$#" -lt 1 ]; then
    echo "Usage: $0 <input_file.S> [output_file.hex]"
    exit 1
fi

INPUT_ASM=$1
OUTPUT_HEX=${2:-program.hex}
PREFIX="riscv64-unknown-elf-"

BASENAME=$(basename "$INPUT_ASM" | sed 's/\.[^.]*$//')
OBJ_FILE="${BASENAME}.o"
BIN_FILE="${BASENAME}.bin"
ELF_FILE="${BASENAME}.elf"

echo "Assembling $INPUT_ASM..."
${PREFIX}gcc -march=rv64im -mabi=lp64 -c "$INPUT_ASM" -o "$OBJ_FILE"
${PREFIX}ld -m elf64lriscv -Ttext 0x0 "$OBJ_FILE" -o "$ELF_FILE"

echo "Extracting binary..."
${PREFIX}objcopy -O binary "$ELF_FILE" "$BIN_FILE"

echo "Converting to hex format ($OUTPUT_HEX)..."
xxd -e -c 4 -g 4 "$BIN_FILE" | awk '{print $2}' > "$OUTPUT_HEX"

echo "Cleaning up..."
rm -f "$OBJ_FILE" "$BIN_FILE" "$ELF_FILE"

echo "Done! Generated $OUTPUT_HEX."
