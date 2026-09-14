.section .text
.globl _start
_start:
    # Setup data
    addi x1, x0, 100     # x1 = 100
    sd   x1, 16(x0)      # Mem[16] = 100
    
    # Load into ALU into Store (Load-Use Stall + Forwarding)
    ld   x2, 16(x0)      # x2 = 100
    add  x3, x2, x2      # x3 = 200 (Stalls 1 cycle, then forwards x2)
    sd   x3, 24(x0)      # Mem[24] = 200 (Forwards x3 from EX/MEM)
    
    # Load immediately followed by a jump
    ld   x4, 24(x0)      # x4 = 200
    jal  x5, target      # Jump to target. Link: x5 = PC + 4 (0x1C)
    
    addi x6, x0, 999     # SHOULD BE FLUSHED (x6 remains 0)

target:                  # PC = 0x20
    # Use the loaded value after the jump
    addi x7, x4, 50      # x7 = 200 + 50 = 250 

done:
    jal x0, done
