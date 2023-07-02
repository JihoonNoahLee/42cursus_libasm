section .text
	global _start	        ; 링커가 알 수 있도록 반드시 선언해주어야 한다.

_start:		                ; 시작점을 링커에 알려준다.
	mov rdx, len	        ; 메세지 길이를 rdx 레지스터에 저장한다.
	mov rsi, msg	        ; 메세지를 rsi 레지스터에 저장한다.
	mov rdi, 1		; rdi 레지스터에 파일디스크립터를 1(표준출력)로 저장한다.
	mov rax, 4	; rax 레지스터에 write 시스템콜을 저장한다.
	syscall		        ; write 시스템 콜을 호출한다.

	mov rax, 1	; rax 레지스터에 exit 시스템콜을 저장한다.
	mov rdi, 0		; exit 함수의 파라미터에 0을 저장한다. 그렇지 않으면 프로그램 종료 시 exit code를 리턴한다.
	syscall	                ; exit 시스템 콜을 호출한다.

section .data
	msg db 'Hello, World!', 0xa	; 출력할 문자열
	len equ $ - msg			; 문자열의 길이
