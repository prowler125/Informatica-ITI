; multi-segment executable file template.

data segment
    num1  DB  0000h
    NUM2  DB  0000h  
    somma DB  0000h  
    
    ris   DB  0000h      
    msg  db "somma salvata"
    cout db "inserisci il numero"
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

; start
   
    mov ah, 01h  
    mov dl,60h
    int 21h
    mov num1, al  
    mov dl,0Ah
    mov ah,02h
    int 21h
    
   
     
    iniziociclo:
    cmp al,30h    
    
  
    
    
    je fineciclo:
      
    lea dx,cout     
    mov ah,09       
    int 21h         
    
    mov ah, 01h
    int 21h
    mov al, num1  
    sub al, dl

    
    mov dl, 0Ah    ;a capo 
   
    mov ah, 09h    ;interract 21 e mov ah 09 per cin 
    int 21h          
    
    mov ah, 09 
    int 21h
    
    mov dl, 0Dh 
    
    mov ah, 02h    
    
    int 21h           
    
    mov ah,num1 
    add ris,al
    
    jmp iniziociclo
    
fineciclo:
             
    lea dx, pkey  
    lea cx,msg
    mov ah, 09
    int 21h        ; output string at ds:dx
    
    ; wait for any key....    
    mov ah, 1
    int 21h
    
    mov ax, 4c00h ; exit to operating system.
    int 21h    
ends

end start ; set entry point and stop the assembler.