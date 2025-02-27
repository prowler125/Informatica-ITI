/*Ex 19
STRINGA: ricerca carattere
Scrivi un programma che dopo avere letto:
- una stringa parola
- un carattere x
Stampa quante volte il carattere x compare in parola
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string p;
    char x;
    int i = 0;
    cout << "Scrivi un frase qui sotto: " << endl;
    getline(cin, p);
    cout << "Immetti un carattere: " << endl;
    cin >> x;
    int N = p.length();
    for (int k = 0; k < N; k++)
    {
        if (p[k] == x)
        {
            i++;
        }
    }
    cout << i << endl;

    return 0;
}