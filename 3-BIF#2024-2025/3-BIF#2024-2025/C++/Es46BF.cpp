/*
Ex 46B-F

Somma vettore

Dichiara una funzione sommaVet che ha come parametri un vettore
V di N elementi la sua dimensione N.
Infine carica il vettore (caricaVet) e stampalo (stampaVet) poi stampa la somma.
*/

#include <math.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>
using namespace std;

void stampaVett(int[], int);
void caricaVett(int[], int);
void sommaVett(int[], int);

int main()
{
    const int N = 10;
    int vett[N];
    cout << "Dammi i valori del Vettore, da tastiera: " << endl;
    for (int i = 0; i < N; i++)
    {
        vett[i] = i * 5;
        stampaVett(vett, N);
        sommaVett(vett, N);
    }
    stampaVett(vett, N);
    sommaVett(vett, N);
    return 0;
}

void stampaVett(int vett[], int N)
{
    cout << "Ecco il Vettore: ";
    for (int i = 0; i < N; i++)
    {
        cout << vett[i] << "\t";
    }
}

void caricaVett(int vett[], int N)
{
    for (int i = 0; i < N; i++)
    {
        vett[i] = i * 5;
    }
}

void sommaVett(int vett[], int N)
{
    int somma = 0;
    for (int i = 0; i < N; i++)
    {
        somma += vett[i];
    }
    cout << "\nLa somma del vettore è: " << somma << endl;
}