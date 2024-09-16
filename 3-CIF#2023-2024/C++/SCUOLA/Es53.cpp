/*Realizzare un programma che preveda l'utilizzo di una struttura auto. La struttura
permette di descrivere un'automobile in base alla marca, cilindrata, anno di
immatricolazione e acquirente. Il programma deve prevedere inoltre l'utilizzo di un Array di
tipo auto (con dimensioni pari a 3) che consente di inserire da tastiera i dati delle auto in
vendita in un autosalone. Si cerchi la macchina con anno di immatricolazione più recente e
si visualizzi a video i dati relativi all’automobile corrispondente.*/

#include <iostream>
#include <string>
using namespace std;

struct Auto
{
    string marca;
    int cilindrata;
    int anno;
    string acquirente;
};

int main()
{
    const int N = 3;
    Auto autosalone[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Inserisci il nome dell'acquirente: ";
        cin >> autosalone[i].acquirente;
        cout << "Inserisci la marca dell'auto: ";
        cin >> autosalone[i].marca;
        cout << "Inserisci la cilindrata dell'auto: ";
        cin >> autosalone[i].cilindrata;
        cout << "Inserisci l'anno di immatricolazione dell'auto: ";
        cin >> autosalone[i].anno;
    }

    int maxAnno = autosalone[0].anno;
    int maxIndex = 0;

    for (int i = 1; i < N; i++)
    {
        if (autosalone[i].anno > maxAnno)
        {
            maxAnno = autosalone[i].anno;
            maxIndex = i;
        }
    }

    cout << "Automobile con anno di immatricolazione più recente:" << endl;
    cout << "Marca: " << autosalone[maxIndex].marca << endl;
    cout << "Cilindrata: " << autosalone[maxIndex].cilindrata << endl;
    cout << "Anno di immatricolazione: " << autosalone[maxIndex].anno << endl;
    cout << "Acquirente: " << autosalone[maxIndex].acquirente << endl;
    return 0;
}