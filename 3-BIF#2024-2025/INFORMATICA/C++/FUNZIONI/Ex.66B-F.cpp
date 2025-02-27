/* Ex66-F

Matrice carica e stampa
Scrivi un programma che:
    1. Dichiara una matrice di interi (R X C)
    2. Poi definisci 2 funzioni:
        2.1 StampaMat: stampa matrice per righe;
        2.2 CaricaMat: carica la matrice di numeri a caso
        2.3 StaDiag1 e staDiag2: per stampare diagonale 1 e diagonale 2
Nel main: stampa la matrice, caricala, stampala di nuovo
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int R = 3;
const int C = 3;

void StampaMat(int mat[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void CaricaMat(int mat[R][C])
{
    srand(time(0));
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            mat[i][j] = rand() % 100;
        }
    }
}

void StaDiag1(int mat[R][C])
{
    cout << "Diagonale 1: ";
    for (int i = 0; i < R; i++)
    {
        cout << mat[i][i] << " ";
    }
    cout << endl;
}

void StaDiag2(int mat[R][C])
{
    cout << "Diagonale 2: ";
    for (int i = 0; i < R; i++)
    {
        cout << mat[i][R - i - 1] << " ";
    }
    cout << endl;
}

int main()
{
    int mat[R][C];

    cout << "Matrice iniziale:" << endl;
    StampaMat(mat);

    CaricaMat(mat);

    cout << "Matrice dopo il caricamento dei numeri casuali:" << endl;
    StampaMat(mat);

    return 0;
}