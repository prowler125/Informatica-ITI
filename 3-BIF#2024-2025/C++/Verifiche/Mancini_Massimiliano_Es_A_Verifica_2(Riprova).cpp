/*
Verifica di Informatica: riprova a casa
Mancini Massimiliano

Ex. A:

Funzioni ed Array necessari:
    1. Funzioni:
        1.1 carMat: carica una matrice M x N di interi con numeri casuali compresi tra -10 e 10;
        1.2 staMat: stampa la una matrice MAT di interi;
        1.3 somRighe: ha in ingresso una matrice di interi M x N e restituisce
            un vettore (lungo M) dove alla posizione k-esima ho la somma dei
            numeri positivi alla riga k-esima della matrice;
        1.4 staVet: stampa un vettore di interi;
        1.5 ordVet: ordina un vettore in modo crescente;
        1.6 scambia: inverte tra loro 2 numeri;


Nel MAIN() dichiarare una matrice 20 x 20 a mezzo di define, leggere il numero
di righe e colonne su cui si vuole lavorare (provare con 5 x 4) quindi fare le
dichiarazioni e chiamate necessarie per:
    1. Caricare e stampare una matrice 5 x 4
    2. Chiamare la funzione somRighe
    3. Stampare il vettore ottenuto
    4. Ordinare il vettore in modo crescente (ordVet)
    5. Stampare di nuovo il vettore
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MAX 20

void carMat(int mat[MAX][MAX], int M, int N)
{
    srand(time(0));
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            mat[i][j] = rand() % 21 - 10;
        }
    }
}

void staMat(int mat[MAX][MAX], int M, int N)
{
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

void somRighe(int mat[MAX][MAX], int M, int N, int vet[MAX])
{
    for (int i = 0; i < M; ++i)
    {
        vet[i] = 0;
        for (int j = 0; j < N; ++j)
        {
            if (mat[i][j] > 0)
            {
                vet[i] += mat[i][j];
            }
        }
    }
}

void staVet(int vet[MAX], int M)
{
    for (int i = 0; i < M; ++i)
    {
        cout << vet[i] << "\t";
    }
    cout << endl;
}

void ordVet(int vet[MAX], int M)
{
    for (int i = 0; i < M - 1; ++i)
    {
        for (int j = i + 1; j < M; ++j)
        {
            if (vet[i] > vet[j])
            {
                scambia(vet[i], vet[j]);
            }
        }
    }
}

void scambia(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int mat[MAX][MAX];
    int vet[MAX];
    int M = 5, N = 4;

    carMat(mat, M, N);
    cout << "Matrice caricata:" << endl;
    staMat(mat, M, N);

    somRighe(mat, M, N, vet);
    cout << "Vettore delle somme delle righe:" << endl;
    staVet(vet, M);

    ordVet(vet, M);
    cout << "Vettore ordinato:" << endl;
    staVet(vet, M);

    return 0;
}