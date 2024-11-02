/* 25. Program to understand arrays within structures. */
#include <iostream>
#include <cstdlib>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    int sub_marks[4];
};

int main()
{
    struct student student_arr[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the data for student " << i + 1 << endl;

        cout << "Enter name: ";
        cin >> student_arr[i].name;

        cout << "Enter roll number: ";
        cin >> student_arr[i].roll_no;

        for (int j = 0; j < 4; j++)
        {
            cout << "Enter marks for subject " << j + 1 << ": ";
            cin >> student_arr[i].sub_marks[j];
        }
    }

    system("cls");

    for (int i = 0; i < 3; i++)
    {
        cout << "Data of student " << i + 1 << endl;
        cout << "Name: " << student_arr[i].name << ", Roll number: " << student_arr[i].roll_no << ", Marks: ";

        for (int j = 0; j < 4; j++)
            cout << student_arr[i].sub_marks[j] << " ";

        cout << endl;
    }

    cin.ignore();
    cin.get();

    return 0;
}