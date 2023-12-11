; multi-segment executable file template.

data segment
    ; add your data here!
    
    N DW 0005h
    CAR DW 0057h
    Ris DW 0000h
    
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

    ; add your code here
    
    mov ax,N
    mov bx,CAR
    
    cmp ax,0000h
    jg ciclo
    
    ciclo3:
    
    mov bx,0041h
    
    jmp ciclo
    
    ends
    
    ciclo:
    
    sub ax,0001h
    mov N,ax          
    cmp bx,005Ah
    jl ciclo2
    
    ciclo2:
    
    cmp bx,005Ah
    jg ciclo3
    
    add bx,0001h
    mov Ris,bx
    
    cmp ax,0000h
    jg ciclo
    
    ends
    ends
    
    
    
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
