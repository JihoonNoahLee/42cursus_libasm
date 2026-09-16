section .text
    global _ft_strcmp

; int ft_strcmp(const char *s1, const char *s2);
_ft_strcmp:
    MOV rcx,    0
    JMP .COMPARE_LOOP

.COMPARE_LOOP:
    MOV     al,             BYTE [rdi + rcx]
    TEST    al,             BYTE [rsi + rcx]
    JZ      .END
    CMP al,             BYTE [rsi + rcx]
    JNE .COMPARE_

.COMPARE_LOOP_INC:
    INC rcx
    CMP al,             0
    JNE .COMPARE_LOOP
    JMP .END

.END:
    MOV rax,    rcx
    RET
