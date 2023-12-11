data segment
    num1 DB 1Ah
    num2 DB 0D2h
    ris DB 00h
    pkey db "Press any key...$"
ends

stack segment
    dw  128 dup(0)
ends

code segment
    start:
    mov ax, data
    mov ds, ax
    mov es, ax
    
    
    
    mov ax, 0000h
    mov bx, 0000h
    mov al, num1
    mov bl, num2
    
    
    
    add al, bl
    mov ris, al
    
    
    ciao:
    lea dx, pkey
    mov ah, 9
    int 21h
      jmp ciao
    mov ax, 4c00h
    int 21h
ends
end start