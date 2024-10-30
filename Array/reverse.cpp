/* 3. Program to reverse the elements of an array */
#include <iostream>

using namespace std;

int main()
{
    int i = 0, j = 9, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    cout << "After reversing, the array is: ";

    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    cin.ignore();
    cin.get();

    return 0;
}