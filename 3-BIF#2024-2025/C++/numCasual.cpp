/*Ex10B

Indovina un numero
1. Genera un numero casuale X tra 1 e 1000
2. Quindi chiedi di indovinare x dando come risposta
se:
    2.1 Troppo alto
    2.2 Troppo basso
3. Indovinato e dicendo in quanti tentativi  sono serviti*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = rand() % 1000 + 1;
    return 0;
}