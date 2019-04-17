%define TRUE        1
%define FALSE       0

section .text
    global _ft_isprint

_ft_isprint:
    push rbp                ; save stack
    mov rbp, rsp            ; clean stack
    sub rdi, 32             ; substract 32 from the tested value, setting the 0 to the first printable character
    cmp rdi, 94             ; unsigned comparison allowing to check a range with only one comparison
    jbe .success            
    mov rax, FALSE
    leave
    ret

.success:
    mov rax, TRUE
    leave
    ret