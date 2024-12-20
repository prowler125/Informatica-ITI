/*
Ex38-R    Fattoriale Ricorsivo

Calcolo Fattoriale per mezzo di una funzione ricorsiva
Si ricoda che: Fatt(N) = N* fatt(N-1) fatt(1) = 1
condizione di arresto
*/

#include <iostream>
using namespace std;
int fattoriale(int);

int main()
{
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;
    cout << "Il fattoriale di " << numero << " è " << fattoriale(numero) << endl;
    return 0;
}

int fattoriale(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fattoriale(n - 1);
    }
}