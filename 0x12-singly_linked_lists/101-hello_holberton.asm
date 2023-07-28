; hello.asm
extern printf	; declare printf from the C library
global main	; define the entry point

section .text		; code segment
main:			; entry point
    sub rsp, 40		; align the stack pointer
    mov rdi, msg	; first argument: message string
    xor rax, rax	; clear rax (number of floating point arguments)
    call printf		; call printf
    add rsp, 40		; restore the stack pointer
    ret			; return

section .data		; data segment
msg: db "Hello, Holberton\n", 10, 0	; message string with newline and null terminator
