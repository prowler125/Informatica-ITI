/*Provare a creare una classe Quadrato con l'attributo lato e i metodi per il calcolo dell'area e del perimetro.*/

#include <iostream>
using namespace std;
class Quadrato
{
private:
    double lato;

public:
    Quadrato(double l)
    {
        lato = l;
    }

    double calcolaArea()
    {
        return lato * lato;
    }

    double calcolaPerimetro()
    {
        return 4 * lato;
    }
};