/* N!= N*(N-1) !  e che
0!= 1 e 1!= 1 */

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    /*int fn2 = 0;
    int fn1 = 1;*/
    cout << "Inserisci un numero per effettuare il Fattoriale: " << endl;
    cin >> n;
    int fatt = 1;
    for (int i = 1; i <= n; i++)
    {
        fatt = fatt * i;
        cout << fatt;
    }
    return 0;
}



