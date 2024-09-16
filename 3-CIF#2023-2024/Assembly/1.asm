org 100h                                         


.data
    n db 10
.code
main:
    mov ah, 02h
    mov bh, 00h
    mov dh, 00h
    mov dl, 00h
    int 10h
    mov al, '*'
    mov cx, n
    ciclo:
        int 21h
        loop ciclo
    mov ah, 4ch
    int 21h