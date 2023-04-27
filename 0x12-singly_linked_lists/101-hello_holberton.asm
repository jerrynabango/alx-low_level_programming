extern printf
section .text
global main
main:

mov rax, 0
mov rsi, msg
mov rdi, fmt
push rbp
call printf
pop rbp
mov rax, 0
ret
section .data
msg:db 'Hello, Holberton', 0
fmt: db '%s', 10, 0
