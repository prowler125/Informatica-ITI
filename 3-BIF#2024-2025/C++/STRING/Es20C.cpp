/*
Ex 20 C
Vettore di Char PALINDROME:
    1. Dichiara un vettore char S1[MAX];
    2. Leggi stringa S1 con cin;
    3. Calcola la lunghezza di S1 (usa carattere di fine stringa "\0");
    4. Crea la stringa specchio S2, come inversione di S1;
    5. Stampa sia S1 che S2 usando una funzione staString.

Quindi Controlla se S1 è PALINDROME
(devono essere uguali tutti i caratteri...)
Usa libreria STRING.H e non la classe STRING.
*/

#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main()
{
    int max = 0;
    char s1[max];
    cout << "Inserisci un valore MASSIMO per la lettura della stringa (max 20): " << endl;
    cin >> max;
    do
    {
        cout << "Errore! Il valore di max è troppo alto; " << endl;
        cout << "Riprovare: " << endl;
        cin >> max;
    } while (max > 20);
    return 0;
}