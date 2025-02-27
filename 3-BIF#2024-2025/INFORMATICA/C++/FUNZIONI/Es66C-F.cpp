/*
MATRICE QUADRATA: somma diagonali
1. Scrivi un programma che dichiara una matrice quadrata di interi MAT N x N.
2. Crea queste funzioni:
    2.1 Quindi carica N x N  numeri memorizzandoli nella matrice:    caricaMat
    2.2 Una funzione che stampa la matrice                           staMat
    2.3 Una funzione che restituisce: la somma delle diagonali sommaDiag
Chiama nel main le funzioni e stampa le due somme delle diagonali
NB: se esiste un centro delle diagonali evitare di considerarlo 2 volte
(usa funzione dispari)
Aggiungi anche funzioni: cornice, angoli, centro, per stampare:
cornice
angoli
centro (solo se matrice quadrata e  con lato dispari), usa funzione dispari*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void caricaMat(int mat[MAX_SIZE][MAX_SIZE], int N)
{
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> mat[i][j];
        }
    }
}

void staMat(int mat[MAX_SIZE][MAX_SIZE], int N)
{
    cout << "Matrix:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int sommaDiag(int mat[MAX_SIZE][MAX_SIZE], int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += mat[i][i];
        sum += mat[i][N - i - 1];
    }
    if (N % 2 == 1)
    {
        sum -= mat[N / 2][N / 2];
    }
    return sum;
}

bool isOdd(int num)
{
    return num % 2 == 1;
}

void cornice(int mat[MAX_SIZE][MAX_SIZE], int N)
{
    cout << "Cornice:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << mat[0][i] << " ";
    }
    cout << endl;
    for (int i = 1; i < N - 1; i++)
    {
        cout << mat[i][0] << " ";
        for (int j = 1; j < N - 1; j++)
        {
            cout << "  ";
        }
        cout << mat[i][N - 1] << " ";
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        cout << mat[N - 1][i] << " ";
    }
    cout << endl;
}

void angoli(int mat[MAX_SIZE][MAX_SIZE], int N)
{
    cout << "Angoli:" << endl;
    cout << mat[0][0] << " " << mat[0][N - 1] << endl;
    cout << mat[N - 1][0] << " " << mat[N - 1][N - 1] << endl;
}

void centro(int mat[MAX_SIZE][MAX_SIZE], int N)
{
    if (isOdd(N))
    {
        cout << "Centro:" << endl;
        cout << mat[N / 2][N / 2] << endl;
    }
}

int main()
{
    int N;
    cout << "Enter the size of the square matrix: ";
    cin >> N;

    int mat[MAX_SIZE][MAX_SIZE];

    caricaMat(mat, N);
    staMat(mat, N);

    int sum = sommaDiag(mat, N);
    cout << "Sum of diagonals: " << sum << endl;

    cornice(mat, N);
    angoli(mat, N);
    centro(mat, N);

    return 0;
}