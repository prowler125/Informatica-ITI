/*Implementare un programma in C++, utiizzando Dev-C++ in grado di
effettuare la conversione di un numero intero da base 10 a base 2.*/

#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    cout << "Dammi il numero da tastiera" << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        int j = a / 2;
        cout << j;
    }
    else if (a % 2 == 1)
    {
        cout << "La divisione non e' possibile" << endl;
    }
    return 0;
}