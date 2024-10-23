/* 1. Program of sorting using selection sort */
#include <iostream>
#include <cstdlib>
#define MAX 100

using namespace std;

int main()
{
    int number_of_element = 0, arr[MAX], temp;

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

    // selection sort
    for (int i = 0; i < number_of_element - 1; i++)
    {
        int small_element_index = i;

        for (int j = i + 1; j < number_of_element; j++)
        {
            if (arr[small_element_index] > arr[j])
                small_element_index = j;
        }

        // Only swap when small element index found
        if (small_element_index != i)
        {
            temp = arr[i];
            arr[i] = arr[small_element_index];
            arr[small_element_index] = temp;

            // We can also use below method to swap
            // swap(arr[i], arr[small_element_index]);
        }
    }

    cout << "Sorted list is : ";

    for (int i = 0; i < number_of_element; i++)
        cout << arr[i] << " ";

    cout << endl;

    cin.ignore();
    cin.get();

    return 0;
}