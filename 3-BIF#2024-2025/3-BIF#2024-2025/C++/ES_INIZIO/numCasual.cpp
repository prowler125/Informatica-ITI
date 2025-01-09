/*Ex10  Numeri a caso

Genera un numero casuale X tra:
    1.  1 e  6
    2.  5 e 10
    3.  -5 e 5


- 1 ed N letto da tastiera*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cout << "Inserisci un valore per N: ";
    cin >> N;

    for (int i = 1; i < 10; i++)
    {
        int randomNum = rand() % N + 6;
        cout << "Il Numero Casuale da " << N << ": " << randomNum << endl;
    }

    return 0;
}