/*

2° Verifica di Informatica

Ex A
Massimiliano Mancini
19-12-2024

*/

#include <math.h>
#include <string.h>
#include <ctime>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
using namespace std;

// Definizione di 2 variabili per il massimo di righe e colonne

#define MaxR 20
#define MaxC 20

void carMat(int[MaxR][MaxC], int, int);
void staMat(int[MaxR][MaxC], int, int);
int somRighe(int[MaxR][MaxC], int, int);
void staVett(int mat[MaxR][MaxC], int R, int C)
{
    int N = 10;
    int vett[N];
    for (int j = 0; j < MaxR; j++)
    {
        for (int i = 0; i < R; i++)
        {
            for (int k = 0; k < C; k++)
            {
                vett[j] = vett[j] + mat[i][k];
                cout << vett[j];
            }
        }

        for (int k = 0; k < N; k++)
            cout << vett[k] << "\t";
        cout << endl;
    }
}
void ordVett(int[], int, int);
void scambia(int &, int &);

int main()
{
    const int N = MaxR;
    int vett[N];
    int mat[MaxR][MaxC];
    int R = 0, C = 0;
    int *punt;

    cout << "Dammi le Righe: " << endl;
    cin >> R;
    cout << "Dammi le Colonne: " << endl;
    cin >> C;
    staMat(mat, R, C);
    carMat(mat, R, C);
    system("pause");
    staMat(mat, R, C);
    system("pause");
    staVett(mat, R, C, N);
    somRighe(mat, R, C);
    ordVett(vett, R, N);
    return 0;
}

void staMat(int mat[MaxR][MaxC], int R, int C)
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
void carMat(int mat[MaxR][MaxC], int R, int C)
{
    srand(time(0));
    for (int i = 0; i < R; i++)
    {
        for (int k = 0; k < C; k++)
        {
            mat[i][k] = rand() % 21 - 10;
            cout << mat[i][k] << "\t";
        }
        cout << endl;
    }
}

int somRighe(int mat[MaxR][MaxC], int R, int C)
{
    int N = 0;
    int vett[N];
    int sr = 0;
    for (int j = 0; j <= MaxR; j++)
    {
        for (int i = 0; i < R; i++)
        {
            for (int k = 0; k < C; k++)
            {
                sr = sr + mat[i][k];
                vett[i] = sr;
            }
            sr = 0;
        }

        cout << endl;
    }
}
void staVett(int mat[MaxR][MaxC], int R, int C, int N)
{
    N = 10;
    int vett[N];
    for (int j = 0; j < MaxR; j++)
    {
        for (int i = 0; i < R; i++)
        {
            for (int k = 0; k < C; k++)
            {
                vett[j] = vett[j] + mat[i][k];
                cout << vett[j];
            }
        }

        for (int k = 0; k < N; k++)
            cout << vett[k] << "\t";
        cout << endl;
    }
}

// Funzione per ordinare il vettore in modo Crescente (Exchange Sort)
void ordVett(int vett[], int N, int R)
{
    for (int k = 0; k < N; k++)
    {
        for (int j = k + 1; j < N; j++)
        {
            if (vett[k] < vett[j])
            {
                scambia(vett[k], vett[j]);
            }
        }
    }
}

// Funzione per scambiare due caratteri
void scambia(int &a, int &b)
{
    int t;
    t = a;
    a = b;
    b = t;
}