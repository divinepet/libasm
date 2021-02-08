global _ft_strlen

_ft_strlen:
	xor rax, rax

nnn:
	cmp [rdi + rax], byte 0
	jz ex
	inc rax
	jmp nnn

ex:
	ret