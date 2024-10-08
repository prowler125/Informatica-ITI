/*Creare la sequenza di Fibonacci con n numeri*/

#include <iostream>
using namespace std;

int main()
{
    int numTot = 0;
    int fn, n;
    int fn2 = 0;
    int fn1 = 1;
    cout << "Con quanti numeri vuoi fare il calcolo? " << endl;
    cin >> numTot;
    int i = 0;
    do
    {
        cout << fn2 << " ";
        int ris = fn2 + fn1;
        fn2 = fn1;
        fn1 = ris;
        i++;
    } while (i <= numTot);
    return 0;
}