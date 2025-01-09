/*Realizzare un programma che preveda l’utilizzo di una struttura libro. La struttura
permette di descrivere un libro in base al codice ISBN (alfanumerico), numero di pagine,
prezzo, anno di pubblicazione autore. Il programma deve prevedere inoltre prevedere la
memorizzazione di tre differenti libri e, dopo avere inserito i dati, riportare i tre libri in
ordine crescente per anno di pubblicazione (dal più vecchio al più nuovo).*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct libro
{
    char isbn[25];
    int nPagine;
    int prezzo;
    int anno;
};

int main()
{
    const int N = 3;
    libro dati[N];

    for (int i = 0; i <= N; i++)
    {
        cout << "Inserisci il Codice ISBN del libro: ";
        cin >> dati[i].isbn;
        cout << "Inserisci il numero totale di Pagine del libro: ";
        cin >> dati[i].nPagine;
        cout << "Inserisci il prezzo del libro: ";
        cin >> dati[i].prezzo;
        cout << "Inserisci l'anno di pubblicazione dell'Autore del libro: ";
        cin >> dati[i].anno;
    }
    int maxAnno = dati[0].anno;
    int maxIndex = 0;

    for (int i = 1; i < N; i++)
    {
        if (dati[i].anno > maxAnno)
        {
            maxAnno = dati[i].anno;
            maxIndex = i;
        }
    }

    cout << "Il Codice ISBN del libro più recente" << endl;
    cout << "Anno di pubblicazione: " << dati[maxIndex].anno << endl;

    return 0;
}