/*
Ex 28C COUNTDOWN
Scrivere un programma che, letta una cifra intera X positiva
conta alla rovescia da X fino ad 1(scatto ad ogni secondo).
Suggerimento:
    1. Libreria  time
    2. Funzione sleep (t)
*/

#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

int main()
{
    int X;
    cout << "Inserisci un numero intero positivo: ";
    cin >> X;

    if (X > 0)
    {
        for (int i = X; i > 0; --i)
        {
            cout << i << endl;
            sleep(1);
        }
    }
    else
    {
        cout << "Il numero inserito non e' positivo." << endl;
    }

    return 0;
}