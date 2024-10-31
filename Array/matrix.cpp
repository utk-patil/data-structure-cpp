/* 6. Program to input and display matrix. */
#include <iostream>
#include <cstdlib>
#define ROW 3
#define COL 4

using namespace std;

int main()
{
    int arr[ROW][COL];

    cout << "Enter the elements of the matrix(" << ROW << "x" << COL << ") row-wise: ";

    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            cin >> arr[i][j];

    system("cls");
    cout << "The matrix you have entered is: " << endl;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }

    cout << endl;

    cin.ignore();
    cin.get();

    return 0;
}