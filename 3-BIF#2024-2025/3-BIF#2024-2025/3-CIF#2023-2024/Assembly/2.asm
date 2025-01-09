include '1.asm'
org 100h
.data
    n db 10
.code
main:
    call riga
    mov cx, n-1
    ciclo:
        call riga
        loop ciclo
    mov ah, 4ch
    int 21h
