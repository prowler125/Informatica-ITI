/*
Ex. 97-F
File: Stampa File
Scrivi una funzione che ha come parametro
un file e ne stampa i contenuti e restituisce
il numero delle parole contenute.
Chiamarla due volte nel main() su due file
editati da utente: dati1.txt e dati2.txt
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;

int stampaFile(const string &filename)
{
    ifstream file(filename);
    if (!file.is_open())
    {
        cerr << "Errore nell'apertura del file: " << filename << endl;
        return 0;
    }

    string word;
    int wordCount = 0;
    while (file >> word)
    {
        cout << word << " ";
        wordCount++;
    }
    cout << endl;

    file.close();
    return wordCount;
}

int main()
{
    string file1 = "dati1.txt";
    string file2 = "dati2.txt";

    int count1 = stampaFile(file1);
    cout << "Numero di parole in " << file1 << ": " << count1 << endl;

    int count2 = stampaFile(file2);
    cout << "Numero di parole in " << file2 << ": " << count2 << endl;

    return 0;
}