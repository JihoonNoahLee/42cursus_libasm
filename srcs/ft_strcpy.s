section .text
    global _ft_strcpy

;rdi: dest, rsi: src
_ft_strcpy:
    MOV rcx, 0
    MOV rax, rdi
    JMP .LOOP

    .LOOP:
        CMP BYTE [rsi + rcx], 0
        JE  .RET
        MOV al, BYTE [rsi + rcx]
        MOV BYTE [rdi + rcx], al
        INC rcx
        JMP .LOOP

    .RET:
        MOV BYTE [rdi + rcx], 0
        RET
