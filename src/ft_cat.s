%define MACH_SYSCALL(n)             0x2000000 | n
%define STDOUT                      1
%define READ                        3
%define WRITE                       4
%define BUFF_SIZE                   4096

section .text
    global _ft_cat

_ft_cat:
    push rbp
    mov rbp, rsp

.read:
    lea rsi, [rsp]
    mov rdx, BUFF_SIZE
    mov rax, MACH_SYSCALL(READ)
    syscall
    jc .exit
    cmp rax, 0
    je .exit

.write:
    mov rdi, STDOUT
    mov rdx, BUFF_SIZE
    mov rax, MACH_SYSCALL(WRITE)
    syscall
    jc .exit
    jmp .read

.exit:
    leave
    ret