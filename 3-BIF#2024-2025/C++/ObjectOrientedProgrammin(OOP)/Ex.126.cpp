/*
Definire una classe Tria con metodi off-line
Attributi:
private:
        int cat1, cat2;
        string nome;
        float ipo, per,area;

Vedi sotto il costruttore
implementazione metodi off- line
    Tria ::Tria (int x, int y, string z){
        cat1 = x;
        cat2 = y;
        nome=z;
        ipo = sqrt( x*x+y*y);
        per= x+y+ipo;
        area= x*y/2;
         }
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Tria
{
private:
    int cat1, cat2;
    double ipo, per, area;
    string nome;

public:
    Tria(int x, int y, string z);
    double Ipo() const;
    double Per() const;
    double Area() const;
    string Nome() const;
};

Tria::Tria(int x, int y, string z) : cat1(x), cat2(y), nome(z)
{
    ipo = sqrt(x * x + y * y);
    per = x + y + ipo;
    area = static_cast<double>(x) * static_cast<double>(y) / 2;
}

double Tria::Ipo() const
{
    return ipo;
}

double Tria::Per() const
{
    return per;
}

double Tria::Area() const
{
    return area;
}

string Tria::Nome() const
{
    return nome;
}

int main()
{
    int cat1, cat2;
    string nome;

    cout << "Inserisci il nome del triangolo: ";
    getline(cin, nome);
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
