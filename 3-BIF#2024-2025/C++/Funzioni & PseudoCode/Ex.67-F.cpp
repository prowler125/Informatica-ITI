/*
Ex 67-F
MATRICE QUADRATA: somma diagonali
1. Scrivi un programma che dichiara una matrice quadrata di interi MAT N x N.
2. Crea queste funzioni:
    2.1 Quindi carica N x N  numeri memorizzandoli nella matrice:    caricaMat
    2.2 Una funzione che stampa la matrice                           staMat
    2.3 Una funzione che restituisce: la somma di diagonale 1 e 2    sommaDiag
Chiama nel main le funzioni e stampa le due somme delle diagonali
*/

#include <iostream>
using namespace std;

const int N = 4;

void caricaMat(int MAT[][N])
{
    cout << "Inserisci " << N * N << " numeri per la matrice:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> MAT[i][j];
        }
    }
}

void staMat(int MAT[][N])
{
    cout << "Matrice:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << MAT[i][j] << " ";
        }
        cout << endl;
    }
}

int sommaDiag1(int MAT[][N])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += MAT[i][i];
    }
    return sum;
}

int sommaDiag2(int MAT[][N])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += MAT[i][N - 1 - i];
    }
    return sum;
}

int main()
{
    int MAT[N][N];

    caricaMat(MAT);
    staMat(MAT);

    int sumDiag1 = sommaDiag1(MAT);
    int sumDiag2 = sommaDiag2(MAT);

    cout << "Somma della diagonale 1: " << sumDiag1 << endl;
    cout << "Somma della diagonale 2: " << sumDiag2 << endl;

    return 0;
}