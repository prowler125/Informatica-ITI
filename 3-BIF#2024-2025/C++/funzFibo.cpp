#include <iostream>
using namespace std;

int funzFibo()
{
    int numTot = 0;
    int fn2 = 0;
    int fn1 = 1;
    cout << "Con quanti numeri vuoi fare il calcolo? " << endl;
    cin >> numTot;
    for (int i = 0; i < numTot; i++)
    {
        cout << fn2 << " ";
        int ris = fn2 + fn1;
        fn2 = fn1;
        fn1 = ris;
    }
    return 0;
}
int main()
{
    funzFibo();
    return 0;
}





