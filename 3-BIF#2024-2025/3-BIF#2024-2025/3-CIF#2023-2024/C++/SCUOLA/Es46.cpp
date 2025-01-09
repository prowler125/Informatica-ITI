#include <iostream>
#include <string>
using namespace std;

struct Contatto
{
    string cognome;
    string nome;
    string fisso;
    string cellulare;
    int annoNascita;
    int eta;
};

void caricavet(Contatto agenda[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Inserisci il cognome del contatto " << i + 1 << ": ";
        cin >> agenda[i].cognome;
        cout << "Inserisci il nome del contatto " << i + 1 << ": ";
        cin >> agenda[i].nome;
        cout << "Inserisci il numero fisso del contatto " << i + 1 << ": ";
        cin >> agenda[i].fisso;
        cout << "Inserisci il numero cellulare del contatto " << i + 1 << ": ";
        cin >> agenda[i].cellulare;
        cout << "Inserisci l'anno di nascita del contatto " << i + 1 << ": ";
        cin >> agenda[i].annoNascita;
    }
}

void stampavet(Contatto agenda[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Contatto " << i + 1 << ":" << endl;
        cout << "Cognome: " << agenda[i].cognome << endl;
        cout << "Nome: " << agenda[i].nome << endl;
        cout << "Numero fisso: " << agenda[i].fisso << endl;
        cout << "Numero cellulare: " << agenda[i].cellulare << endl;
        cout << "Anno di nascita: " << agenda[i].annoNascita << endl;
        cout << "Età: " << agenda[i].eta << endl;
        cout << endl;
    }
}

void cercavet(Contatto agenda[], int n, int &posizione)
{
    string cognomeCercato;
    cout << "Inserisci il cognome da cercare: ";
    cin >> cognomeCercato;

    for (int i = 0; i < n; i++)
    {
        if (agenda[i].cognome == cognomeCercato)
        {
            posizione = i;
            return;
        }
    }

    posizione = -1; // Se il cognome non viene trovato, impostiamo la posizione a -1
}

void calcola_eta(Contatto agenda[], int n, int annoCorrente)
{
    int sommaEta = 0;

    for (int i = 0; i < n; i++)
    {
        agenda[i].eta = annoCorrente - agenda[i].annoNascita;
        sommaEta += agenda[i].eta;
    }

    double mediaEta = static_cast<double>(sommaEta) / n;

    cout << "La media delle età è: " << mediaEta << endl;
}

int main()
{
    const int DIMENSIONE = 3;
    Contatto rubrica[DIMENSIONE];

    caricavet(rubrica, DIMENSIONE);

    cout << endl
         << "Rubrica telefonica:" << endl;
    stampavet(rubrica, DIMENSIONE);

    int posizione;
    cercavet(rubrica, DIMENSIONE, posizione);

    if (posizione != -1)
    {
        cout << "Il contatto cercato si trova alla posizione " << posizione + 1 << " dell'agenda." << endl;
    }
    else
    {
        cout << "Il contatto cercato non è presente nell'agenda." << endl;
    }

    int annoCorrente;
    cout << "Inserisci l'anno corrente: ";
    cin >> annoCorrente;

    calcola_eta(rubrica, DIMENSIONE, annoCorrente);

    return 0;
}