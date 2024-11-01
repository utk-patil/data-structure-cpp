/* 11. Program to print the value and address of the elements of an array. */
#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};

    for (int i = 0; i < 5; i++)
    {
        cout << "Value of arr[" << i << "] = " << arr[i] << " ";
        cout << "Address of arr[" << i << "] = " << &arr[i] << endl;
    }

    cin.ignore();
    cin.get();

    return 0;
}