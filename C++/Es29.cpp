/*Creare una funzione che calcola la cifra più significativa di un numero intero
(ovvero “quella più a sinistra”).
Leggere due numeri interi compresi tra 0 e 1000 e verificare se la cifra più
significativa del prodotto dei due numeri è minore di quella della somma.
Creare un main per testare la funzione e gestire i casi di inserimento errati.*/

#include <iostream>
using namespace std;

int cifra_piu_significativa(int numero)
{
    while (numero >= 10)
    {
        numero /= 10;
    }
    return numero % 10;
}

int main()
{
    int numero1, numero2;

    do
    {
        cout << "Inserisci il primo numero: ";
        cin >> numero1;
    } while (numero1 < 0 || numero1 > 1000);

    do
    {
        cout << "Inserisci il secondo numero: ";
        cin >> numero2;
    } while (numero2 < 0 || numero2 > 1000);

    int cifra_piu_significativa_somma = cifra_piu_significativa(numero1 + numero2);
    int cifra_piu_significativa_prodotto = cifra_piu_significativa(numero1 * numero2);

    if (cifra_piu_significativa_somma > cifra_piu_significativa_prodotto)
    {
        cout << "La cifra più significativa della somma è maggiore di quella del prodotto." << endl;
    }
    else
    {
        cout << "La cifra più significativa della somma è minore o uguale a quella del prodotto." << endl;
    }

    return 0;
}
