section .text
    global _ft_strlen

; size_t ft_strlen(const char *s);
_ft_strlen:
    MOV rax,        0
    JMP .COUNT_LOOP

.COUNT_LOOP:
    CMP BYTE [rdi + rax], 0
    JE  .END
    INC rax
    JMP .COUNT_LOOP

.END:
    RET
