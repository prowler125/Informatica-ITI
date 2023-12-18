#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cout << "Inserisci i coefficienti (a, b, c) dell'equazione quadratica:";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "L’equazione ha due radici reali e distinte:" << root1 << " e " << root2 << std::endl;
    }
    else if (discriminant == 0)
    {
        double root = -b / (2 * a);
        std::cout << "L'equazione ha una radice reale e ripetuta:" << root << std::endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(-discriminant) / (2 * a);
        std::cout << "L'equazione ha due radici complesse:" << realPart << " + " << imaginaryPart << "i e "
                  << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}
