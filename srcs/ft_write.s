section .text
    global _ft_write
    ; extern ___error ;__error function to handle error in macOS
    extern __errno_location ;function to handle error in Linux

;ssize_t ft_write(int fd, const void *buf, size_t count)
; rdi: fd, rsi: buf, rdx: count
_ft_write:
    MOV rax, 1; 0x2000004 for macOS
    SYSCALL
    JC .ERROR
    RET

    .ERROR:
        PUSH rax
        call __errno_location
        POP rcx
        MOV [rax], rcx
        MOV rax, -1
        RET
