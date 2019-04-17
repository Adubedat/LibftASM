section .text
    global _ft_strcat

_ft_strcat:
    push rbp                    ; save stack
    mov rbp, rsp                ; clean stack for current function
    push rdi                    ; save string1 pointer

.parse_s1:
    cmp byte [rdi], 0           ; increase s1 pointer until we find a 0
    je .copy_s2
    inc rdi
    jmp .parse_s1

.copy_s2:
    cmp byte [rsi], 0           ; copy s2 to s1 until we find a 0 in s2
    je .exit
    movsb                       ; this instruction copy 1 byte from rsi to rdi and increment both pointers    
    jmp .copy_s2

.exit:
    mov byte [rdi], 0           ; add the final \0
    pop rax                     ; put the pointer to string1 in rax(return register)
    leave                       ; restore stack
    ret