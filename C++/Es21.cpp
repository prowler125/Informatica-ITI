/*Scrivere un programma per la rappresentazione del triangolo di Floyd.Il triangolo
di floyd è un triangolo che contiene numeri naturali, definito riempiendo le righe del
triangolo con numeri consecutivi e partendo da 1 nell'angolo in alto a sinistra. Il
programma riceve da tastiera un numero N. Il programma visualizza le prime N righe
del triangolo di Floyd.
Indicazioni:
Il numero inserito dall'utente deve essere positivo, pertanto bisogna gestire
l'inserimento di numeri errati.(3 punti)
le operazioni necessarie alla risoluzione del problema(6 punti)
 l'output deve essere uguale all'output mostrato sotto.(3 punti)*/

#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Inserire il valore di N qui sotto " << endl;
    cin >> N;
    if (N <= 0)
    {
        cout << "Il valore di N è sbagliato... qui sotto è riportato l'errore:" << endl;
        cout << "Il valore di N è uguale a N<=0" << endl;
        cout << "Pertanto reinserirlo qui sotto:" << endl;
        cin >> N;
    }
    else if (N > 0)
    {
        int riga = 1;
        int numero = 1;
        int empty_space = 1;
        int counter = 1;
        int qnt = 1;
        int i = 1;

        cout << endl
             << endl;

        while (riga <= N)
        {
            empty_space = 1;
            counter = 1;

            while (empty_space <= N - i)
            {
                cout << " ";
                empty_space++;
            }

            i++;

            while (counter <= qnt)
            {
                cout << numero << " ";

                numero++;
                counter++;
            }

            qnt++;

            cout << endl;

            riga++;
        }
    }
    return 0;
}