/* 9. Program to dereference pointer variables.*/
#include <iostream>

using namespace std;

int main()
{
    int a = 87;
    float b = 4.5;

    int *p1 = &a;
    float *p2 = &b;

    cout << "Value of p1 = Address of a = " << p1 << endl;
    cout << "Value of p2 = Address of b = " << p2 << endl;

    cout << "Address of p1 = " << &p1 << endl;
    cout << "Address of p2 = " << &p2 << endl;

    cout << "Value of a = " << a << " " << *p1 << " " << *(&a) << endl;
    cout << "Value of b = " << b << " " << *p2 << " " << *(&b) << endl;

    cin.ignore();
    cin.get();

    return 0;
}