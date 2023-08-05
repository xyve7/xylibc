section .text
global mkdir
mkdir:
    mov rax, 83
    syscall

    ret