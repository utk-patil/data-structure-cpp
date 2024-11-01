/* 14. Call by reference. */
#include <iostream>

using namespace std;

void ref(int *p, int *q)
{
    (*p)++;
    (*q)++;
    cout << "Inside function x = " << *p << ", y = " << *q << endl;
}

int main()
{
    int a = 5, b = 8;

    cout << "Before calling the function, a = " << a << ", b = " << b << endl;
    ref(&a, &b);
    cout << "After calling the function, a = " << a << ", b = " << b << endl;

    cin.ignore();
    cin.get();

    return 0;
}