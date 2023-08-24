section .data
    msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0

section .text
    global main
    extern printf

main:
    push rbp

    mov rdi, fmt ; pass format string as 1st arg to printf
    mov rsi, msg ; Pass the msg string as the 2nd arg to printf
    xor rax, rax ; Clear RAX (no floating-point arguments)
    call printf

    pop rbp

    xor rax, rax   ; Set the return value to 0
    ret
