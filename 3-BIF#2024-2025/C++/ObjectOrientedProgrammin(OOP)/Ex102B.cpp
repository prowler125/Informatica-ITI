#include <string.h>
#include <iostream>
#include <math.h>
using namespace std;

// Classe punti cartesiani
class Punti
{
    // attributi
private:
    float x1, y1; // p1
    float x2, y2; // p2
    float mx, my; // punto medio
                  // metodi
public:
    // costruttore
    Punti(float ax, float ay, float bx, float by)
    {
        x1 = ax;
        y1 = ay;
        x2 = bx;
        y2 = by;
        mx = (x1 + x2) / 2;
        my = (y1 + y2) / 2;
    }
    // costruttore default
    Punti()
    {
        x1 = y1 = 0;
        x2 = y2 = 1;
        mx = my = 0;
    }
    //  distanza tra 2 punti
    float distance()
    {
        float d;
        d = sqrt(pow(x1 - x2, 2) + pow(y2 - y1, 2));
        return d;
    }
    //  set P1
    void setp1(int x, int y)
    {
        x1 = x;
        y1 = y;
    }
    //  set P2
    void setp2(int x, int y)
    {
        x2 = x;
        y2 = y;
    }
    //  update  punto medio
    void pm()
    {
        mx = (x1 + x2) / 2;
        my = (y1 + y2) / 2;
    }
    //  stampa  punto medio
    void stampaPuntoMedio()
    {
        cout << "punto medio =: " << mx << ", " << my << endl;
    }
    //  stampa  coppia
    void stampaCoppia()
    {
        cout << x1 << " , " << y1 << endl;
        cout << x2 << " , " << y2 << endl;
        cout << "-----------------------------" << endl;
    }
    // get P1
    void getP1(float &x, float &y)
    {
        x = x1;
        y = y1;
    }
    // stato
    void stato()
    {
        cout << "P1: (" << x1 << ", " << y1 << ")" << endl;
        cout << "P2: (" << x2 << ", " << y2 << ")" << endl;
        cout << "PM: (" << mx << ", " << my << ")" << endl;
    }
};

// utilizzo nel main
int main()
{
    // istanzio una coppia a
    Punti a(2, 0, 5, 4);
    a.stampaCoppia();
    a.stato();
    cout << "distanza= " << a.distance() << endl;
    a.setp1(8, 8); // cambio coordinate p1
    a.stampaCoppia();
    a.pm(); // aggiorno punto medio
    a.stato();
    float alfa, beta;
    a.getP1(alfa, beta);
    cout << alfa << " " << beta << endl;
    system("pause");

    return 0;
}
