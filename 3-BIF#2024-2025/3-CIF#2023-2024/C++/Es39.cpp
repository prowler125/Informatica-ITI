#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    cout << "Inserisci i coefficienti (a, b, c) dell'equazione quadratica:";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "L’equazione ha due radici reali e distinte:" << root1 << " e " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        cout << "L'equazione ha una radice reale e ripetuta:" << root << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "L'equazione ha due radici complesse:" << realPart << " + " << imaginaryPart << "i e "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
