/* 18. When an array is passed to a fuynction, the receiving argument is declared as a pointer. */
#include <iostream>

using namespace std;

void func(float f[], int *i, char c[5]);

int main()
{
    float f_arr[5] = {1.4, 2.5, 3.7, 4.1, 5.9};
    int i_arr[5] = {1, 2, 3, 4, 5};
    char c_arr[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << "Inside main(): " << endl;

    cout << "Size of f_arr = " << sizeof(f_arr) << endl;
    cout << "Size of i_arr = " << sizeof(i_arr) << endl;
    cout << "Size of c_arr = " << sizeof(c_arr) << endl;

    func(f_arr, i_arr, c_arr);

    cin.ignore();
    cin.get();

    return 0;
}

void func(float f[], int *i, char c[5])
{
    cout << "Inside func(): " << endl;
    cout << "Size of f = " << sizeof(f) << endl;
    cout << "Size of i = " << sizeof(i) << endl;
    cout << "Size of c = " << sizeof(5) << endl;
}