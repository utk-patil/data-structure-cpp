/* 17. Program to show that chages to the array made inside the function affect the original array*/
#include <iostream>

using namespace std;

void func(int a[]);

int main()
{
    int arr[5] = {3, 6, 2, 7, 1};

    func(arr);

    cout << "Inside main(): " << endl;

    for (int i = 0; i < 5; i++)
        cout << " " << arr[i];

    cout << endl;

    cin.ignore();
    cin.get();

    return 0;
}

void func(int a[])
{
    cout << "Inside function: " << endl;

    for (int i = 0; i < 5; i++)
    {
        a[i] = a[i] + 2;
        cout << " " << a[i];
    }

    cout << endl;
}