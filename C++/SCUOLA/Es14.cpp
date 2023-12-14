/*Implementare un programma in C++, utiizzando Dev-C++ in grado di
effettuare la conversione di un numero intero da base 10 a base 2.*/

#include <iostream>
using namespace std;

int base10(int j)
{
    int d = j % 2 == 0;
    return d;
}
int main()
{
    int a = 0;
    cout << "Dammi il numero n da tastiera" << endl;
    cin >> a;
    int i = base10(a);
    cout << "Il numero in base 2 e': " << i << endl;
    Es20.cpp

        return 0;
}