/*Creare una funzione che riceve una quantità di tempo in formato ore, minuti
e secondi e la restituisce espressa solamente in secondi.*/
#include <iostream>
using namespace std;

int convertiInSecondi(int ore, int minuti, int secondi)
{
    int totaleSecondi = ore * 3600 + minuti * 60 + secondi;
    return totaleSecondi;
}

int main()
{
    int ore = 0;
    int minuti = 0;
    int secondi = 0;
    cout << "Inserisci il valore delle Ore: ";
    cin >> ore;
    cout << "Inserisci il valore dei Minuti: ";
    cin >> minuti;
    cout << "Inserisci il valore dei Secondi: ";
    cin >> secondi;
    int tempoInSecondi = convertiInSecondi(ore, minuti, secondi);
    cout << "Il tempo totale in secondi è: " << tempoInSecondi << endl;

    return 0;
}