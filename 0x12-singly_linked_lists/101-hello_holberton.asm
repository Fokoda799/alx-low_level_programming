section .data
    hello_fmt db "Hello, Holberton",10,0  ; The format string with newline

section .text
    global _start

_start:
    ; Prepare arguments for printf
    mov rdi, hello_fmt  ; Format string
    xor rax, rax       ; Clear RAX to indicate no floating-point arguments

    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60         ; sys_exit
    xor rdi, rdi        ; Return code 0
    syscall

section .text
    extern printf  ; Declare printf from the C library