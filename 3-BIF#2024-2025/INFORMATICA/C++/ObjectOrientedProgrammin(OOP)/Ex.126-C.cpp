/*
Ex. 126-C
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
Aggiungere i seguenti metodi off-line
void setxy( int , int );
        void setx(int );
        void sety( int );
        void update ( );
        float getipo ();
        int getx ();
        int gety ();
        void view ();


Farne uso nel main.

Modificare tipo Cat1 e Cat2 in float, aggiungere i metodi seguenti:

        1. Copia (Tri t)        che copia i valori del triangolo parametro nel triangolo corrente;
        2. Somma (Tri t)        che somma  i valori del triangolo parametro al triangolo corrente;
        3. Scala (int k)        che aumenta o diminuisce di k i cateti del triangolo corrente.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Tria
{
private:
    float cat1, cat2;
    string nome;
    float ipo, per, area;

public:
    Tria(float x, float y, string z)
    {
        cat1 = x;
        cat2 = y;
        nome = z;
        update();
    }

    void setxy(float x, float y)
    {
        cat1 = x;
        cat2 = y;
        update();
    }

    void setx(float x)
    {
        cat1 = x;
        update();
    }

    void sety(float y)
    {
        cat2 = y;
        update();
    }

    void update()
    {
        ipo = sqrt(cat1 * cat1 + cat2 * cat2);
        per = cat1 + cat2 + ipo;
        area = (cat1 * cat2) / 2;
    }

    float getipo()
    {
        return ipo;
    }

    float getx()
    {
        return cat1;
    }

    float gety()
    {
        return cat2;
    }

    void view()
    {
        cout << "Nome: " << nome << endl;
        cout << "Cateto 1: " << cat1 << endl;
        cout << "Cateto 2: " << cat2 << endl;
        cout << "Ipotenusa: " << ipo << endl;
        cout << "Perimetro: " << per << endl;
        cout << "Area: " << area << endl;
    }

    void copia(Tria t)
    {
        cat1 = t.cat1;
        cat2 = t.cat2;
        nome = t.nome;
        update();
    }

    void somma(Tria t)
    {
        cat1 += t.cat1;
        cat2 += t.cat2;
        update();
    }

    void scala(int k)
    {
        cat1 *= k;
        cat2 *= k;
        update();
    }
};

int main()
{
    Tria t1(3, 4, "Triangolo1");
    t1.view();

    Tria t2(6, 8, "Triangolo2");
    t2.view();

    t1.copia(t2);
    t1.view();

    t1.somma(t2);
    t1.view();

    t1.scala(2);
    t1.view();

    return 0;
}