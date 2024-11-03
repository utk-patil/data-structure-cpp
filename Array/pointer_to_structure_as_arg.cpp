/* 29. Program to understand how a pointer to structure variable is sent to a function. */
#include <iostream>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

void display(struct student *student_ptr);
void increment_marks(struct student *student_ptr);

int main()
{
    struct student stu1 = {"John", 12, 87};
    struct student stu2 = {"Mary", 18, 90};

    increment_marks(&stu1);
    increment_marks(&stu2);

    display(&stu1);
    display(&stu2);

    cin.ignore();
    cin.get();

    return 0;
}

void increment_marks(struct student *student_ptr)
{
    (student_ptr->marks)++;
}

void display(struct student *student_ptr)
{
    cout << "Name: " << student_ptr->name << endl;
    cout << "Roll number: " << student_ptr->roll_no << endl;
    cout << "Marks: " << student_ptr->marks << endl;
}