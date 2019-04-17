section .text
    global _ft_toupper

_ft_toupper:
    push rbp                ; save stack
    mov rbp, rsp            ; clean stack
    mov rax, rdi
    sub rdi, 97             ; substract 'a' from the tested value, setting the 0 to 'a'
    cmp rdi, 25             ; unsigned comparison allowing to check a range with only one comparison
    ja .end                 ; if not a lowercase, jump directly to end, else, remove 32 to transform into an uppercase

.success:
    sub rax, 32

.end:
    leave
    ret