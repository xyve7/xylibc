section .text
global chmod
chmod:
    mov rax, 90
    syscall

    ret