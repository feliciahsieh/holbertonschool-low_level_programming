	global main		;must be declared for using gcc. Goto main label
	extern printf
section .text
main:				;tell linker entry point
	mov rax, 0		;set system call. 64-bit register
	mov rdi, msg		;store msg
	call printf		;call printf function
	mov rax, 0		;set system call
	ret			;return

section .data

msg db	'Hello, Holberton',10, 0	;string to print
