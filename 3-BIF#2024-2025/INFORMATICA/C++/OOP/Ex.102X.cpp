/*
Ex102X: Vettore classe Punti
idem ad ex102B , ma nel main ()  dichiarare  un vettore di puntatori
ad oggetti della classe Punti : es.  Punti * vet [3];

quindi . con un ciclo for istanziare in modo dinamico   gli oggetti assegnandoli agli elementi del vettore vet,
 in modo che le coordinate del 2°  punto siano  il doppio delle coordinate del 1° punto.

Usare un ciclo for  per  chiamare il metodo  stato( )e per ogni elemento di vet stampare le due  coppie di punti,
il punto medio, la   loro distanza

Limitare  a 2  in numero dei decimali della distanza tra i due punti
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Punti
{
private:
    double x, y;

public:
    Punti(double x = 0, double y = 0) : x(x), y(y) {}

    void stato() const
    {
        cout << "Punto(" << x << ", " << y << ")\n";
    }

    double distanza(const Punti &altro) const
    {
        return sqrt(pow(x - altro.x, 2) + pow(y - altro.y, 2));
    }

    Punti puntoMedio(const Punti &altro) const
    {
        return Punti((x + altro.x) / 2, (y + altro.y) / 2);
    }
};

int main()
{
    Punti *vet[3];

    for (int i = 0; i < 3; ++i)
    {
        double x = (i + 1) * 1.0;
        double y = (i + 1) * 2.0;
        vet[i] = new Punti(x, y);
    }

    for (int i = 0; i < 3; ++i)
    {
        vet[i]->stato();
    }

    for (int i = 0; i < 2; ++i)
    {
        Punti *p1 = vet[i];
        Punti *p2 = vet[i + 1];
        cout << "Distanza tra i punti " << i + 1 << " e " << i + 2 << ": "
             << fixed << setprecision(2) << p1->distanza(*p2) << "\n";
        Punti pm = p1->puntoMedio(*p2);
        cout << "Punto medio: ";
        pm.stato();
    }

    for (int i = 0; i < 3; ++i)
    {
        delete vet[i];
    }

    return 0;
}