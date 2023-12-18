#include <iostream>
#include <cstring>
using namespace std;

const int MAX_SIZE = 10;

void initializeArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a character for index " << i << ": ";
        cin >> arr[i];

        // Check if the value is ammissible
        while (!isalpha(arr[i]))
        {
            cout << "Invalid character. Enter a valid character for index " << i << ": ";
            cin >> arr[i];
        }
    }
}

void displayOccupiedCells(char arr[], int size)
{
    cout << "Occupied cells: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != '\0')
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void displayAllCells(char arr[], int size)
{
    cout << "All cells: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillArray(char arr[], int size)
{
    if (strlen(arr) < size)
    {
        for (int i = strlen(arr); i < size; i++)
        {
            arr[i] = '+';
        }
    }
    else
    {
        arr[size - 1] = '+';

        // Check for repeated elements
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size - 1; j++)
            {
                if (arr[i] == arr[j])
                {
                    arr[j] = '+';
                }
            }
        }
    }
}

int main()
{
    char arr[MAX_SIZE];
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    initializeArray(arr, size);
    displayOccupiedCells(arr, size);
    displayAllCells(arr, size);
    fillArray(arr, size);
    displayAllCells(arr, size);

    return 0;
}
