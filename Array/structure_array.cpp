/* 24. Program to understand array of structures. */
#include <iostream>
#include <cstdlib>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

int main()
{
    struct student student_arr[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter name, roll no and marks: ";
        cin >> student_arr[i].name >> student_arr[i].roll_no >> student_arr[i].marks;
        cout << endl;
    }

    system("cls");

    for (int i = 0; i < 10; i++)
        cout << student_arr[i].name << " " << student_arr[i].roll_no << " " << student_arr[i].marks << endl;

    cin.ignore();
    cin.get();

    return 0;
}