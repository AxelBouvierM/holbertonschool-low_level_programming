<<<<<<< HEAD
section .data
    msg db "Hello world!",10      ; 10 is the ASCII code for a new line (LF)

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 13
    syscall
    
    mov rax, 60
    mov rdi, 0
    syscall
=======
global main

section .data
   msg: db "Hello, World",0xa
   len: equ $-msg

section .text
main:
   mov eax, 4
   mov ebx, 1
   mov ecx, msg
   mov edx, len
   int 0x80
   mov al, 1
   mov ebx, 0
   int 0x80
>>>>>>> 71f0f693e683b45119a465219e112d7268122598
