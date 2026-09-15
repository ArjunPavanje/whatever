.section .text
.globl _start
_start:
	addi x1, x0, 3
	addi x2, x0, 4
	addi x1, x1, 10
	sd x1, 4(x2)
	ld x3, 4(x2)


