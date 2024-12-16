/* Ex10B

Indovina un numero
1. Genera un numero casuale X tra 1 e 1000
2. Quindi chiedi di indovinare x dando come risposta
se:
    2.1 Troppo alto
    2.2 Troppo basso
3. Indovinato e dicendo in quanti tentativi  sono serviti*/
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int randomNumber = rand() % 1000 + 1;
    int guess;
    int attempts = 0;

    do
    {
        cout << "Indovina un numero tra 1 e 1000: ";
        cin >> guess;
        attempts++;

        if (guess > randomNumber)
        {
            cout << "Troppo alto!" << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Troppo basso!" << endl;
        }
        else
        {
            cout << "Congratulazioni! Hai indovinato il numero in " << attempts << " tentativi." << endl;
        }
    } while (guess != randomNumber);
    return 0;
}