	.file	"MyMult.S"
	.text
.global	MyMult
MyMult:
ret:
	add.w	r14, r15
	dec.w r14
	jnz .ret
