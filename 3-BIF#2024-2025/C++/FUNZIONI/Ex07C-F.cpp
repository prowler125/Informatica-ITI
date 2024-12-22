/*
Ex07C-F  Funzione Stampa Diagonali Quadrato

Definire oltre alle precedenti una funzione CENTER
che ha per parametri un numero N ed un carattere X,
e stampa, SE ESISTE, il centro delle diagonali del
quadrato di lato N fatto di caratteri X.
Inoltre definire una funzione DIAG1 ed una DIAG2 che hanno per parametri
un numero N ed un carattere X, e stampano rispettivamente la diagonale 1
e la diagonale 2 del quadrato di lato N fatto di caratteri X.

Infine chiamare nel main  su  numeri che vanno da 1 ad N,
con N letto da tastiera, QUAD, FRAME, DIAG1, DIAG2 e CENTER.
*/

#include <iostream>
#include <math.h>
#include <cmath>
#include <cstring>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

// Funzione che stampa un quadrato di lato N fatto di caratteri X
void QUAD(int N, char X)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << X;
        }
        cout << endl;
    }
}

// Funzione che stampa la cornice di un quadrato di lato N fatto di caratteri X
void FRAME(int N, char X)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
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

// Funzione che stampa la diagonale principale di un quadrato di lato N fatto di caratteri X
void DIAG1(int N, char X)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
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

// Funzione che stampa la diagonale secondaria di un quadrato di lato N fatto di caratteri X
void DIAG2(int N, char X)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j == N - 1)
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

// Funzione che stampa il centro delle diagonali di un quadrato di lato N fatto di caratteri X, se esiste
void CENTER(int N, char X)
{
    if (N % 2 == 1)
    {                       // Controlla se N è dispari
        int centro = N / 2; // Calcola la posizione del centro
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i == centro && j == centro)
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
        cout << "Non esiste un centro per quadrati di dimensione pari." << endl;
    }
}

int main()
{
    int N;
    char X;
    cout << "Inserisci la dimensione del quadrato (N): ";
    cin >> N; // Legge la dimensione del quadrato
    cout << "Inserisci il carattere da usare (X): ";
    cin >> X; // Legge il carattere da usare

    // Chiama le funzioni definite sopra e stampa i risultati
    cout << "QUAD:" << endl;
    QUAD(N, X);
    cout << "FRAME:" << endl;
    FRAME(N, X);
    cout << "DIAG1:" << endl;
    DIAG1(N, X);
    cout << "DIAG2:" << endl;
    DIAG2(N, X);
    cout << "CENTER:" << endl;
    CENTER(N, X);

    return 0;
}