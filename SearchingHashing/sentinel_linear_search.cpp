/* 2. Sentinel sequencial search in an array. */
#include <iostream>
#define MAX 50

using namespace std;

int LinearSearch(int arr[], int n, int search);

int main()
{
    int number_of_element, arr[MAX], search, index;

    cout << "Enter the number of elements: ";
    cin >> number_of_element;

    cout << "Enter the elements: ";

    for (int i = 0; i < number_of_element; i++)
        cin >> arr[i];

    cout << "Enter the elements to be searched: ";
    cin >> search;

    index = LinearSearch(arr, number_of_element, search);

    if (index == -1)
        cout << search << " not found in array." << endl;
    else
        cout << search << " found at position " << index << "." << endl;

    cin.ignore();
    cin.get();

    return 0;
}

// Sentinel meaning loop until we find the target
int LinearSearch(int arr[], int n, int search)
{
    int i = 0;
    while (search != arr[i])
        i++;

    if (i < n)
        return i;
    else
        return -1;
}