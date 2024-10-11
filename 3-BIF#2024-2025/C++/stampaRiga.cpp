/*Ex06F    stampariga
Scrivere una funzione  che ha  2  parametri (int Num,   char X)    e
stampa una riga con Num volte il carattere X;
quindi dal main chiamare la funzione per valori numerici
che vanno da 1 a 80 e con un carattere a scelta.*/

#include <iostream>
using namespace std;

int stampaRiga(int, char);
int main()
{
    cout << stampaRiga << endl;
    return 0;
}
int stampaRiga(int num, char x)
{
    cout << "Quante volte deve essere eseguita questa Stampa? " << endl;
    cin >> num;
    cout << "Quale carattere preferisce? " << endl;
    cin >> x;
    for (int i = 1; i <= num; i++)
    {
        return x;
    }
}