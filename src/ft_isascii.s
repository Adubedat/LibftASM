%define TRUE        1
%define FALSE       0

section .text
    global _ft_isascii

_ft_isascii:
    push rbp                ; save stack
    mov rbp, rsp            ; clean stack
    cmp rdi, 127            ; unsigned comparison allowing to check a range with only one comparison
    jbe .success            
    mov rax, FALSE
    leave
    ret

.success:
    mov rax, TRUE
    leave
    ret