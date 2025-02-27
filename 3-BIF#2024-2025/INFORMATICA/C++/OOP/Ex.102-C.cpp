/*
Ex. 102-C: coppie cartesiane
A partire dal 102B qui allegato
Trasformare i metodi in off-line
usare pmedio dentro le funzioni set che cambiano le coordinate
Nel main istanziare in modo dinamico un quarto punto d
*/

#include <string.h>
#include <iostream>
#include <math.h>
using namespace std;

class Punti
{
private:
    float p1x, p1y;
    float p2x, p2y;
    float pmx, pmy;

public:
    Punti(float vx1, float vy1, float vx2, float vy2);
    Punti();
    float distance();
    void pmedio();
    void setp1(int x, int y);
    void getP1(float &x, float &y);
    void setp2(int x, int y);
    void stapm();
    void stato();
};

Punti::Punti(float vx1, float vy1, float vx2, float vy2)
{
    p1x = vx1;
    p1y = vy1;
    p2x = vx2;
    p2y = vy2;
    pmx = (p1x + p2x) / 2;
    pmy = (p1y + p2y) / 2;
}

Punti::Punti()
{
    p1x = p1y = p2x = p2y = pmx = pmy = 0;
}

float Punti::distance()
{
    float d;
    d = sqrt(pow(p2x - p1x, 2) + pow(p2y - p1y, 2));
    return d;
}

void Punti::pmedio()
{
    pmx = (p1x + p2x) / 2;
    pmy = (p1y + p2y) / 2;
}

void Punti::setp1(int x, int y)
{
    p1x = x;
    p1y = y;
    pmedio();
}

void Punti::getP1(float &x, float &y)
{
    x = p1x;
    y = p1y;
}

void Punti::setp2(int x, int y)
{
    p2x = x;
    p2y = y;
    pmedio();
}

void Punti::stapm()
{
    cout << "Il Punto medio = : " << pmx << ", " << pmy << endl;
}

void Punti::stato()
{
    cout << "p1 = " << p1x << " " << p1y << endl;
    cout << "p2 = " << p2x << " " << p2y << endl;
    cout << "pm = " << pmx << " " << pmy << endl;
}

int main()
{
    Punti a(2, 0, 5, 4);
    a.stapm();
    a.stato();
    cout << "La Distanza = " << a.distance() << endl;
    a.setp1(8, 8);
    a.stapm();
    a.stato();
    float alfa, beta;
    a.getP1(alfa, beta);
    cout << alfa << " " << beta << endl;
    system("pause");

    Punti b(0, 0, 10, 10);
    b.stapm();
    cout << "La Distanza = " << b.distance() << endl;
    system("pause");

    Punti c;
    c.stapm();
    c.setp1(3, 0);
    c.setp2(0, 4);
    cout << "La Distanza = " << c.distance() << endl;

    Punti *d = new Punti(1, 1, 2, 2);
    d->stapm();
    d->stato();
    cout << "La Distanza= " << d->distance() << endl;
    delete d;

    return 0;
}
