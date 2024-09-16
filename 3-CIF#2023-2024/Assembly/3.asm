include '1.asm'
include '2.asm'
org 100h
.data
    n db 10
    m db 20
.code
main:
    mov ah, 02h
    mov bh, 00h
    mov dh, 00h
    mov dl, 00h
    int 10h
    mov cx, n
    ciclo_n:
        mov ah, 02h
        mov bh, 00h
        mov dh, dl
        mov dl, 00h
        int 10h

        call riga

        inc dl
        loop ciclo_n
    mov ah, 4ch
    int 21h
