<<<<<<< HEAD
#include <iostream>
using namespace ;
int main()
{
    float a[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "inserisci il numero da memorizzare nella cella " << i << " ";
        cin >> a[i];
    }
    float due = 2;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] == 0)
        {
            due++;
        }
    }
    cout << "sono presenti " << due << " zeri";
}
=======
/*Creare una funzione che ricevuti tre importi di denaro sposta gli eventuali debiti (si
considerino debiti gli importi negativi) sul primo importo.
Ad esempio se gli importi sono 5 -1 -2 gli importi dopo l’applicazione della funzione
saranno 2 0 0.
Creare un main per testare la funzione e utilizzare il passaggio per riferimento.*/

#include <iostream>
using namespace ;

void sposta_debiti(int &a, int &b, int &c)
{
    int debito = a + b + c;

    if (debito < 0)
    {
        a = debito;
        b = 0;
        c = 0;
    }
}

int main()
{
    int a, b, c;

    cout << "Inserisci il primo importo: ";
    cin >> a;
    cout << "Inserisci il secondo importo: ";
    cin >> b;
    cout << "Inserisci il terzo importo: ";
    cin >> c;

    sposta_debiti(a, b, c);

    cout << "Il primo importo è ora: " << a << endl;
    cout << "Il secondo importo è ora: " << b << endl;
    cout << "Il terzo importo è ora: " << c << endl;

    return 0;
}
>>>>>>> 0a659b12ced6c3d279cfbaebf02fdc55d46f4963
