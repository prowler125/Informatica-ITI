/*Scrivere un programma che legge tre numeri e dice qual è il maggiore. Nel caso siano tutti e tre
uguali la scritta dovrà essere:
Il primo è maggiore
Il secondo è maggiore
Il terzo è maggiore*/

#include <iostream>
using namespace ;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Dammi i 3 numeri da tastiera" << endl;
    cin >> a >> b >> c;
    if (a > c && a > b)
    {
        cout << "Il numero maggiore e' " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "Il numero MAGGIORE e' " << b << endl;
    }
    else if (c > b && c > a)
    {
        cout << "Il numero MAGGIORE e' " << c << endl;
    }
    return 0;
}