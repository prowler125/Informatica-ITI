somma_interi:
  mov ecx, eax
  xor eax, eax

  ciclo:
    add eax, ecx

    dec ecx

    jnz ciclo

  ret
