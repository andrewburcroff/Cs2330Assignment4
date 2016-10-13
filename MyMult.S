	.file	"MyMult.S"
	.text
.global	MyMult
MyMult:
	mov #0, r13; r13 is c, b is r14, a is r15
	mov #0, r12; r12 is i
com:
	cmp r14, r12
	jl less
	jmp ret
less:
	add r15, r13
	add #1, r12
	jmp com
ret:
	mov r13,r15
	ret
