name "Ciclo While"
data segment
    num1        DW 123Ah
    num         DW 0003h
    ris         DW 0000h
    pkey db "press any key...$"
ends

stack segment
    dw   128  dup(0)
ends

code segment
start:
    mov ax, data
    mov ds, ax
    mov es, ax
    
    
    mov ax, 0000h
    mov bx, 0000h
    mov dx, 0000h  
    mov ax, num1
    mov bx, num2
    
inizio-ciclo:
   cmp bx.0
   je fine-ciclo
   add dx, ax
   dec bx
   jmp inizio-ciclo
fine-ciclo    
    mov ris,dx
    lea dx, pkey    
    mov ah, 9
    int 21h  
    mov ah, 1
    int 21h
    mov ax, 4c00h
    int 21h    
ends

end start