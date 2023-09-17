section .text
    global _ft_strcmp

;rdi: s1, rsi: s2
_ft_strcmp:
    MOV rcx, 0
    JMP .COMPARE_LOOP

    .COMPARE_LOOP:
        CMP BYTE [rdi + rcx], 0
        JE  .RET
        CMP BYTE [rsi + rcx], 0
        JE  .RET
        MOV al, BYTE [rdi + rcx]
        CMP al, BYTE [rsi + rcx]
        JE  .RET
        inc rcx
        JMP .COMPARE_LOOP

    .RET:
        MOV rax, [rdi + rcx]
        SUB rax, [rsi + rcx]
        RET
