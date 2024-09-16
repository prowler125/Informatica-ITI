#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ostream>
using namespace std;

class persona
{
public:
    int codice = 0;
    string nome;
    string cognome;

private:
    bool registrato = 1;

public:
    int registraPersona()
    {
        cout << "Inserisci il codice della persona: " << endl;
        cin >> codice;
        if (codice == 0)
        {
            cout << "La " << endl;
        }
        {
            /* code */
        }
        
        registrato = true;
    }

    void mostraDatiPersona()
    {
        cout << "Codice: " << codice << endl;
        cout << "Nome: " << nome << endl;
        cout << "Cognome: " << cognome << endl;
        cout << "Registrato: " << (registrato ? "Sì" : "No") << endl;
    }
};