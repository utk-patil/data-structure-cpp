/* 20. Program to understand dynamic allocation of memory */
#include <iostream>

using namespace std;

int main()
{
    int *p, n;

    cout << "Enter the number of integers to be inserted: ";
    cin >> n;

    p = (int *)malloc(n * sizeof(int));

    if (p == nullptr)
    {
        cout << "Memory not available!!!" << endl;
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter an integer: ";
        cin >> *(p + i);
    }

    for (int i = 0; i < n; i++)
        cout << " " << *(p + i);

    cin.ignore();
    cin.get();

    return 0;
}