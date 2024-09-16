section .text
    global _ft_strcpy

; char *ft_strcpy(char *dst, const char *src);
_ft_strcpy:
    MOV rcx,    0
    JMP	.COPY_LOOP

.COPY_LOOP:
    MOV al,             BYTE [rsi + rcx]
    MOV [rdi + rcx],    al
    INC rcx
    CMP al,             0
    JNE .COPY_LOOP
    JMP .END

.END:
    MOV rax,    rdi
    RET
