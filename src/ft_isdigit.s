%define TRUE        1
%define FALSE       0

section .text
    global _ft_isdigit

_ft_isdigit:
    push rbp                ; save stack
    mov rbp, rsp            ; clean stack
    sub rdi, 48             ; substract '0' from the tested value, setting the 0 to ascii '0'
    cmp rdi, 9              ; unsigned comparison allowing to check a range with only one comparison
    jbe .success            
    mov rax, FALSE
    leave
    ret

.success:
    mov rax, TRUE
    leave
    ret