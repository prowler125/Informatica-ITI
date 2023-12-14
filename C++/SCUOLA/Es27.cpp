<<<<<<< HEAD
#include <iostream>
#include <cmath>
=======
/*Dopo aver inserito un numero positivo, il programma restituisce da quante cifre è
costituito il numero. Risolvete l’esercizio con le stringhe.*/

#include <iostream>
>>>>>>> 0a659b12ced6c3d279cfbaebf02fdc55d46f4963
#include <string>
using namespace std;

int main()
{
<<<<<<< HEAD
    int d = 0, b, i = 0;

    cout << "Inserisci il numero binario da convertire: ";
    cin >> b;

    while (b > 0)
    {
        if (b % 10 != 0)
        {
            d = d + pow(2, i);
        }
        b = b / 10;
        i++;
    }

    cout << "Il numero in decimale vale: " << d;
    return 0;
}
=======
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
>>>>>>> 0a659b12ced6c3d279cfbaebf02fdc55d46f4963
