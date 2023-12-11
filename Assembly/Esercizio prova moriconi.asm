; multi-segment executable file template.

data segment
    ; add your data here!
    pkey db "press any key...$"
    A dw 0003h
    B dw 0006h
    C dw 0009h
    risu dw 0000h
    
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
    
    sub cx,bx 
    mov ris , bx
    sub bx, ax
    mov A, bx
    
    
    cmp cx , bx
    jne salta
    
salta:       
     sub cx,cx
     mov ris , cx 
    jmp fine 
    
uguale:
    
   sub cx,cx
   inc cx
   mov ris, cx 
   jmp fine
    
fine  :
    
    lea dx, pkey 
    mov ah, 9 
    int 21h   
    
   mov ah, 1
   int 21h 
   
   
   
   mov ax, 4c00h ; exit to operating system
   
  int 21 h
ends


end start ; set entry point and stop the assemlber 
    
    
    
   
    

    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.
