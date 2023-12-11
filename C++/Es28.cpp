/*Considerare il precedente esercizio,  per implementare un programma con un menu che da la possibilità all'utente di eseguire più conversioni. In particolare, considerare le seguenti voci del menu di scelta:
- conversione da base 10 a base 2
- conversione da base 10. base 16
-conversione da base 10 a base 2 e 16
- terminazione del programma*/
#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    int num = 0;
    int risultato[N];
    int dim = 0;
    int s = 0;
    do
    {
        cout << "Scegli l'operazione di CONVERSIONE da eseguire: " << endl;
        cout << "1. Base 10 ==> base 2\n";
        cout << "2. Base 10 ==> base 16\n";
        cout << "3. Base 10 ==> base 2 e base 16\n";
        cout << "0. Terminare il programma\n";
        cin >> s;
        switch (s)
        {
        case 1:
            do
            {
                num = legginum();
                if (num <= 0)
                {
                    cout << "Valore non valido...\n";
                }

            } while (num <= 0);

            break;

        default:
            break;
        }

    } while (num != 0);

    return 0;
}