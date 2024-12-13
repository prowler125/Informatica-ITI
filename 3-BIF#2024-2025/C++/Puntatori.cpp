#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>
#define MaxR 20
#define MaxC 20

using namespace std;

int main()
{
    int A, B = 0;
    int *p1, *p2;
    A = 18;
    cout << "cont" << "\t\t" << "ind" << "\t\t" << "cont ind" << endl;
    cout << "A " << A << "\t\t" << &A << endl;
    p1 = &A;
    cout << "p1 " << p1 << "\t" << &p1 << "\t" << *p1 << endl;
    cout << "B " << B << "\t\t" << &B << endl;
    cout << sizeof(A) << endl;
    double pippo;
    cout << sizeof(pippo) << endl;

    int vet[10];
    cout << sizeof(vet) << endl;
    cout << sizeof(vet) / sizeof(vet[0]) << endl;

    cout << &vet << "\t" << &vet[1] << endl;
    p1 = &A;
}
