section .text
    global _ft_strcmp

;rdi: s1, rsi: s2
_ft_strcmp:
    mov rcx, 0
    jmp .compare_loop

    .compare_loop:
        cmp BYTE [rdi + rcx], 0
        je  .ret
        cmp BYTE [rsi + rcx], 0
        je  .ret
        mov al, BYTE [rdi + rcx]
        cmp al, BYTE [rsi + rcx]
        je  .ret
        inc rcx
        jmp .compare_loop

    .ret:
        mov rax, [rdi + rcx]
        sub rax, [rsi + rcx]
        ret
