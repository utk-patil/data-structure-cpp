/* 4. Program to pass array elements to a function*/
#include <iostream>

using namespace std;

class Operation
{
public:
    void check(int num)
    {
        if (num % 2 == 0)
            cout << num << " is even." << endl;
        else
            cout << num << " is old." << endl;
    }
};

int main()
{
    int arr[10], i;
    Operation operation;

    for (i = 0; i < 10; i++)
    {
        cout << "Enter the array elements: ";
        cin >> arr[i];
        operation.check(arr[i]);
    }

    cin.ignore();
    cin.get();

    return 0;
}