SECTION .data
the_msg:	db "Hello, Holberton", 0
the_form:	db "%s", 10, 0

SECTION .text
extern printf
global main
main:
mov rsi, the_msg
mov rdi, the_form
mov eax, 0
call printf

mov eax, 0
ret
