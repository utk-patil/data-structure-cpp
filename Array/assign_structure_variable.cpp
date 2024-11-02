/* 23. Program to assign a structure variable to another structure variable. */
#include <iostream>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

int main()
{
    struct student stu1 = {"Oliver", 12, 98}, stu2;
    stu2 = stu1;

    cout << "stu1: " << stu1.name << " " << stu1.roll_no << " " << stu1.marks << endl;
    cout << "stu2: " << stu2.name << " " << stu2.roll_no << " " << stu2.marks << endl;

    cin.ignore();
    cin.get();

    return 0;
}