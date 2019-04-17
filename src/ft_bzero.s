section .text
    global _ft_bzero
    extern _printf

_ft_bzero:
    push rbp
    mov rbp, rsp
    mov rcx, rsi
    cmp rcx, 0
    je .exit

.repeat:
    mov byte [rdi], 0
    inc rdi
    loop .repeat

.exit:
    mov rsp, rbp
    pop rbp
    ret