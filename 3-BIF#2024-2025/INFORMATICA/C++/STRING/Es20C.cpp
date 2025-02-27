/*
Ex 20 C
Vettore di Char PALINDROME:
    1. Dichiara un vettore char S1[MAX];
    2. Leggi stringa S1 con cin;
    3. Calcola la lunghezza di S1 (usa carattere di fine stringa "\0");
    4. Crea la stringa specchio S2, come inversione di S1;
    5. Stampa sia S1 che S2 usando una funzione staString.

Quindi Controlla se S1 e' PALINDROME
(devono essere uguali tutti i caratteri...)
Usa libreria STRING.H e non la classe STRING.
*/

#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int main()
{
    const int MAX = 100;
    char s1[MAX];

    cout << "Inserisci la stringa: ";
    cin.getline(s1, MAX);

    int length = strlen(s1);
    char s2[MAX];

    for (int i = 0; i < length; i++)
    {
        s2[i] = s1[length - i - 1];
    }
    s2[length] = '\0';

    cout << "Stringa originale: " << s1 << endl;
    cout << "Stringa specchio: " << s2 << endl;

    bool isPalindrome = true;
    for (int i = 0; i < length; i++)
    {
        if (s1[i] != s2[i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "La stringa e' palindroma." << endl;
    }
    else
    {
        cout << "La stringa non e' palindroma." << endl;
    }
    return 0;
}