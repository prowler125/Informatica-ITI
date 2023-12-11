; multi-segment executable file template.

data segment
    cifra db 0000h
    output db 0000h
    n1 db "1$"
    n2 db "2$"
    n3 db "3$"
    n4 db "4$"
    n5 db "5$"
    n6 db "6$"
    n7 db "7$"
    n8 db "8$"
    n9 db "9$"
    n0 db "0$"
    frase db "CIFRA=$"
    frase2 db "  output  $"
ends

stack segment
    dw   128  dup(0)
ends

code segment
start:
; set segment registers:
    mov ax, data
    mov ds, ax
    mov es, ax

    ; add your code here
            
    lea dx, frase
    mov ah, 9
    int 21h        ; output string at ds:dx
    
    ; wait for any key....    
    mov ah, 1
    int 21h
    
    sub al, 30h
    mov cifra, al
    
    lea dx, frase2
    mov ah, 9
    int 21h
    
    mov cx, 6h
    
    ciclo:
    add cifra, 1h
    
    cmp cifra, 0Ah
    je jn0
    
    jmp skip0
    
    jn0:
    mov cifra, 0h
    
    lea dx, n0
    mov ah, 9
    int 21h
    jmp fine
    
    skip0:
    
    cmp cifra, 1h
    je jn1
    jmp skip1
    
    jn1:
    lea dx, n1
    mov ah, 9
    int 21h
    
    skip1:
    cmp cifra, 2h
    je jn2
    jmp skip2
    
    jn2:
    lea dx, n2
    mov ah, 9
    int 21h
    
    skip2:
    cmp cifra, 3h
    je jn3
    jmp skip3
    
    jn3:
    lea dx, n3
    mov ah, 9
    int 21h
    
    skip3:
    cmp cifra, 4h
    je jn4
    jmp skip4
    
    jn4:
    lea dx, n4
    mov ah, 9
    int 21h
    
    skip4:
    cmp cifra, 5h
    je jn5
    jmp skip5
    
    jn5:
    lea dx, n5
    mov ah, 9
    int 21h
    
    skip5:
    cmp cifra, 6h
    je jn6
    jmp skip6
    
    jn6:
    lea dx, n6
    mov ah, 9
    int 21h
    
    skip6:
    cmp cifra, 7h
    je jn7
    jmp skip7
    
    jn7:
    lea dx, n7
    mov ah, 9
    int 21h
    
    skip7:
    cmp cifra, 8h
    je jn8
    jmp skip8
    
    jn8:
    lea dx, n8
    mov ah, 9
    int 21h
    
    skip8:
    cmp cifra, 9h
    je jn9
    jmp fine
    
    jn9:
    lea dx, n9
    mov ah, 9
    int 21h

    
    fine:
    loop ciclo
    
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
