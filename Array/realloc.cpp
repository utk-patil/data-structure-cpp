/* 21. Program to understand the use of realloc() function. */
#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == nullptr)
    {
        cout << "Memory not available!!!" << endl;
        exit(1);
    }

    cout << "Enter 5 integers: ";

    for (int i = 0; i < 5; i++)
        cin >> *(ptr + i);

    cout << endl;

    /* allocate memory for 4 more integers */
    ptr = (int *)realloc(ptr, 9 * sizeof(int));

    if (ptr == nullptr)
    {
        cout << "Memory not available!!!" << endl;
        exit(1);
    }

    cout << "Enter 4 more integers: ";

    for (int i = 5; i < 9; i++)
        cin >> *(ptr + i);

    cout << endl;

    for (int i = 0; i < 9; i++)
        cout << *(ptr + i) << " ";

    cin.ignore();
    cin.get();

    return 0;
}