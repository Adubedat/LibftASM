section .text
    global _ft_strcat

_ft_strcat:
    push rbp
    mov rbp, rsp
    push rdi

.parse_s1:
    cmp byte [rdi], 0
    je .copy_s2
    inc rdi
    jmp .parse_s1

.copy_s2:
    cmp byte [rsi], 0
    je .exit
    movsb
    jmp .copy_s2

.exit:
    mov byte [rdi], 0
    pop rax
    mov rsp, rbp
    pop rbp
    ret