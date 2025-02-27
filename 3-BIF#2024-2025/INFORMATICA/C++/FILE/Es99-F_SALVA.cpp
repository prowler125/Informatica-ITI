/*
Ex99-F_SALVA:
Funzione Salva Vettore su file
Seguendo istruzioni libro pag 225,
definire la funzione salvaVet, usando soliti standard di classe (nomi);
nel main() caricare e stampare il vettore con le funzioni note carVet e staVet,
quindi chiamare salvaVet e vedere contenuti del file vettore.txt
Ripetere questa volta aprendo il file in IOS:APP e chiamando due
volte salvaVet e controllare contenuti del file vettore.txt*/

#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>
#include <string>
#include <string.h>
#include <cstdlib>
#include <ios>
using namespace std;

void carVet(int[], int);
void staVet(const int[], int);
void salvaVet(const int[], int, const string &, ios_base::openmode);

int main()
{

    const int size = 5;
    int vettore[size];

    carVet(vettore, size);
    staVet(vettore, size);

    salvaVet(vettore, size, "vettore.txt", ios::out);

    salvaVet(vettore, size, "vettore.txt", ios::app);
}

void carVet(int vet[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "Inserisci un numero per la posizione " << i + 1 << ": ";
        cin >> vet[i];
    }
}

void staVet(const int vet[], int size)
{
    cout << "Il vettore contiene: ";
    for (int i = 0; i < size; ++i)
    {
        cout << vet[i] << " ";
    }
    cout << endl;
}

void salvaVet(const int vet[], int size, const string &filename, ios_base::openmode mode)
{
    ofstream file(filename, mode);
    if (!file)
    {
        cerr << "Errore nell'apertura del file" << endl;
        return;
    }
    for (int i = 0; i < size; ++i)
    {
        file << vet[i] << " ";
    }
    file << endl;
    file.close();
}
