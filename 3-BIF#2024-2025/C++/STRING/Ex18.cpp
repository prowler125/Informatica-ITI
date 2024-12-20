/*
Ex 18
Stringhe Utilizzo
    1. Scrivi un programma che dopo avere dichiarato 3 variabili STRING A,B,C,
    2. Inizializza A, legge B, e poi le concatena in C, le stampa;
        2.1 Stampa la lunghezza di C;
        2.2 Estrae una sottostringa da C;
        2.3 Fa un replace in C;
        2.4 Cerca se è presente in C una stringa letta da tastiera;
        2.5 Stampa C come vettore di char.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string A, B, C;

    A = "Ciao";

    cout << "Immetti una stringa";
    cin >> B;

    C = A + B;

    cout << "C è: " << C << endl;

    cout << "Lunghezza di C: " << C.length() << endl;

    string substring = C.substr(2, 4);
    cout << "La sottostring è: " << substring << endl;

    string replacement = "mondo";
    size_t pos = C.find(substring);
    if (pos != string::npos)
    {
        C.replace(pos, substring.length(), replacement);
    }
    cout << "La stringa C dopo il rimpiazzamento " << C << endl;

    string search;
    cout << "Immetti una stringa da cercare in C";
    cin >> search;
    if (C.find(search) != string::npos)
    {
        cout << "String trovata in C" << endl;
    }
    else
    {
        cout << "Stringa non trovata" << endl;
    }

    const char *charArray = C.c_str();
    cout << "C è un array di char: " << charArray << endl;

    return 0;
}