#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[10];
    unordered_map<int, int> countMap;
    for (int i = 0; i < 10; i++)
    {
        cout << "Inserisci l'elemento: " << i + 1 << ": ";
        cin >> arr[i];
        countMap[arr[i]]++;
    }
    int maxCount = 0;
    int mostFrequentNum = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (countMap[arr[i]] > maxCount)
        {
            maxCount = countMap[arr[i]];
            mostFrequentNum = arr[i];
        }
    }

    cout << "Il numero più frequente è: " << mostFrequentNum << endl;

    return 0;
}