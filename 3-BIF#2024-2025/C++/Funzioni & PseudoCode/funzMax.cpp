/*Ex02BF
Funzione che ritorna il massimo da 3 numeri dati in input.
Definire una funzione max3 che ha 3 parametri interi e restituisce il massimo dei numeri dati
*/

#include <iostream>
using namespace std;

int max(int A, int B, int C)
{
    cout << "Dammi il valore di A: ";
    cin >> A;
    cout << "Dammi il valore di B: ";
    cin >> B;
    cout << "Dammi il valore di C: ";
    cin >> C;
    if (A >= B && A >= C)
    {
        return A;
    }
}
int main()
{
    return 0;
}