#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int findLargestPrimeDivisor(int num)
{
    int largestPrimeDivisor = 1;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0 && isPrime(i))
        {
            largestPrimeDivisor = i;
        }
    }
    return largestPrimeDivisor;
}

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];
    int primeDivisors[SIZE];
    cout << "Immeti " << SIZE << " numeri naturali: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        primeDivisors[i] = findLargestPrimeDivisor(numbers[i]);
    }
    int largestPrimeDivisor = primeDivisors[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (primeDivisors[i] > largestPrimeDivisor)
        {
            largestPrimeDivisor = primeDivisors[i];
        }
    }
    cout << "Il più grande divisore primo tra i numeri è: " << largestPrimeDivisor << endl;

    return 0;
}
