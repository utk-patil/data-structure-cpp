/* 4. Binary search in an array. */
#include <iostream>
#define MAX 50

using namespace std;

int BinarySearch(int arr[], int n, int search);

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

    index = BinarySearch(arr, number_of_element, search);

    if (index == -1)
        cout << search << " not found in array." << endl;
    else
        cout << search << " found at position " << index << "." << endl;

    cin.ignore();
    cin.get();

    return 0;
}

int BinarySearch(int arr[], int n, int search)
{
    int low = 0, up = n - 1, mid;

    while (low <= up)
    {
        mid = (low + up) / 2;

        if (search > arr[mid])
            low = mid + 1;
        else if (search < arr[mid])
            up = mid - 1;
        else
            return mid;
    }

    return -1;
}