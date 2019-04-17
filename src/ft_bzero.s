section .text
    global _ft_bzero

_ft_bzero:
    push rbp                    ; save rbp
    mov rbp, rsp                ; clean stack for this function
    mov rcx, rsi                ; move n argument to the counter register
    cmp rcx, 0                  ; if n == 0 then exit
    je .exit

.repeat:
    mov byte [rdi], 0           ; write 0 to the string and increment pointer
    inc rdi
    loop .repeat                ; loop decrease rcx

.exit:
    leave                       ; restore stack
    ret