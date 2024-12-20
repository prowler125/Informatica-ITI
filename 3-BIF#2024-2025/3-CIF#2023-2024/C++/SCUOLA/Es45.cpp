/*Scrivi un programma che  gestisce, con vettore di struct, una rubrica telefonica di numeri fissi e
cellulari con cognome e nome, usando il tipo dato struct: 
COGNOME,  NOME , FISSO,  CELL
        
Definisci e poi chiama  nel Main 3 funzioni
a.   caricavet          
b.   stampavet
c.   cercavet                        ……………agenda cercavet ( agenda [ ], int , int &amp;)
che  restituisce  la scheda  cercata e la sua posizione.*/

#include <iostream>
#include <string>
using namespace std;

struct Contatto
{
    string cognome;
    string nome;
    string fisso;
    string cellulare;
};

void caricavet(Contatto agenda[], int dimensione)
{
    for (int i = 0; i < dimensione; i++)
    {
        cout << "Inserisci il cognome del contatto " << i + 1 << ": ";
        cin >> agenda[i].cognome;

        cout << "Inserisci il nome del contatto " << i + 1 << ": ";
        cin >> agenda[i].nome;

        cout << "Inserisci il numero fisso del contatto " << i + 1 << ": ";
        cin >> agenda[i].fisso;

        cout << "Inserisci il numero cellulare del contatto " << i + 1 << ": ";
        cin >> agenda[i].cellulare;

        cout << endl;
    }
}

void stampavet(Contatto agenda[], int dimensione)
{
    for (int i = 0; i < dimensione; i++)
    {
        cout << "Contatto " << i + 1 << ":" << endl;
        cout << "Cognome: " << agenda[i].cognome << endl;
        cout << "Nome: " << agenda[i].nome << endl;
        cout << "Numero fisso: " << agenda[i].fisso << endl;
        cout << "Numero cellulare: " << agenda[i].cellulare << endl;
        cout << endl;
    }
}

void cercavet(Contatto agenda[], int dimensione, int &posizione)
{
    string cognome, nome;
    cout << "Inserisci il cognome del contatto da cercare: ";
    cin >> cognome;

    cout << "Inserisci il nome del contatto da cercare: ";
    cin >> nome;

    for (int i = 0; i < dimensione; i++)
    {
        if (agenda[i].cognome == cognome && agenda[i].nome == nome)
        {
            posizione = i;
            return;
        }
    }

    posizione = -1;
}

int main()
{
    const int dimensione = 3;
    Contatto agenda[dimensione];

    caricavet(agenda, dimensione);

    cout << "Rubrica telefonica:" << endl;
    stampavet(agenda, dimensione);

    int posizione;
    cercavet(agenda, dimensione, posizione);

    if (posizione != -1)
    {
        cout << "Contatto trovato alla posizione " << posizione + 1 << endl;
        cout << "Cognome: " << agenda[posizione].cognome << endl;
        cout << "Nome: " << agenda[posizione].nome << endl;
        cout << "Numero fisso: " << agenda[posizione].fisso << endl;
        cout << "Numero cellulare: " << agenda[posizione].cellulare << endl;
    }
    else
    {
        cout << "Contatto non trovato." << endl;
    }

    return 0;
}