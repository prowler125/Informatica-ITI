/*Ex 62-F

VETTORE ORDINA  (Exchange)

Definisci una funzione ORDINAVETT che ordina
un vettore in modo crescente;
Allo scopo ORDINAVETT usa una funzione SCAMBIAVETT.
    1. Nel main, dopo le opportune dichiarazioni procedi con:
        1.2 Carica il vettore       CARICAVET
        1.3 Stampa il vettore       STAMPAVET
        1.4 Ordina il vettore in modo crescente      ORDINAVET e SCAMBIA
        1.5 Stampa il vettore ordinato      STAMPAVET
*/

#include <math.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <iostream>

using namespace std;

const int N = 10;
void caricaVett(int vett[], int N);
int stampaVett(int vett[], int N);
void scambiaVett(int vett[], int i, int j);
void ordinaVett(int vett[], int N);
int stampaVettOrd(int vett[], int N);

int main()
{
    const int N = 10;
    for (int i = 0; i < N; i++)

        for (int i = 0; i <= N; i++)
        {
            vett[i] = 0;
        }

    return 0;
    void caricaVett(int vett[], int N)
    {
        cout << "Dammi il Valore dell'indice: 0" << endl;
        for (int i = 0; i < N; i++)
        {
            cout << "Indice: " << i << endl;
            cin >> vett[i];
        }
    }

    int stampaVett(int vett[], int N)
    {
        for (int i = 0; i < N; i++)
        {
            cout << vett[i] << " ";
        }
        cout << endl;
        return 0;
    }

    void scambiaVett(int vett[], int i, int j)
    {
        int temp = vett[i];
        vett[i] = vett[j];
        vett[j] = temp;
    }

    void ordinaVett(int vett[], int N)
    {
        for (int i = 0; i < N - 1; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (vett[i] > vett[j])
                {
                    scambiaVett(vett, i, j);
                }
            }
        }
    }

    int stampaVettOrd(int vett[], int N)
    {
        ordinaVett(vett, N);
        stampaVett(vett, N);
        return 0;
    }
    nt stampaVettOrd()
    {
    }