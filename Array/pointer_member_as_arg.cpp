/* 27. Program to understand how structure memebers are sent to a function. */
#include <iostream>
#include <cstring>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    int marks;
};

void display(char name[], int roll_no, int marks);

int main()
{
    struct student stu1 = {"John", 12, 87};
    struct student stu2;

    strcpy(stu2.name, "Mary");
    stu2.roll_no = 18;
    stu2.marks = 90;

    display(stu1.name, stu1.roll_no, stu1.marks);
    display(stu2.name, stu2.roll_no, stu2.marks);

    cin.ignore();
    cin.get();

    return 0;
}

void display(char name[], int roll_no, int marks)
{
    cout << "Name: " << name << endl;
    cout << "Roll number: " << roll_no << endl;
    cout << "Marks: " << marks << endl;
}