/*Considerare il precedente esercizio,  per implementare un programma con un menu che da la possibilità all'utente di eseguire più conversioni. In particolare, considerare le seguenti voci del menu di scelta:
- conversione da base 10 a base 2
- conversione da base 10. base 16
-conversione da base 10 a base 2 e 16
- terminazione del programma*/
#include <iostream>
using namespace ;

string decToBin(int n)
{
    string binario = "";
    while (n > 0)
    {
        binario += (n % 2) + '0';
        n /= 2;
    }
    reverse(binario.begin(), binario.end());
    return binario;
}

string decToHex(int n)
{
    string esadecimale = "";
    while (n > 0)
    {
        char carattere;
        if (n % 16 < 10)
        {
            carattere = n % 16 + '0';
        }
        else
        {
            carattere = n % 16 - 10 + 'A';
        }
        esadecimale += carattere;
        n /= 16;
    }
    reverse(esadecimale.begin(), esadecimale.end());
    return esadecimale;
}

void decToBinHex(int n)
{
    cout << "Binario: " << decToBin(n) << endl;
    cout << "Esadecimale: " << decToHex(n) << endl;
}

int main()
{
    int scelta;
    do
    {
        cout << "Scegli la conversione da effettuare:" << endl;
        cout << "1) Da base 10 a base 2" << endl;
        cout << "2) Da base 10 a base 16" << endl;
        cout << "3) Da base 10 a base 2 e 16" << endl;
        cout << "4) Termina" << endl;
        cin >> scelta;

        switch (scelta)
        {
        case 1:
        {
            int n;
            cout << "Inserisci il numero da convertire: ";
            cin >> n;
            cout << "Il numero " << n << " in base 2 è: " << decToBin(n) << endl;
            break;
        }
        case 2:
        {
            int n;
            cout << "Inserisci il numero da convertire: ";
            cin >> n;
            cout << "Il numero " << n << " in base 16 è: " << decToHex(n) << endl;
            break;
        }
        case 3:
        {
            int n;
            cout << "Inserisci il numero da convertire: ";
            cin >> n;
            decToBinHex(n);
            break;
        }
        case 4:
            break;
        default:
            cout << "Scelta non valida!" << endl;
            break;
        }
    } while (scelta != 4);

    return 0;
}