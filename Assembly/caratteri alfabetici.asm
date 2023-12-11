; multi-segment executable file template.

data segment
    ; add your data here!
    output db "input:$ "
    lettera db 0000h
    virgoletta db "'$"
    MINU db 00h
    MAIU db 0h
    minuscola db 7Ah
    maiscuola db 61h
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
    output2 db "  => MINU=$"
    output3 db " MAIU=$"
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
            
    lea dx, output
    mov ah, 9
    int 21h        ; output string at ds:dx
    
    inizio:
    lea dx, virgoletta
    mov ah, 9
    int 21h
        
    mov ah, 1
    int 21h
    
    mov lettera, al
    cmp lettera, 040h
    je fine2
    
    
    cmp al, minuscola
    jle minuscola1
    jmp skip
    minuscola1:
    add MINU, 1h
    
    skip:
    
    cmp al, maiuscola
    jge maiuscola
    jmp fine
    maiuscola:
    add MAIU, 1h
    
    fine:
    jmp inizio
    
    lea dx, virgoletta
    mov ah, 9
    int 21h
    
    fine2:
    lea dx, virgoletta
    mov ah, 9
    int 21h
    
    lea dx, output2
    mov ah, 9
    int 21h
    
    
    cmp MINU, 0h
    je jn01
    jmp skip01
    jn01:
    lea dx, n0
    mov ah, 9
    int 21h
    jmp fine4
    
    skip01:
    
    cmp MINU, 1h
    je jn11
    jmp skip11
    
    jn11:
    lea dx, n1
    mov ah, 9
    int 21h
    jmp fine4
    skip11:
    cmp MINU, 2h
    je jn21
    jmp skip21
    
    jn21:
    lea dx, n2
    mov ah, 9
    int 21h
    jmp fine4
    skip21:
    cmp MINU, 3h
    je jn31
    jmp skip31
    
    jn31:
    lea dx, n3
    mov ah, 9
    int 21h
    jmp fine4
    skip31:
    cmp MINU, 4h
    je jn41
    jmp skip41
    
    jn41:
    lea dx, n4
    mov ah, 9
    int 21h
    jmp fine4
    skip41:
    cmp MINU, 5h
    je jn51
    jmp skip51
    
    jn51:
    lea dx, n5
    mov ah, 9
    int 21h
    jmp fine4
    skip51:
    cmp MINU, 6h
    je jn61
    jmp skip61
    
    jn61:
    lea dx, n6
    mov ah, 9
    int 21h
    jmp fine4
    skip61:
    cmp MINU, 7h
    je jn71
    jmp skip71
    
    jn71:
    lea dx, n7
    mov ah, 9
    int 21h
    
    skip71:
    cmp MINU, 8h
    je jn81
    jmp skip81
    jmp fine4
    jn81:
    lea dx, n8
    mov ah, 9
    int 21h
    jmp fine4
    skip81:
    cmp MINU, 9h
    je jn9
    jmp fine4
    
    jn91:
    lea dx, n9
    mov ah, 9
    int 21h
    fine4:
    
    
    lea dx, output3
    mov ah, 9
    int 21h

    
    
    cmp MAIU, 0h
    je jn0
    jmp skip0
    
    jn0:
    lea dx, n0
    mov ah, 9
    int 21h
    jmp fine3
    
    skip0:
    
    cmp MAIU, 1h
    je jn1
    jmp skip1
    
    jn1:
    lea dx, n1
    mov ah, 9
    int 21h
    jmp fine3
    skip1:
    cmp MAIU, 2h
    je jn2
    jmp skip2
    
    jn2:
    lea dx, n2
    mov ah, 9
    int 21h
    jmp fine3
    skip2:
    cmp MAIU, 3h
    je jn3
    jmp skip3
    
    jn3:
    lea dx, n3
    mov ah, 9
    int 21h
    jmp fine3
    skip3:
    cmp MAIU, 4h
    je jn4
    jmp skip4
    
    jn4:
    lea dx, n4
    mov ah, 9
    int 21h
    jmp fine3
    skip4:
    cmp MAIU, 5h
    je jn5
    jmp skip5
    
    jn5:
    lea dx, n5
    mov ah, 9
    int 21h
    jmp fine3
    skip5:
    cmp MAIU, 6h
    je jn6
    jmp skip6
    
    jn6:
    lea dx, n6
    mov ah, 9
    int 21h
    jmp fine3
    skip6:
    cmp MAIU, 7h
    je jn7
    jmp skip7
    
    jn7:
    lea dx, n7
    mov ah, 9
    int 21h
    jmp fine3
    skip7:
    cmp MAIU, 8h
    je jn8
    jmp skip8
    
    jn8:
    lea dx, n8
    mov ah, 9
    int 21h
    jmp fine3
    skip8:
    cmp MAIU, 9h
    je jn9
    jmp fine3
    
    jn9:
    lea dx, n9
    mov ah, 9
    int 21h
    fine3:
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
