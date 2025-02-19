'''
Consegna del problema

Scrivere un programma in Python che visualizzi un
menu iniziale con le seguenti opzioni:

    1. Quadrato pieno
    2. Quadrato vuoto

Se l'utente inserisce un valore diverso da
1 o 2, il menu verrà riproposto fino a
quando non viene fornita una scelta valida.

    Opzione 1 (Quadrato pieno):
        L'utente deve inserire un Numero N
        e un carattere Let. Il programma
        stamperà un quadrato pieno di dimensione
        NxN, composto dal carattere Let.

    Opzione 2 (Quadrato vuoto):
        L'utente deve inserire un Numero N
        ed un carattere Let. Il programma
        stamperà un quadrato di dimensione
        NxN con solo il bordo formato dal
        carattere Let, mentre l'interno sarà vuoto
'''


def quadrato_pieno(n, let):
    for _ in range(n):
        print(let * n)


def quadrato_vuoto(n, let):
    print(let * n)
    for _ in range(n - 2):
        print(let + ' ' * (n - 2) + let)
    if n > 1:
        print(let * n)


def menu():
    while True:
        scelta = input(
            "Menu:\n1. Quadrato pieno\n2. Quadrato vuoto\nScegli un'opzione (1 o 2): ")
        if scelta in ('1', '2'):
            n = int(input("Inserisci un numero N: "))
            let = input("Inserisci un carattere Let: ")
            if scelta == '1':
                quadrato_pieno(n, let)
            else:
                quadrato_vuoto(n, let)
            break
        else:
            print("Scelta non valida. Riprova.")


menu()
