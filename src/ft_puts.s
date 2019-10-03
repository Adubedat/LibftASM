%define MACH_SYSCALL(n)             0x2000000 | n
%define STDOUT                      1
%define WRITE                       4
%define NEW_LINE                    10

section .data
null_string: db "(null)", 0
new_line: db NEW_LINE

section .text
    global _ft_puts

_ft_puts:
    push rbp                        ; save stack
    mov rbp, rsp                    ; clean stack
    mov rdx, 0                      ; initialisation
    cmp rdi, 0
    jne .s_len
    lea rdi, [rel null_string]      ; if rdi is null, we'll write (null)

.s_len:  
    cmp byte [rdi + rdx], 0         ; set rdx to the string's length
    je .print
    inc rdx
    jmp .s_len

.print:
    mov rsi, rdi                    ; move the string to write in rsi
    mov rdi, STDOUT                 ; set write stream to STDOUT
    mov rax, MACH_SYSCALL(WRITE)    ; set the syscall to WRITE
    syscall
    jc .error                       ; on error, syscall return errno in rax and turn on the carry flag
    lea rsi, [rel new_line]         ; print new line
    mov rax, MACH_SYSCALL(WRITE)
    mov rdx, 1
    syscall
    jc .error
    mov rax, NEW_LINE               ; return the ascii value of NEW_LINE
    leave                           ; restore stack
    ret

.error:
    mov rax, -1
    leave
    ret