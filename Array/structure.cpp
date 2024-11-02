/* 22. Program to display the values of structure members. */
#include <iostream>
#include <cstring>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

int main()
{
    struct student stu1 = {"Mary", 25, 68};
    struct student stu2, stu3;

    strcpy(stu2.name, "John");
    stu2.roll_no = 26;
    stu2.marks = 98;

    cout << "Enter name, roll no and marks for stu3: ";
    cin >> stu3.name >> stu3.roll_no >> stu3.marks;

    cout << "stu1: " << stu1.name << " " << stu1.roll_no << " " << stu1.marks << endl;
    cout << "stu2: " << stu2.name << " " << stu2.roll_no << " " << stu2.marks << endl;
    cout << "stu3: " << stu3.name << " " << stu3.roll_no << " " << stu3.marks << endl;

    cin.ignore();
    cin.get();

    return 0;
}