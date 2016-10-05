	.file	"min.S"
	.text
.global	min
min:
	cmp	r14, r15
	jl	.Lreturn
	mov	r14, r15
.Lreturn:
	ret

