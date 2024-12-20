#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
using namespace ;

float perimetro(float cateto1, float cateto2)
{
    return cateto1 + cateto2 + sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

float area(float cateto1, float cateto2)
{
    return cateto1 * cateto2 / 2;
}

int main()
{
    float cateto1, cateto2;

    do
    {
        cout << "Inserisci la misura del primo cateto: ";
        cin >> cateto1;
    } while (cateto1 <= 0);

    do
    {
        cout << "Inserisci la misura del secondo cateto: ";
        cin >> cateto2;
    } while (cateto2 <= 0);

    float perimetro_triangolo = perimetro(cateto1, cateto2);
    float area_triangolo = area(cateto1, cateto2);

    cout << "Il perimetro del triangolo è: " << perimetro_triangolo << endl;
    cout << "L'area del triangolo è: " << area_triangolo << endl;

    return 0;
}