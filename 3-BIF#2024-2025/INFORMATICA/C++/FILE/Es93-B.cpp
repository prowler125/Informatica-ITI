/*
Ex 93-B
File, conta 1 carattere dato
Scrivere un programma che chiede all’utente un carattere e conta quante
volte quel carattere compare nel file “93testo.txt” (prendi spunto da ex93)
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char carattere;
    cout << "Inserisci un carattere: ";
    cin >> carattere;

    ifstream inputFile("Z://Informatica-ITI//3-BIF#2024-2025//C++//FILE//TXT//93testo.txt");
    if (!inputFile)
    {
        cout << "Errore nell'apertura del file." << endl;
        return 1;
    }

    int conteggio = 0;
    char carattereCorrente;
    while (inputFile.get(carattereCorrente))
    {
        if (carattereCorrente == carattere)
        {
            conteggio++;
        }
    }

    inputFile.close();

    cout << "Il carattere '" << carattere << "' appare " << conteggio << " volte nel file." << endl;

    return 0;
}
