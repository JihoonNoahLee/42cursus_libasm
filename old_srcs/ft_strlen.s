section .text
    global _ft_strlen

_ft_strlen:
    MOV rax, 0
    JMP .COUNT

.COUNT:
    CMP BYTE [rdi + rax], 0
    JE  .END
    INC rax
    JMP .COUNT

.END:
    ret
