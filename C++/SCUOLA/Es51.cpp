/*Scrivi un programma   che  gestisce, con vettore di struct,  una rubrica telefonica di numeri fissi e
cellulari con cognome e  nome, usando il  tipo dato struct: 
COGNOME,  NOME , FISSO,  CELL        
Definisci e poi chiama  nel Main 3 funzioni
a.   caricavet          
b.   stampavet
c.   cercavet                        ……………agenda cercavet ( agenda [ ], int , int &amp;)
che  restituisce  la scheda  cercata e la sua posizione.*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct rubrica
{
    char cognome[20];
    char nome[20];
    int n_fisso[20];
    int n_cell[20];
};
void stampavet(rubrica rub[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Cognome: " << rub[i].cognome << endl;
        cout << "Nome: " << rub[i].nome << endl;
        cout << "Numero fisso: " << rub[i].n_fisso << endl;
        cout << "Numero di cellulare: " << rub[i].n_cell << endl;
        cout << endl;
    }
}

int cercavet(rubrica rub[], int n, int &pos)
{
    char cognome[20];
    cout << "Inserisci il cognome da cercare: ";
    cin >> cognome;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(rub[i].cognome, cognome) == 0)
        {
            pos = i;
            return 1;
        }
    }
    return 0;
}

int main()
{
    struct rubrica
    {
        char cognome[20];
        char nome[20];
        int n_fisso[20];
        int n_cell[20];
    };

    return 0;
}