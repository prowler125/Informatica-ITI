/*
Ex 38F Funzione Fattoriale
Calcolo Fattoriale per mezzo di unafunzione
Idem ex38, ma definendo una funzione FATTOR
*/

#include <iostream>

using namespace std;

int FATTOR(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * FATTOR(n - 1);
    }
}

int main()
{
    int num;
    cout << "Inserisci un numero: ";
    cin >> num;
    cout << "Il fattoriale di " << num << " e' " << FATTOR(num) << endl;
    return 0;
}