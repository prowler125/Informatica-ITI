; multi-segment executable file template.
name "Addizione"

data segment
    num1 DB 1Ah
    num2 DB 0D2h
    ris DB 00h
    pkey db "press any key...$"

stack segment
    dw   128  dup(0)
stack ends

code segment
assume cs:code, ds:data, ss:stack
start:

    mov ax, data
    mov ds, ax
    mov es, ax

    ; Initialize stack segment
    mov ax, stack
    mov ss, ax
    mov sp, 128

    mov al, num1
    mov bl, num2
    
    add al, bl
    mov ris,al
            
    lea dx, pkey
    mov ah, 9
    int 21h
      
    mov ah, 1
    int 21h
    
    mov ax, 4c00h
    int 21h    
code ends

end start