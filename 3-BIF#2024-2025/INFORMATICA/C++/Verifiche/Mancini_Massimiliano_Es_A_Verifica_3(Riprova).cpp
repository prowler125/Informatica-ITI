/*
Es. n. A CONTA FRASE
Riprova della
Verifica del
2° Quadrimestre
Informatica sui Files
Mancini Massimiliano
3° B-if 18/02/2025

Scrivere un programma
che  nel main  legge:
    1. un file chiamato “93ingresso.txt”
    2. una frase digitata da tastiera dall’utente
quindi restituisce
quante volte quella
frase compare nel
file di ingresso.

Infine stampare il risultato
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
#include <cstdlib>
#include <ios>
using namespace std;

int main()
{
    // Apertura del file di ingresso
    ifstream inputFile("93ingresso.txt");
    if (!inputFile)
    {
        // Messaggio di errore se il file non può essere aperto
        cerr << "Errore nell'apertura del file." << endl;
        return 1;
    }

    // Lettura della frase da cercare dall'input dell'utente
    string phrase;
    cout << "Inserisci la frase da cercare: ";
    getline(cin, phrase);

    string line;
    int count = 0;
    // Lettura del file riga per riga
    while (getline(inputFile, line))
    {
        // Ricerca della frase nella riga corrente
        size_t pos = line.find(phrase);
        while (pos != string::npos)
        {
            // Incremento del contatore ogni volta che la frase viene trovata
            ++count;
            // Ricerca della frase nella riga corrente a partire dalla posizione successiva
            pos = line.find(phrase, pos + phrase.length());
        }
    }

    // Chiusura del file di ingresso
    inputFile.close();

    // Stampa del risultato
    cout << "La frase \"" << phrase << "\" compare " << count << " volte nel file." << endl;

    return 0;
}