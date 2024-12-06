/*Ex 66-F Matrice carica e stampa

Scrivi un programma che dichiara una matrice di interi R X C
Poi definisci 2 funzioni
    1.0 StampaMat
        Stampa matrice per righe
    2.0 CaricaMat
        Carica la matrice di numeri a caso
Nel main:
    1.0 Stampa la matrice
    2.0 Carica la matrice
    3.0 Stampa la matrice di nuovo
*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
using namespace std;

#define MaxR 20
#define MaxC 20

void sMat(int[MaxR][MaxC], int, int);
void cMat(int[MaxR][MaxC], int, int);
void cMat2(int[MaxR][MaxC], int, int);
void riga(int, char);

int main()
{
    int mat[MaxR][MaxC];
    int R = 0, C = 0;
    cout << "Dammi le Righe: " << endl;
    cin >> R;
    cout << "Dammi le Colonne: " << endl;
    cin >> C;
    cMat(mat, R, C);
    sMat(mat, R, C);
    cout << endl;
    return 0;
}

void sMat(int mat[MaxR][MaxC], int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int k = 0; k < C; k++)
        {
            cout << mat[i][k] << "\t";
        }
        cout << endl;
    }
}
void cMat(int mat[MaxR][MaxC], int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        for (int k = 0; k < C; k++)
        {
            cout << mat[i][k] << "\t";
        }
        cout << endl;
    }
}