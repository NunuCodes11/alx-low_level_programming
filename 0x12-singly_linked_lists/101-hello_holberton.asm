SECTION .data
msg:	db "Hello, Holberton", 0
fmt:	db "%s", 10, 0

SECTION .text
	extern print
	global main
main:
	move esi, msg
	mov edi, fmt
	call printf

	ret
