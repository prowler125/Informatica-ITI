/*Memorizzare in un array di 100 posti i primi cento numeri naturali in ordine inverso.*/

#include <iostream>
using namespace std;

int main()
{
    int a[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = 99 - i;
    }
    for (int i = 0; i < 100; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
