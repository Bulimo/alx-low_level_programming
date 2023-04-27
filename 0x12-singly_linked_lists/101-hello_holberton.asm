section .text
		default	rel
		global	main
		extern	printf

main:
		push	rbp

		mov		rdi, message
		mov		rax, 0

		call	printf wrt ..plt
		pop		rbp

		ret

	message:	db		"Hello, Holberton", 10, 0

