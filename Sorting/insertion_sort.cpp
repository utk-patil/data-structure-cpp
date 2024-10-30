/* 3. Program of sorting using insertion sort */
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

    // insertion sort
    for (int i = 1; i < number_of_element; i++)
    {
        int j = 0;
        int temp = arr[i];

        for (j = i - 1; j >= 0 && temp < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = temp;
    }

    cout << "Sorted list is : ";

    for (int i = 0; i < number_of_element; i++)
        cout << arr[i] << " ";

    cout << endl;

    cin.ignore();
    cin.get();

    return 0;
}