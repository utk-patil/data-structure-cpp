/* 15. Program to show how to return more than one value from a function using call by reference. */
#include <iostream>

using namespace std;

void func(int x, int y, int *ps, int *pd, int *pp);

int main()
{
    int a, b, sum, diff, prod;
    a = 6;
    b = 4;

    func(a, b, &sum, &diff, &prod);
    cout << "Sum = " << sum << ", Difference = " << diff << ", Product = " << prod << endl;

    cin.ignore();
    cin.get();

    return 0;
}

void func(int x, int y, int *ps, int *pd, int *pp)
{
    *ps = x + y;
    *pd = x - y;
    *pp = x * y;
}