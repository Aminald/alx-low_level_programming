section .data
hello_msg db "Hello, Holberton", 0
format db "%s", 0
section .text
extern printf
global _start
_start:
; Prepare the arguments for printf
mov rdi, format
mov rsi, hello_msg
xor eax, eax  ; Clear the EAX register
; Call the printf function
call printf
; Exit the program
xor edi, edi  ; Clear the EDI register (exit status 0)
mov eax, 60  ; System call number for exit
syscall
