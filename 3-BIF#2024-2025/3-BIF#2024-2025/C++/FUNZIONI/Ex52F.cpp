/*
EX52-F

Vettore somma e moltiplica

Scrivi  le seguenti due funzioni ognuna
con 4 parametri (3 vettori lunghi N) dove
letti i primi due V1 e V2 scrivono
sul terzo V3 rispettivamente
*/

#include <iostream>
#include <math.h>
using namespace std;
// prototipi

void carVet(int[], int);
void staVet(int[], int);
int sommaVet(int[], int);
int maxVet(int[], int);
float mediaVet(int[], int);
void sommaVettori(int[], int[], int[], int);
int moltiplicaVettori(int[], int[], int[], int);

int main()
{
    const int N = 8;
    int v1[N];
    int v2[N];
    int v3[N];

    // chiamate funzioni

    staVet(v1, N);
    carVet(v1, N);
    staVet(v1, N);

    staVet(v2, N);
    carVet(v2, N);
    staVet(v2, N);

    sommaVettori(v1, v2, v3, N);
    staVet(v3, N);

    moltiplicaVettori(v1, v2, v3, N);
    staVet(v3, N);

    cout << "Somma = " << sommaVet(v3, N) << endl;
    cout << "Massimo = " << maxVet(v3, N) << endl;
    cout << "Prodotto =" << moltiplicaVettori(v1, v2, v3, N) << endl;
    return 0;
}

// carica vettore

void carVet(int pvet[], int N)
{
    for (int i = 0; i < N; i++)
        pvet[i] = i + 1;
}

// stampa vettore

void staVet(int pvet[], int N)
{
    for (int i = 0; i < N; i++)
        cout << pvet[i] << "\t";
    cout << endl;
}

/// somma vettore

int sommaVet(int pvet[], int N)
{
    int somma = 0;
    for (int i = 0; i < N; i++)
        somma = somma + pvet[i];
    return somma;
}

// max vet

int maxVet(int pvet[], int N)
{
    int pos, max = 0;
    for (int i = 0; i < N; i++)
        if (pvet[i] > max)
            max = pvet[i];
    return max;
}

// media vet

float mediaVet(int pvet[], int N)
{
    float media = 0;
    media = (float)sommaVet(pvet, N) / N;
    return media;
}

// somma vettori

void sommaVettori(int v1[], int v2[], int v3[], int N)
{
    for (int i = 0; i < N; i++)
        v3[i] = v1[i] + v2[i];
}

// moltiplica vettori

int moltiplicaVettori(int v1[], int v2[], int v3[], int N)
{
    for (int i = 0; i < N; i++)
        v3[i] = v1[i] * v2[i];
}
