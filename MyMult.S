	.file	"MyMult.S"
	.text
.global	MyMult
MyMult:
	mov 	r15, pc
	.L1:
	add.w	pc, r15
	dec.w r14
	jnz 	.L1
	ret
