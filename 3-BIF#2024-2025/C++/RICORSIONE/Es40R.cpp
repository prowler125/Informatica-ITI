/*
Ex 40R:
Potenza Ricorsiva
Definire una funzione ricorsiva pot(X,N) che calcola
la potenza X alla N, senza usare pow() oppure ^.
*/
#include <iostream>
using namespace std;

int pot(int X, int N)
{
    if (N == 0)
    {
        return 1;
    }
    else
    {
        return X * pot(X, N - 1);
    }
}

int main()
{
    int X, N;
    cout << "Inserisci la base (X): ";
    cin >> X;
    cout << "Inserisci l'esponente (N): ";
    cin >> N;
    cout << X << " elevato alla potenza di " << N << " è " << pot(X, N) << endl;
    return 0;
}