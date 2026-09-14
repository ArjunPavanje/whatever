.section .text
.globl _start
_start:
    # 1. EX -> EX Forwarding
    addi x1, x0, 10      # x1 = 10
    addi x2, x0, 20      # x2 = 20
    add  x3, x1, x2      # x3 = 30 (Forwards x1 and x2 from EX/MEM and MEM/WB)
    sub  x4, x3, x1      # x4 = 20 (Forwards x3 from EX/MEM)

    # 2. Store and Load
    sd   x4, 0(x0)       # Mem[0] = 20
    ld   x5, 0(x0)       # x5 = 20

    # 3. Load-Use Hazard! (Hazard Detection Unit should stall IF/ID and flush ID/EX)
    add  x6, x5, x1      # x6 = 20 + 10 = 30
    
    # 4. Post-stall forwarding
    addi x7, x6, 5       # x7 = 35

done:
    jal x0, done         # Infinite loop to end program
