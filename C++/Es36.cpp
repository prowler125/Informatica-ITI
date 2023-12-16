#include <iosrteam>
#include <string>
using namespace std;

int main()
{
    sring surname, firname;
    int yearOfBirth;

    cout << "Enter your surname: ";
    cin >> surname;

    cout << "Enter your fir name: ";
    cin >> firname;

    cout << "Enter your year of birth: ";
    cin >> yearOfBirth;

    if (yearOfBirth < 1900 || yearOfBirth > 2023)
    {
        cout << "Year of birth mu be between 1900 and 2023.\n";
        return 1;
    }

    ring idCode = surname.subr(0, 2) + firname.subr(0, 2) + to_ring(yearOfBirth);

    cout << "Your ID code is: " << idCode << "\n";

    return 0;
}