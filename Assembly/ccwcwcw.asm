; multi-segment executable file template.

data segment
    num1 DB 0000h
    ris  DB 0000h
    
    msg  db "somma salvata"
    cout db "inserisci numero"
    pkey db "press any key...$"
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
    
    lea dx,cout
    mov ah,09h
    int 21h
    

 
    
    mov ah, 01h 
    int 21h   
    mov num1,al
    
    mov dl,0Ah
    mov ah,02h
    int 21h
    mov dl,0Dh
    mov ah,02h
    int 21h
    
    
iniziociclo:

    cmp al,30h 
    
    je fineciclo
    
    lea dx, cout
    mov ah, 09h
    int 21h
    
    mov ah, 01h
    int 21h
    mov num1, al
    
    mov dl, 0Ah
    mov ah, 02h
    int 21h
    mov dl, 0Dh
    mov ah, 02h  
    int 21h  
    
    
    mov al,num1
    add ris,al
    
    jmp iniziociclo
    
    
    fineciclo:
    
    mov dl,0Ah
    mov ah,02h
    int 21h
    mov dl, 0Dh
    mov ah, 02h
    int 21h
    
    
    mov ah, 1
    int 21h
    mov ax,4c00h
    int 21h     
    
            
    lea dx, pkey
    mov ah, 9
    int 21h        ; output string at ds:dx
    
    ; wait for any key....    
    mov ah, 1
    int 21h
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
