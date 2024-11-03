/* 28. Program to understand how a strcture variable is sent to an function */
#include <iostream>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

void display(struct student stu);

int main()
{
    struct student stu1 = {"John", 12, 87};
    struct student stu2 = {"Mary", 18, 90};

    display(stu1);
    display(stu2);

    cin.ignore();
    cin.get();

    return 0;
}

void display(struct student stu)
{
    cout << "Name: " << stu.name << endl;
    cout << "Roll number: " << stu.roll_no << endl;
    cout << "Marks: " << stu.marks << endl;
}