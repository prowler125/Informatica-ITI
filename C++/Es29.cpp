/*Leggere e memorizzare in un array di 8 celle, 8 numeri reali, dopo averli memorizzati
calcolarne la somma e la media.*/

#include <iostream>
using namespace std;
int main()
{
    float a[8];
    for (int i = 0; i < 8; i++)
    {
        cout << "inserisci il numero da memorizzare nella cella: " << i;
        cin >> a[i];
    }
    float somma = 0;
    for (int i = 0; i < 8; i++)
    {
        somma = somma + a[i];
    }
    cout << "somma " << somma << " media " << somma / 8;
    return 0;
}
