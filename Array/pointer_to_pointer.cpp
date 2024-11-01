/* 10. Program to understand pointer to pointer. */
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int *pa;
    int **ppa;
    pa = &a;
    ppa = &pa;

    cout << "Address of a = " << &a << endl;

    cout << "Value of pa = Address of a = " << pa << endl;
    cout << "Value of *pa = Value of a = " << *pa << endl;
    cout << "Address of pa = " << &pa << endl;

    cout << "Value of ppa = Address of pa = " << ppa << endl;
    cout << "Value of *ppa = Value of pa = " << *ppa << endl;
    cout << "Value of **ppa = Value of a = " << **ppa << endl;
    cout << "Address of ppa = " << &ppa << endl;

    cin.ignore();
    cin.get();

    return 0;
}