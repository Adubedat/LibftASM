section .text
    global _ft_memcpy

_ft_memcpy:
    push rbp                    ; save stack
    mov rbp, rsp                ; clean stack for current function
    push rdi                    ; save string1 pointer
    mov rcx, rdx                ; set the loop counter in rcx
    rep movsb                   ; copy rsi to rdi until counter == 0

.exit:
    pop rax                     ; set rdi pointer in the return register
    leave
    ret