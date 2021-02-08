global _ft_strcpy

_ft_strcpy:
	xor rax, rax
	xor r10, r10

nnn:
	mov r10b, byte[rsi + rax]
	mov [rdi + rax], r10b
	cmp [rsi + rax], byte 0
	jz ex
	inc rax
	jmp nnn

ex:
	mov rax, 0
	ret