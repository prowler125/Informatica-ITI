/*Creare una funzione che scambia il minore elemento di un array di interi con il
maggiore. Si suppone che il vettore venga inizializzato a tempo di esecuzione,
così come la sua dimensione.*/

#include <iostream>
using namespace std;

void scambiaMinMax(int *v, int n)
{
    int i, min, max;

    min = v[0];
    max = v[0];
    for (i = 1; i < n; i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    int temp = v[min];
    v[min] = v[max];
    v[max] = temp;
}

int main()
{
    int n;
    cout << "Inserisci la dimensione dell'array: ";
    cin >> n;

    int *v = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Inserisci l'elemento " << i + 1 << ": ";
        cin >> v[i];
    }
    scambiaMinMax(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    delete[] v;
    return 0;
}