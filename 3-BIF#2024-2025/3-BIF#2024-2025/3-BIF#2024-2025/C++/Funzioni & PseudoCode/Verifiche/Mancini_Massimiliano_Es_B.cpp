/*
Ex. B   Potenza Ricorsiva
Mancini Massimiliano
III^B if
21-11-2024
*/

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

int pot(int, int);

int main()
{
    int N = 0;
    int X=0;
    cout << "Dammi il valore di X, da tastiera: " << endl;
    cin >> X;
    cout << "Dammi il valore di N, da tastiera: " << endl;
    cin >> N;
    cout<<pot(X, N)<<endl;
    return 0;
}

int pot(int X, int N)
{
    if (N == 0)
        return 1;
    else
        return X * pot(X, N - 1);
}