%define TRUE        1
%define FALSE       0

section .text
    global _ft_isalnum

_ft_isalnum:
    push rbp                ; save stack
    mov rbp, rsp            ; clean stack
    sub rdi, 48             ; substract '0' from the tested value, setting the 0 to '0'
    cmp rdi, 9              ; unsigned comparison allowing to check a range with only one comparison
    jbe .success
    sub rdi, 17             ; substract 17 from the tested value, setting the 0 to 'A'
    cmp rdi, 25
    jbe .success
    sub rdi, 32             ; substract 32 to the tested value, to set the 0 to 'a'
    cmp rdi, 25
    jbe .success
    mov rax, FALSE
    leave
    ret

.success:
    mov rax, TRUE
    leave
    ret