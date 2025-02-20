/*
Ex 126 Triangoli Rettangoli

Definire una classe Tria con metodi
off-line. Vedi sotto costruttore
implementazione metodi off-line
*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

class Tria
{
private:
    int cat1, cat2;
    double ipo, per, area;
    string nome;

public:
    Tria(int x, int y, string z);
    double Ipo();
    double Per();
    double Area();
    string Nome();
};

Tria::Tria(int x, int y, string z)
{
    cat1 = x;
    cat2 = y;
    nome = z;
    ipo = sqrt(x * x + y * y);
    per = x + y + ipo;
    area = x * y / 2;
}

double Tria::Ipo()
{
    return ipo;
}

double Tria::Per()
{
    return per;
}

double Tria::Area()
{
    return area;
}

string Tria::Nome()
{
    return nome;
}

int main()
{
    int cat1, cat2;
    string nome;

    cout << "Inserisci il nome del triangolo: ";
    cin >> nome;
    cout << "Inserisci il valore del primo cateto: ";
    cin >> cat1;
    cout << "Inserisci il valore del secondo cateto: ";
    cin >> cat2;

    Tria t(cat1, cat2, nome);
    cout << "Nome: " << t.Nome() << endl;
    cout << "Ipotenusa: " << t.Ipo() << endl;
    cout << "Perimetro: " << t.Per() << endl;
    cout << "Area: " << t.Area() << endl;
    return 0;
}