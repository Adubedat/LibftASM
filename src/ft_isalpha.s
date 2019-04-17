%define TRUE        1
%define FALSE       0

section .text
    global _ft_isalpha

_ft_isalpha:
    push rbp                ; save stack
    mov rbp, rsp            ; clean stack
    sub rdi, 65             ; substract 'A' from the tested value, setting the 0 to 'A'
    cmp rdi, 25             ; unsigned comparison allowing to check a range with only one comparison
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