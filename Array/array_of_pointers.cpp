/* 19. Array of pointers. */
#include <iostream>

using namespace std;

int main()
{
    int *pa[3];
    int a = 5, b = 10, c = 15;

    pa[0] = &a;
    pa[1] = &b;
    pa[2] = &c;

    for (int i = 0; i < 3; i++)
    {
        cout << "pa [" << i << "] = " << pa[i] << endl;
        cout << "*pa[" << i << "] = " << *pa[i] << endl;
    }

    cin.ignore();
    cin.get();

    return 0;
}