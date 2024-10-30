/* 4. Program of sorting using shell short */
#include <iostream>
#include <cstdlib>
#define MAX 100

using namespace std;

int main()
{
    int number_of_element = 0, arr[MAX], maximum_increment = 0;

    cout << "Enter the number of elements: ";
    cin >> number_of_element;

    for (int i = 0; i < number_of_element; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    system("cls");

    cout << "List before sort: ";

    for (int i = 0; i < number_of_element; i++)
        cout << arr[i] << " ";

    cout << endl;

    cout << "Enter maximum increment (odd value): ";
    cin >> maximum_increment;

    // shell short
    while (maximum_increment >= 1)
    {
        for (int i = maximum_increment; i < number_of_element; i++)
        {
            int temp = arr[i];
            int j = 0;

            for (j = i - maximum_increment; j >= 0 && temp < arr[j]; j = j - maximum_increment)
                arr[j + maximum_increment] = arr[j];

            arr[j + maximum_increment] = temp;
        }

        maximum_increment = maximum_increment - 2;
    }

    cout << "Sorted list is : ";

    for (int i = 0; i < number_of_element; i++)
        cout << arr[i] << " ";

    cout << endl;

    cin.ignore();
    cin.get();

    return 0;
}