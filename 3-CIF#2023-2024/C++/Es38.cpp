/*3)Scrivere un programma che crea tre funzioni dove la prima controlla la dimensione
dell’array, la seconda acquisisce da tastiera un array, la terza somma le sue
componenti.*/

#include <iostream>
using namespace std;

int dimArray()
{
    const int DIM = 100;
    int array[DIM];
}
int *array()
{
    const int DIM = 100;
    int array[DIM];
    for (int i = 0; i < DIM; i++)
    {
        cout << "Inserisci il valore dell'array: ";
        cin >> array[i];
    }
    return array;
}
int main()
{

    return 0;
}