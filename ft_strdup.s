global _ft_strdup
extern _malloc

_ft_strdup:
	xor rcx, rcx

str_size:
	cmp [rdi + rcx], byte 0
	jz next
	inc rcx
	jmp str_size

next:
	inc rcx
	push rdi
	mov rdi, rcx
	call _malloc
	pop rdi
	test rax, rax
	jz error
	xor rdx, rdx
	xor rcx, rcx

nnn:
	mov dl, byte [rdi + rcx]
	mov byte [rax + rcx], dl
	cmp [rdi + rcx], byte 0
	jz ex
	inc rcx
	jmp nnn

error:
	xor rax, rax

ex:
	ret