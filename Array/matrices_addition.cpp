/* 7. Program for addition of two matrices. */
#include <iostream>
#include <cstdlib>
#define ROW 3
#define COL 4

using namespace std;

int main()
{
    int first_matrix[ROW][COL], second_matrix[ROW][COL], add_matrix[ROW][COL];

    cout << "Enter the elements of the first matrix(" << ROW << "x" << COL << ") row-wise: ";

    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            cin >> first_matrix[i][j];

    system("cls");

    cout << "Enter the elements of the second matrix(" << ROW << "x" << COL << ") row-wise: ";

    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            cin >> second_matrix[i][j];

    system("cls");

    // addition of two array
    for (int i = 0; i < ROW; i++)
        for (int j = 0; j < COL; j++)
            add_matrix[i][j] = first_matrix[i][j] + second_matrix[i][j];

    system("cls");
    cout << "The addition of two matrices is: " << endl;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
            cout << add_matrix[i][j] << " ";

        cout << endl;
    }

    cout << endl;

    cin.ignore();
    cin.get();

    return 0;
}