; multi-segment executable file template.

data segment
    ; add your data here!
    a  dw 0002h
    b  dw 0004h
    c  dw 0006h
    ris dw 0000h
    
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
    
    
    mov ax, a
    mov bx, b
    mov cx, c

    ; add your code here
    
    sub cx, bx
    mov ris, cx
    sub bx,ax 
    mov a, ax
    
    
    cmp ax, bx
    je gg
    
    gg:
    
    
            
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
