.section .text
.globl _start
_start:
        addi x1, x0, 10
        addi x2, x0, 20
        addi x0, x0, 0
        addi x0, x0, 0
        addi x0, x0, 0  
	add x3, x1, x2
        sub x4, x1, x2
        sll x5, x1, x2
        addi x0, x0, 0
        addi x0, x0, 0
        addi x0, x0, 0   
        sd x5, 8(x2)
        add x6, x1, x1
        addi x0, x0, 0
        addi x0, x0, 0
        addi x0, x0, 0   
        ld x7, 8(x2)
