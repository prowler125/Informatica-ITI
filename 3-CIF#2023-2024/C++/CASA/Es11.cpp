/*Provare a creare una classe Rettangolo con l'attributo base e altezza
e i metodi per il calcolo dell'area e del perimetro.*/

#include <iostream>
using namespace std;

class Rettangolo
{
private:
    double base;
    double altezza;

public:
    Rettangolo(double b, double h)
    {
        base = b;
        altezza = h;
    }

    double calcolaArea()
    {
        return base * altezza;
    }

    double calcolaPerimetro()
    {
        return 2 * (base + altezza);
    }
};

int main()
{
    Rettangolo rettangolo(5, 3);
    double area = rettangolo.calcolaArea();
    double perimetro = rettangolo.calcolaPerimetro();

    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;

    return 0;
}
