#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    const int N = 10;
    int vett[N];
    cout << "Dammi i valori del vettore, da tastiera: " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> vett[i];
    }
    return 0;
}