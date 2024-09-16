/*Scrivere un programma che chieda di inserire n numeri, se sono negativi devono
essere trasformati in positivi, dopo di ché per ogni numero bisogna verificare se sa
pari o dispari, alla fine bisogna visualizzare la somma dei numeri pari/dispari e il loro
numero. Il tutto deve essere gestito con funzioni separate. Una volta risolto il
problema di partenza suddividere il file in più file diversi dove la funzione main deve
essere inserita in un file separato dal resto delle funzioni create.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int N = 10;
    int vett[N];
    int pari = 0, dispari = 0, sommaPari = 0, sommaDispari = 0;
    cout << "Dammi i valori dell'Array, da tastiera: " << endl;
    for (int i = 0; i <= N; i++)
    {
        cin >> vett[i];
        if (vett[i] < 0)
        {
            vett[i] = +vett[i];
            if (vett[i] % 2 == 0)
            {
                pari++;
                sommaPari = sommaPari + vett[i];
            }
            else if (vett[i] % 2 == 1)
            {
                dispari++;
                sommaDispari = sommaDispari + vett[i];
            }
        }
        cout << "La somma dei numeri PARI è: " << pari << endl;
        cout << "La somma dei numeri DISPARI è: " << dispari << endl;
        cout << "La somma di tutti i valori PARI è: " << sommaPari << endl;
        cout << "La somma di tutti i valori DISPARI è: " << sommaDispari << endl;
    }
    return 0;
}