/*Realizzare tre diverse strutture per: modellare un rettangolo, un quadrato ed un
cerchio. Utilizzare queste strutture per consentire a un utente di inserire base ed altezza
del rettangolo, lato del quadrato e raggio del cerchio. Calcolata l&#39;area delle differenti
forme geometriche, il programma deve riportare in seguito quale delle tre è
caratterizzata dall&#39;area maggiore.*/

#include <iostream>
#include <cmath>
using namespace std;

struct Rettangolo
{
    double base;
    double altezza;
};

struct Quadrato
{
    double lato;
};

struct Cerchio
{
    double raggio;
};

double calcolaAreaRettangolo(const Rettangolo &rettangolo)
{
    return rettangolo.base * rettangolo.altezza;
}

double calcolaAreaQuadrato(const Quadrato &quadrato)
{
    return pow(quadrato.lato, 2);
}

double calcolaAreaCerchio(const Cerchio &cerchio)
{
    return M_PI * pow(cerchio.raggio, 2);
}

int main()
{
    Rettangolo rettangolo;
    Quadrato quadrato;
    Cerchio cerchio;

    cout << "Inserisci la base del rettangolo: ";
    cin >> rettangolo.base;
    cout << "Inserisci l'altezza del rettangolo: ";
    cin >> rettangolo.altezza;

    cout << "Inserisci il lato del quadrato: ";
    cin >> quadrato.lato;

    cout << "Inserisci il raggio del cerchio: ";
    cin >> cerchio.raggio;

    double areaRettangolo = calcolaAreaRettangolo(rettangolo);
    double areaQuadrato = calcolaAreaQuadrato(quadrato);
    double areaCerchio = calcolaAreaCerchio(cerchio);

    cout << "Area del rettangolo: " << areaRettangolo << endl;
    cout << "Area del quadrato: " << areaQuadrato << endl;
    cout << "Area del cerchio: " << areaCerchio << endl;

    if (areaRettangolo > areaQuadrato && areaRettangolo > areaCerchio)
    {
        cout << "Il rettangolo ha l'area maggiore." << endl;
    }
    else if (areaQuadrato > areaRettangolo && areaQuadrato > areaCerchio)
    {
        cout << "Il quadrato ha l'area maggiore." << endl;
    }
    else if (areaCerchio > areaRettangolo && areaCerchio > areaQuadrato)
    {
        cout << "Il cerchio ha l'area maggiore." << endl;
    }
    else
    {
        cout << "Le aree sono tutte uguali." << endl;
    }

    return 0;
}