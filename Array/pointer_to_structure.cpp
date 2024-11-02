/* 26. Program to understand pointer to structures. */
#include <iostream>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    int marks;
};

int main()
{
    struct student stu = {"Mary", 25, 68};
    struct student *ptr = &stu;

    cout << "Name: " << ptr->name << endl;
    cout << "Roll number: " << ptr->roll_no << endl;
    cout << "Marks: " << ptr->marks << endl;

    cin.ignore();
    cin.get();

    return 0;
}