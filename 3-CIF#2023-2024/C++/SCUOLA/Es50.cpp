/*Scrivere un array di 10 interi e riempirlo con valori casuali tra 1 e 20 e ordinarlo in modo
crescescente e decrescente e ricercare un elemento casuale tra 1 e 20 al suo interno.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    int array[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        array[i] = rand() % 20 + 1;
    }
    sort(array, array + 10);
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    sort(array, array + 10, greater<int>());
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    int elemento;
    cout << "Inserisci un elemento da cercare: ";
    cin >> elemento;
    if (binary_search(array, array + 10, elemento))
    {
        cout << "Elemento trovato" << endl;
    }
    else
    {
        cout << "Elemento non trovato" << endl;
    }
    return 0;
}