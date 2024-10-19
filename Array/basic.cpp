/* 1. Program to input values into an array and display them */
#include <iostream>

using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value for arr[" << i + 1 << "] : ";
        cin >> arr[i];
    }

    cout << "The array elements are : \n";

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}