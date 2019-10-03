section .text
    global _ft_memset

_ft_memset:
    push rbp            ;save stack
    mov rbp, rsp        ;clean stack
    push rdi            ;save rdi
    mov rcx, rdx        ;set the loop counter in rcx
    mov rax, rsi        ;set the byte to set in memory in rax
    rep stosb           ;set rax in rdi until counter == 0 

.exit:
    pop rax             ;set rdi pointer in the return register
    leave
    ret