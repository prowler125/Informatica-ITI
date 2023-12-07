/*Leggi un numero NUM indicato da un utente e quindi effettua il calcolo e la stampa
della sottrazione di tutti i numeri dispari compresi tra NUM e 1 (estremo
superiore compreso).*/

#include <iostream>
using namespace std;

int main()
{
    int num, somma = 0;

    cout << "Inserisci un numero NUM: ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            somma -= i;
        }
    }

    cout << "La sottrazione di tutti i numeri dispari compresi tra NUM e 1 è: " << somma << endl;

    return 0;
}
