/* 5. Program to pass an array to a function */
#include <iostream>

using namespace std;

class Operation
{
public:
    void SumOfSquare(int arr[])
    {
        int sum;

        for (int i = 0; i < 6; i++)
        {
            arr[i] = arr[i] * arr[i];
            sum += arr[i];
        }

        cout << "The sum of square: " << sum << endl;
    }
};

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    Operation operation;

    operation.SumOfSquare(arr);

    cout << "Content of array are now: ";

    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    cout << endl;

    cin.ignore();
    cin.get();

    return 0;
}