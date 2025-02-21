#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Tria
{
private:
    int cat1, cat2;
    string nome;
    float ipo, per, area;

public:
    Tria(int x, int y, string z)
    {
        cat1 = x;
        cat2 = y;
        nome = z;
        ipo = sqrt(x * x + y * y);
        per = x + y + ipo;
        area = x * y / 2.0;
    }

    void setxy(int x, int y)
    {
        cat1 = x;
        cat2 = y;
        update();
    }

    void setx(int x)
    {
        cat1 = x;
        update();
    }

    void sety(int y)
    {
        cat2 = y;
        update();
    }

    void update()
    {
        ipo = sqrt(cat1 * cat1 + cat2 * cat2);
        per = cat1 + cat2 + ipo;
        area = cat1 * cat2 / 2.0;
    }

    float getipo()
    {
        return ipo;
    }

    int getx()
    {
        return cat1;
    }

    int gety()
    {
        return cat2;
    }

    float getper()
    {
        return per;
    }

    float getarea()
    {
        return area;
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
};

int main()
{
    string nome;
    int cat1, cat2;
    int choice;
    bool areaCalculated = false, perCalculated = false, ipoCalculated = false;

    cout << "Inserisci il nome del triangolo: ";
    getline(cin, nome);

    cout << "Inserisci il primo cateto: ";
    cin >> cat1;

    cout << "Inserisci il secondo cateto: ";
    cin >> cat2;

    Tria t(cat1, cat2, nome);

    while (!areaCalculated || !perCalculated || !ipoCalculated)
    {
        cout << "Scegli cosa calcolare:" << endl;
        cout << "1) Area" << endl;
        cout << "2) Perimetro" << endl;
        cout << "3) Ipotenusa" << endl;
        cout << "Scelta: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (!areaCalculated)
            {
                cout << "Area: " << t.getarea() << endl;
                areaCalculated = true;
                system("pause");
            }
            else
            {
                cout << "Area gia' calcolata." << endl;
                system("pause");
            }
            break;
        case 2:
            if (!perCalculated)
            {
                cout << "Perimetro: " << t.getper() << endl;
                perCalculated = true;
                system("pause");
            }
            else
            {
                cout << "Perimetro gia' calcolato." << endl;
                system("pause");
            }
            break;
        case 3:
            if (!ipoCalculated)
            {
                cout << "Ipotenusa: " << t.getipo() << endl;
                ipoCalculated = true;
                system("pause");
            }
            else
            {
                cout << "Ipotenusa gia' calcolata." << endl;
                system("pause");
            }
            break;
        default:
            cout << "Scelta non valida" << endl;
            system("pause");
            break;
        }
    }

    return 0;
}