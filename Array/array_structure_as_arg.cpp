/* 32. Program to understand how an array of structures is sent to a function. */
#include <iostream>
#include <cstring>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

void display(struct student stu);
void decrease_marks(struct student student_arr[]);

struct student *student_ptr;

int main()
{
    struct student student_arr[3] =
        {
            {"Mary", 12, 98},
            {"John", 11, 97},
            {"Tom", 12, 89}};

    decrease_marks(student_arr);

    for (int i = 0; i < 3; i++)
        display(student_arr[i]);

    cin.ignore();
    cin.get();

    return 0;
}

void decrease_marks(struct student student_arr[])
{
    for (int i = 0; i < 3; i++)
        student_arr[i].marks = student_arr[i].marks - 10;
}

void display(struct student stu)
{
    cout << "Name: " << stu.name << endl;
    cout << "Roll number: " << stu.roll_no << endl;
    cout << "Marks: " << stu.marks << endl;
}