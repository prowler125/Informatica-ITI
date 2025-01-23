/*
Ex10B:
Indovina un numero
Genera un numero casuale X tra 1 e 1000
Quindi chiedi di indovinare x dando come risposta
se:
    1. Troppo ALTO
    2. Troppo BASSO


Indovinato e dicendo in quanti
tentativi sono serviti
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int random_number = rand() % 1000 + 1;
    int guess;
    int attempts = 0;

    cout << "Indovina un numero tra 1 e 1000: ";

    do
    {
        cin >> guess;
        attempts++;

        if (guess > random_number)
        {
            cout << "Troppo ALTO. Riprova: ";
        }
        else if (guess < random_number)
        {
            cout << "Troppo BASSO. Riprova: ";
        }
        else
        {
            cout << "Indovinato! Hai impiegato " << attempts << " tentativi.\n";
        }
    } while (guess != random_number);

    return 0;
}