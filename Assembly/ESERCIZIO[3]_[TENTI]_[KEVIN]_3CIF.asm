; multi-segment executable file template.

data segment
    ; add your data here!
    pkey db "press any key...$"
    A dw 0000h
    B dw 0000h
    C dw 0000h
    diff1 dw 0000h
    diff2 dw 0000h
    msg1 DB"i numeri sono in successione aritmetica$"
    msg2 DB"i numeri non sono in successione aritmetica$"
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
            
    mov ax, A
    mov bx, B
    mov cx, C
    
    sub bx, A
    sub cx, B
    
    mov diff1, bx
    mov diff2, cx
    
    cmp diff2, bx
    jne salta
    
    lea dx, msg1
    mov ah, 09h
    int 21h
    
    mov dl, 0Ah
    mov ah, 02h
    int 21h
    mov dl, 0Dh
    mov ah, 02h
    int 21h
    
    jmp fine
    
    ;salta 
    
    lea dx, msg2
    mov ah, 09h 
    int 21h
    
    mov dl, 0Ah
    mov ah, 02h
    int 21h
    mov dl, 02h
    int 21h
    
    ;fine
    
    lea dx, pkey 
    mov ah, 9 
    int 21h
    

    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
