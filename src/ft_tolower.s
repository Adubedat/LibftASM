section .text
    global _ft_tolower

_ft_tolower:
    push rbp                ; save stack
    mov rbp, rsp            ; clean stack
    mov rax, rdi
    sub rdi, 65             ; substract 'A' from the tested value, setting the 0 to 'A'
    cmp rdi, 25             ; unsigned comparison allowing to check a range with only one comparison
    ja .end                 ; if not a lowercase, jump directly to end, else, remove 32 to transform into an lowercase

.success:
    add rax, 32

.end:
    leave
    ret