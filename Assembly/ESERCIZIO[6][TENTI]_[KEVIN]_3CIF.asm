; multi-segment executable file template.

data segment
    
    pkey db "press any key...$"
    risultato dw 0000h
ends

stack segment
    dw   128  dup(0)
ends

code segment
start:
    mov ax, data
    mov ds, ax
    mov es, ax 
    
    mov ax, 3h
    mov cx, 4h
    
l1:
    
    add ax, ax
    mov risultato, ax
    
    loop l1
    
fine:
            
    lea dx, pkey
    mov ah, 9
    int 21h        
        
    mov ah, 1
    int 21h
    
    mov ax, 4c00h 
    int 21h    
ends
end start