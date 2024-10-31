/* 8. Program for multiplication of two matrices. */
#include <iostream>
#include <cstdlib>
#define FIRST_ROW 3
#define FIRST_COL 4
#define SECOND_ROW FIRST_COL
#define SECOND_COL 2

using namespace std;

int main()
{
    int first_matrix[FIRST_ROW][FIRST_COL], second_matrix[SECOND_ROW][SECOND_COL], multiplication_matrix[FIRST_ROW][SECOND_COL];

    cout << "Enter the elements of the first matrix(" << FIRST_ROW << "x" << FIRST_COL << ") row-wise: ";

    for (int i = 0; i < FIRST_ROW; i++)
        for (int j = 0; j < FIRST_COL; j++)
            cin >> first_matrix[i][j];

    system("cls");

    cout << "Enter the elements of the second matrix(" << SECOND_ROW << "x" << SECOND_COL << ") row-wise: ";

    for (int i = 0; i < SECOND_ROW; i++)
        for (int j = 0; j < SECOND_COL; j++)
            cin >> second_matrix[i][j];

    system("cls");

    // multiplication of two array
    for (int i = 0; i < FIRST_ROW; i++)
    {
        for (int j = 0; j < SECOND_COL; j++)
        {
            multiplication_matrix[i][j] = 0;
            for (int k = 0; k < FIRST_COL; k++)
                multiplication_matrix[i][j] += first_matrix[i][k] * second_matrix[k][j];
        }
    }

    system("cls");
    cout << "The multiplication of two matrices is: " << endl;

    for (int i = 0; i < FIRST_ROW; i++)
    {
        for (int j = 0; j < SECOND_COL; j++)
            cout << multiplication_matrix[i][j] << " ";

        cout << endl;
    }

    cout << endl;

    cin.ignore();
    cin.get();

    return 0;
}