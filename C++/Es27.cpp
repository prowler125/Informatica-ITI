/*Dopo aver inserito un numero positivo, il programma restituisce da quante cifre è
costituito il numero. Risolvete l’esercizio con le stringhe.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numero;
    int numero_cifre = 0;

    cout << "Inserisci un numero positivo: ";
    cin >> numero;

    for (int i = 0; numero[i] != '\0'; i++)
    {
        numero_cifre++;
    }

    cout << "Il numero " << numero << " è composto da " << numero_cifre << " cifre." << endl;

    return 0;
}
