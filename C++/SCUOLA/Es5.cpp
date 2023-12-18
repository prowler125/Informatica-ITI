/*Scrivere un programma che legge due orari in ore minuti e secondi e dice quale viene prima
dei due. Per risolvere l’esercizio non si deve trasformare l’orario in secondi ma mantenendo il
formato ore, minuti e secondi.(Già svolto l’anno scorso)*/

#include <iostream>
#include <string>
using namespace ;

int main()
{
    int ore1, min1, sec1, ore2, min2, sec2;
    string Orario1, Orario2;
    char Orario1 = ore1 + min1 + sec1;
    char Orario2 = ore2 + min2 + sec2;
    cout << "Dammi le ORE del 1 ORARIO" << endl;
    cin >> ore1;
    cout << "Dammi i MINUTI del 1 ORARIO" << endl;
    cin >> min1;
    cout << "Dammi i SECONDI del 1 ORARIO" << endl;
    cin >> sec1;
    cout << "Dammi le ORE del 2 ORARIO" << endl;
    cin >> ore2;
    cout << "Dammi i MINUTI del 2 ORARIO" << endl;
    cin >> min2;
    cout << "Dammi i SECONDI del 2 ORARIO" << endl;
    cin >> sec2;
    for (int i = 0; i <= 6; i++)
    {
        if (ore1 < ore2)
        {
            cout << "L'ORA maggiore è: " << ore1 << endl;
        }
        else
        {
            cout << "L'ORA maggiore è: " << ore2 << endl;
        }

        if (min1 < min1)
        {
            cout << "I MINUTI maggiori sono: " << min1 << endl;
        }
        else
        {
            cout << "I MINUTI maggiori sono: " << min2 << endl;
        }

        if (ore1 < ore2)
        {
            cout << "I SECONDI maggiori sono:" << sec1 << endl;
        }
        else
        {
            cout << "I SECONDI maggiori sono:" << sec2 << endl;
        }
    }
    if (Orario1 > Orario2)
    {
        cout << "L'Orario MAGGIORE e': " << Orario1 << endl;
    }
    else
    {
        cout << "L'Orario MAGGIORE e': " << Orario2 << endl;
    }
    return 0;
}