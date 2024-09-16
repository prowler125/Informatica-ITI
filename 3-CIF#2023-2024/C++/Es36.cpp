/*Scrivere un programma che dati i dati il cognome, il nome e l’anno di nascita. Il
programma crea automaticamente un codice identificativo della persona
prendendo i primi due caratteri del cognome, i primi due del nome e le cifre
dell’anno di nascita. L’esercizio va risolto attraverso le stringhe. Controllare che
l’anno sia ammissibile ovvero compreso tra 1900 e il 2023.*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string surname, firname;
    int yearOfBirth;

    cout << "Immetti il tuo Cognome: ";
    cin >> surname;

    cout << "Immetti il tuo Nome: ";
    cin >> firname;

    cout << "Immetti il tuo anno di nascita: ";
    cin >> yearOfBirth;

    if (yearOfBirth < 1900 || yearOfBirth > 2023)
    {
        cout << "Il tuo anno di nascita deve essere tra 1900 e 2023 \n";
        return 1;
    }

    string idCode = surname.substr(0, 2) + firname.substr(0, 2) + to_string(yearOfBirth);

    cout << "Il tuo Codice Fiscale è: " << idCode << "\n";

    return 0;
}