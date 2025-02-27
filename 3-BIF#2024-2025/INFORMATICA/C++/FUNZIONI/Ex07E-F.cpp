/*
Ex07E-F    Funzione Centro Quadrato
Definire oltre alle precedenti una funzione CENTER
che ha per parametri un numero N ed un carattere X,
e stampa, SE ESISTE, il centro delle diagonali del
quadrato di lato N fatto di caratteri X.

Chiamare nel main su numeri che vanno da 1 ad N,
con N letto da tastiera, FRAME, CENTER.

*/

#include <math.h>
#include <cmath>
#include <cstring>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
using namespace std;

// Funzione che stampa il centro delle diagonali del quadrato
void CENTER(int N, char X)
{
    // Controlla se N e' dispari
    if (N % 2 == 1)
    {
        int center = N / 2; // Calcola la posizione del centro
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                // Stampa il carattere X al centro
                if (i == center && j == center)
                {
                    cout << X;
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }
    else
    {
        // Messaggio per quadrati di dimensione pari
        cout << "Nessun centro per quadrati di dimensione pari." << endl;
    }
}

int main()
{
    int N;
    char X;
    // Richiede all'utente di inserire la dimensione del quadrato
    cout << "Inserisci la dimensione del quadrato (N): ";
    cin >> N;
    // Richiede all'utente di inserire il carattere da usare
    cout << "Inserisci il carattere da usare (X): ";
    cin >> X;

    // Chiama la funzione CENTER per ogni valore da 1 a N
    for (int i = 1; i <= N; i++)
    {
        CENTER(i, X);
        cout << endl;
    }

    return 0;
}