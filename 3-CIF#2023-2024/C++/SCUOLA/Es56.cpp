/*Definire la classe libro con gli attributi : titolo, autore, anno, città. Implementare i metodi
per inserire e visualizzare i dati dei libri, aggiungendo anche un costruttore e un disruttore*/

#include <iostream>
using namespace std;

class Libro
{
private:
    string titolo;
    string autore;
    int anno;
    string citta;

public:
    Libro(string t, string a, int an, string c)
    {
        titolo = t;
        autore = a;
        anno = an;
        citta = c;
    }

    ~Libro()
    {
    }

    void inserisciDati()
    {
        cout << "Inserisci il titolo del libro: ";
        cin >> titolo;
        cout << "Inserisci l'autore del libro: ";
        cin >> autore;
        cout << "Inserisci l'anno di pubblicazione del libro: ";
        cin >> anno;
        cout << "Inserisci la città di pubblicazione del libro: ";
        cin >> citta;
    }

    void visualizzaDati()
    {
        cout << "Titolo: " << titolo << endl;
        cout << "Autore: " << autore << endl;
        cout << "Anno di pubblicazione: " << anno << endl;
        cout << "Città di pubblicazione: " << citta << endl;
    }
};
