/* 13. Call by value. */
#include <iostream>

using namespace std;

void value(int x, int y);

int main()
{
    int a = 5, b = 8;

    cout << "Before calling the function, a = " << a << ", b = " << b << endl;
    value(a, b);
    cout << "After calling the function, a = " << a << ", b = " << b << endl;

    cin.ignore();
    cin.get();

    return 0;
}

void value(int x, int y)
{
    x++;
    y++;
    cout << "Inside function x = " << x << ", y = " << y << endl;
}