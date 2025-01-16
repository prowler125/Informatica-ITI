/*
Ex 84
RUBRICA TELEFONICA

Scrivi un programma che gestisce, per mezzo di un vettore di struct, una rubrica telefonica
di numeri di telefono fissi e cellulari, cognome e nome, usando il tipo dato struct Agenda con
campi COG, NOME, FISSO, CELL.
Nel Main:
    1. Carica 3 voci di rubrica
    2. Stampa tutta la rubrica
    3. Letto un cognome da  tastiera
    4. Cerca (se esiste) la prima voce con quel cognome
    e quindi stampa tutti i dati della voce di rubrica e anche il numero di posizione (se non esiste -1)
*/

#include <iostream>
#include <string>
#include <vector> // Add this line
#include <math.h>
#include <cmath>
using namespace std;

struct Agenda
{
    string nome;
    string cognome;
    string numFisso;
    string numCell;
};

int main()
{
    vector<Agenda> rubrica;
    int N = 3;

    for (int i = 0; i < N; i++)
    {
        Agenda agenda;
        cout << "Dammi il Nome: " << endl;
        cin >> agenda.nome;
        cout << "Dammi il Congome: " << endl;
        cin >> agenda.cognome;
        cout << "Inserisci il tuo prefisso per FISSO: " << endl;
        cin >> agenda.numFisso;
        cout << "Inserisci il tuo prefisso per CELLULARE: " << endl;
        cin >> agenda.numCell;
        rubrica.push_back(agenda);
    }
    string cognomeCercato;
    cout << "Inserisci il cognome da cercare: " << endl;
    cin >> cognomeCercato;

    int posizione = -1;
    for (int i = 0; i < rubrica.size(); i++)
    {
        if (rubrica[i].cognome == cognomeCercato)
        {
            posizione = i;
            break;
        }
    }

    if (posizione != -1)
    {
        cout << "Voce di rubrica trovata alla posizione " << posizione << ":" << endl;
        cout << "Nome: " << rubrica[posizione].nome << endl;
        cout << "Cognome: " << rubrica[posizione].cognome << endl;
        cout << "Numero fisso: " << rubrica[posizione].numFisso << endl;
        cout << "Numero cellulare: " << rubrica[posizione].numCell << endl;
    }
    else
    {
        cout << "Nessuna voce di rubrica trovata con il cognome inserito." << endl;
    }
    return 0;
}