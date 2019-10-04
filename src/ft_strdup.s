section .text
    global _ft_strdup
    extern _ft_strlen
	extern _malloc

_ft_strdup:
    push rbp            ; save stack
    mov rbp, rsp        ; clean stack for current function
    push rdi            ; save argument pointer
    call _ft_strlen     ; get argument length in rax
    inc rax             ; increment rax for /0
    push rax            ; save length
    mov rdi, rax        ; put length in rdi as malloc parameter
    call _malloc
    cmp rax, 0          ; return 0 if malloc fails
    je .exit
    pop rcx             ; put length in the counter register
    pop rsi             ; put the first argument pointer in rsi
    mov rdi, rax        ; put the malloc pointer in rdi       
    rep movsb           ; copy rsi in rdi until counter == 0

.exit:
    leave
    ret