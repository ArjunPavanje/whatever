.section .text
.globl _start
_start:
    # 1. Byte store and load
    addi x1, x0, 0x100
    addi x2, x0, -5          # 0xFFFFFFFFFFFFFFFB (lowest byte is 0xFB)
    sb   x2, 0(x1)
    lb   x3, 0(x1)           # Sign-extended byte: should be -5 (0xFFFFFFFFFFFFFFFB)
    lbu  x4, 0(x1)           # Unsigned byte: 0xFB (251)

    # 2. Halfword store and load
    addi x5, x0, -500        # 0xFFFFFFFFFFFFFE0C
    sh   x5, 8(x1)
    lh   x6, 8(x1)           # Sign-extended half: -500
    lhu  x7, 8(x1)           # Unsigned half: 0xFE0C (65036)

    # 3. Word store and load
    lui  x8, 0x12345
    addi x8, x8, 0x678       # 0x12345678
    sw   x8, 16(x1)
    lw   x9, 16(x1)          # 0x0000000012345678
    
    # 4. Doubleword store and load (back to back)
    addi x10, x0, 1000
    sd   x10, 24(x1)
    sd   x10, 32(x1)
    ld   x11, 24(x1)
    ld   x12, 32(x1)

    # 5. Load-use stall followed by arithmetic
    ld   x13, 24(x1)
    add  x14, x13, x13       # 2000
    sd   x14, 40(x1)
    ld   x15, 40(x1)         # 2000

    # 6. Store with forwarded data from EX stage
    addi x16, x0, 777
    sd   x16, 48(x1)
    ld   x17, 48(x1)         # 777

done:
    jal x0, done
