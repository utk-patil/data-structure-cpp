/* 2. Program to find the maximum and minimum number in an array */
#include <iostream>

using namespace std;

int main()
{
    int min_value, max_value, arr[10] = {2, 5, 4, 1, 8, 9, 11, 6, 3, 7};

    min_value = max_value = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (min_value > arr[i])
            min_value = arr[i];

        if (max_value < arr[i])
            max_value = arr[i];
    }

    cout << "Minimum value: " << min_value << "\n";
    cout << "Maximum value: " << max_value;

    return 0;
}