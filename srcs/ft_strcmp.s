section .text
    global _ft_strcmp

;rdi: s1, rsi: s2
_ft_strcmp:
    mov rcx, 0
    jmp .compare_loop

    .compare_loop:
        mov rax, [rdi + rcx]
        sub rax, [rsi + rcx]
        jmp .check
        inc rcx
        jmp .compare_loop

    .check:
        cmp BYTE [rdi + rcx], 0
        je  .end
        cmp BYTE [rsi + rcx], 0
        je  .end
        cmp rax, 0
        jne .end

    .end:
        ret
    