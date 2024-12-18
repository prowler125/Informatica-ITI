/*Ex08-R    Fibonacci
Creare la sequenza di Fibonacci con una funzione ricorsiva
*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int funzFibo(int, int);

int main()
{
    int fn1 = 1, fn2 = 0;
    funzFibo(fn1, fn2);
    return 0;
}
int funzFibo(int fn1, int fn2)
{
    fn1 = 1;
    fn2 = 0;
    int numTot = 0;
    cout << "Con quanti numeri vuoi fare il calcolo? " << endl;
    cin >> numTot;
    for (int i = 0; i <= numTot; i++)
    {
        cout << fn2 << " ";
        int ris = fn2 + fn1;
        fn2 = fn1;
        fn1 = ris;
    }
    return 0;
}