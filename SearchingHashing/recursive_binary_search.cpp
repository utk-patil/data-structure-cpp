/* 5. Recursive binary search in an array. */
#include <iostream>
#define MAX 50

using namespace std;

int RecursiveBinarySearch(int arr[], int low, int up, int search);

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

    index = RecursiveBinarySearch(arr, 0, number_of_element - 1, search);

    if (index == -1)
        cout << search << " not found in array." << endl;
    else
        cout << search << " found at position " << index << "." << endl;

    cin.ignore();
    cin.get();

    return 0;
}

int RecursiveBinarySearch(int arr[], int low, int up, int search)
{
    int mid;

    if (low > up)
        return -1;

    mid = (low + up) / 2;

    if (search > arr[mid])
        return RecursiveBinarySearch(arr, mid + 1, up, search);
    else if (search < arr[mid])
        return RecursiveBinarySearch(arr, low, mid - 1, search);
    else
        return mid;
}