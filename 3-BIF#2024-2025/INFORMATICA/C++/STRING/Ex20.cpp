/*
Esercizio 20
STRINGA PALINDROMA
Scrivi un programma che, dopo aver letto una parola AB, controlla se questa e' una
parola palindroma, ovvero se si legge allo stesso modo da sinistra a destra e da destra a sinistra.

Esempio: OTTO e' una parola palindroma.
Crea la stringa palindroma BA e stampa entrambe.

Utilizza la classe string e i metodi substr e replace per creare BA.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string parola;
    cout << "Inserisci una parola: ";
    cin >> parola;

    string parolaInvertita = parola;
    int lunghezza = parola.length();
    for (int i = 0; i < lunghezza / 2; i++)
    {
        char temp = parolaInvertita[i];
        parolaInvertita[i] = parolaInvertita[lunghezza - i - 1];
        parolaInvertita[lunghezza - i - 1] = temp;
    }

    if (parola == parolaInvertita)
    {
        cout << parola << " e' una parola palindroma." << endl;
    }
    else
    {
        cout << parola << " non e' una parola palindroma." << endl;
    }

    string palindroma = parola.substr(0, lunghezza - 1);
    for (int i = lunghezza - 2; i >= 0; i--)
    {
        palindroma += parola[i];
    }

    cout << "Parola palindroma: " << palindroma << endl;
    return 0;
}
