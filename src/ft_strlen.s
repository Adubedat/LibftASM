section .text
    global _ft_strlen

_ft_strlen:
    push rbp                    ; save rbp
    mov rbp, rsp                ; clean stack for this function
    mov rcx, -1                 ; avoid the loop from stopping because of rcx == 0
    mov rsi, rdi                ; save rdi pointer
    mov rax, 0                  ; set the loop condition
    repne scasb                 ; inc rdi while rdi != 0
    sub rdi, rsi                ; the difference between both pointers is the string length
    dec rdi                     ; substract the /0
    mov rax, rdi                ; set the return value

.exit:
    leave
    ret