/* 31. Program to understand how a pointer to structure is returned from a function. */
#include <iostream>
#include <cstring>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

void display(struct student *student_ptr);
struct student *create_student();

struct student *student_ptr;

int main()
{
    struct student *stu_ptr;
    stu_ptr = create_student();
    display(stu_ptr);
    free(stu_ptr);

    cin.ignore();
    cin.get();

    return 0;
}

struct student *create_student()
{
    student_ptr = (struct student *)malloc(sizeof(struct student));

    strcpy(student_ptr->name, "Joseph");
    student_ptr->roll_no = 15;
    student_ptr->marks = 98;

    return student_ptr;
}

void display(struct student *student_ptr)
{
    cout << "Name: " << student_ptr->name << endl;
    cout << "Roll number: " << student_ptr->roll_no << endl;
    cout << "Marks: " << student_ptr->marks << endl;
}