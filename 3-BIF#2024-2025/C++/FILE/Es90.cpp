/*
Ex 90 File: leggi/scrivi
Dato un file di testo con dei numeri interi (ingresso.txt),
si legge un numero N da tastiera quindi leggi N numeri dal
file di ingresso (ingresso.txt)
e poi si scrivono su un file di uscita (uscita.txt)      .
prova prima a scrivere su uscita.txt in modalità OUT
e poi in  modalità APP;
verifica i diversi effetti
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    ifstream inputFile("C:\\Users\\mancini_ma\\Documents\\Informatica-ITI\\3-BIF#2024-2025\\C++\\FILE\\ingresso.txt");
    if (!inputFile)
    {
        cerr << "Errore nell'apertura del file di ingresso." << endl;
        return 1;
    }

    int N;
    cout << "Inserisci il numero di valori da leggere: ";
    cin >> N;

    int number;
    ofstream outputFile("C:\\Users\\mancini_ma\\Documents\\Informatica-ITI\\3-BIF#2024-2025\\C++\\FILE\\uscita.txt", ios::out);
    if (!outputFile)
    {
        cerr << "Errore nell'apertura del file di uscita." << endl;
        return 1;
    }
    for (int i = 0; i < N && inputFile >> number; ++i)
    {
        outputFile << number << endl;
    }
    outputFile.close();

    inputFile.clear();
    inputFile.seekg(0, ios::beg);

    outputFile.open("C:\\Users\\mancini_ma\\Documents\\Informatica-ITI\\3-BIF#2024-2025\\C++\\FILE\\uscita.txt", ios::app);
    if (!outputFile)
    {
        cerr << "Errore nell'apertura del file di uscita." << endl;
        return 1;
    }
    for (int i = 0; i < N && inputFile >> number; ++i)
    {
        outputFile << number << endl;
    }
    outputFile.close();

    inputFile.close();
    return 0;
}
