/* 1. Program of sorting using bubble sort */
#include <iostream>
#include <cstdlib>
#define MAX 100

using namespace std;

int main()
{
    int number_of_element = 0, arr[MAX];

    cout << "Enter the number of elements: ";
    cin >> number_of_element;

    for (int i = 0; i < number_of_element; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    system("cls");

    cout << "List before sort : ";

    for (int i = 0; i < number_of_element; i++)
        cout << arr[i] << " ";

    cout << endl;

    // Bubble sort
    for (int i = 0; i < number_of_element - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < number_of_element - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);

            swapped = true;
        }

        // if list is sorted
        if (!swapped)
            break;
    }

    cout << "Sorted list is : ";

    for (int i = 0; i < number_of_element; i++)
        cout << arr[i] << " ";

    cout << endl;

    cin.ignore();
    cin.get();

    return 0;
}