/* Ex 67-F
MATRICE QUADRATA: somma diagonali
1. Scrivi un programma che dichiara una matrice quadrata di interi MAT N x N.
2. Crea queste funzioni:
    2.1 Quindi carica N x N  numeri memorizzandoli nella matrice:    caricaMat
    2.2 Una funzione che stampa la matrice                           staMat
    2.3 Una funzione che restituisce: la somma delle diagonali sommaDiag
Chiama nel main le funzioni e stampa le due somme delle diagonali
NB: se esiste un centro delle diagonali evitare di considerarlo 2 volte
(usa funzione dispari)
*/
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void caricaMat(int mat[MAX_SIZE][MAX_SIZE], int n)
{
    cout << "Inserisci gli elementi della matrice:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
}

void staMat(int mat[MAX_SIZE][MAX_SIZE], int n)
{
    cout << "Matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int sommaDiag(int mat[MAX_SIZE][MAX_SIZE], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
        sum += mat[i][n - i - 1];
    }
    if (n % 2 == 1)
    {
        sum -= mat[n / 2][n / 2];
    }
    return sum;
}

int main()
{
    int n;
    cout << "Immetti N:";
    cin >> n;

    int mat[MAX_SIZE][MAX_SIZE];
    caricaMat(mat, n);

    cout << endl;
    staMat(mat, n);

    int sum = sommaDiag(mat, n);
    cout << "Somma delle diagonali =" << sum << endl;

    return 0;
}