section .text
		default	rel
		global	main
		extern	printf

main:
		push	rbp

		mov		rdi, message

		call	printf wrt ..plt
		mov		rax, 0
		pop		rbp

		ret		0

	message:	db		"Hello, Holberton", 10, 0

