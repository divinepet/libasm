global _ft_strcmp

_ft_strcmp:
	xor rax, rax
	xor rcx, rcx
	xor r10, r10

nnn:
	mov cl, byte[rdi + rax]
	mov r10b, byte[rsi + rax]
	inc rax
	test rcx, rcx
	jz ex
	test r10, r10
	jz ex
	cmp rcx, r10
	jz nnn
ex:
	sub rcx, r10
	jz zerro
	js small
	jns biggest
	mov rax, rcx
	ret

small:
	mov rax, -1
	ret

biggest:
	mov rax, 1
	ret

zerro:
	mov rax, 0
	ret