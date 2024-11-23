/* Q1. An array contains the following 18 elements
    12 19 23 27 30 34 45 56 59 61 76 79 83 85 88 90 94 97
    Perform binary search to find the elements 27, 32, 61, 97 in the array.
    Show the values of up, mid and low in each step.
*/

#include <iostream>

using namespace std;

int binary_search(int arr[], int size, int search);

int main()
{
    int arr[18] = {12, 19, 23, 27, 30, 34, 45, 56, 59, 61, 76, 79, 83, 85, 88, 90, 94, 97};
    int search;

    cout << "Enter the element to be searched: ";
    cin >> search;

    int index = binary_search(arr, 18, search);

    if (index == -1)
        cout << search << " not found in array." << endl;
    else
        cout << search << " found at position " << index << "." << endl;

    cin.ignore();
    cin.get();

    return 0;
}

int binary_search(int arr[], int size, int search)
{
    int low = 0, up = size - 1, mid;

    while (low <= up)
    {
        mid = (up + low) / 2;

        cout << "Value of low = " << low << ", up = " << up << " and mid = " << mid << endl;

        if (search > arr[mid])
            low = mid + 1;
        else if (search < arr[mid])
            up = mid - 1;
        else
            return mid;
    }

    return -1;
}