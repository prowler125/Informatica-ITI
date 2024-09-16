<<<<<<< HEAD
/*Considerare il precedente esercizio,  per implementare un programma con un menu che da la possibilità all'utente di eseguire più conversioni. In particolare, considerare le seguenti voci del menu di scelta:
- conversione da base 10 a base 2
- conversione da base 10. base 16
-conversione da base 10 a base 2 e 16
- terminazione del programma*/
=======
/*Leggi un numero NUM indicato da un utente e quindi effettua il calcolo e la stampa
della sottrazione di tutti i numeri dispari compresi tra NUM e 1 (estremo
superiore compreso).*/

>>>>>>> 0a659b12ced6c3d279cfbaebf02fdc55d46f4963
#include <iostream>
using namespace ;

int main()
{
<<<<<<< HEAD
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
=======
    int num, somma = 0;

    cout << "Inserisci un numero NUM: ";
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            somma -= i;
        }
    }

    cout << "La sottrazione di tutti i numeri dispari compresi tra NUM e 1 è: " << somma << endl;

    return 0;
}
>>>>>>> 0a659b12ced6c3d279cfbaebf02fdc55d46f4963
