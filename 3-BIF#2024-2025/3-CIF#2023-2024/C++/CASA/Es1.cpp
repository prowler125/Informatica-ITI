/*Creare un array di interi con 10 posti, inserire zeri in tutte le celle;
leggere in che posizione inserire un 1 e inserirlo nella corretta posizione
dell’array; scandire l’array una cella alla volta fermandosi quando si trova
l’uno, dire in che cella è stato trovato.*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    const int N = 10;
    int vett[N];
    cout << "Dammi i valori dell'Array, da tastiera: ";
    for (int i = 0; i < N; i++)
    {
        cin >> vett[i];
        if (vett[i] == 1)
        {
            cout << "Hai inserito il numero 1 alla cella n°" << vett[i];
        }
    }

    return 0;
}