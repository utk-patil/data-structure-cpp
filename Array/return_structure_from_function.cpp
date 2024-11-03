/*30. Progra to understand how a structure varibale is returned from a function. */
#include <iostream>

using namespace std;

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

void display(struct student stu);
struct student change(struct student stu);

int main()
{
    struct student stu1 = {"John", 12, 87};
    struct student stu2 = {"Mary", 18, 90};

    stu1 = change(stu1);
    stu2 = change(stu2);

    display(stu1);
    display(stu2);

    cin.ignore();
    cin.get();

    return 0;
}

struct student change(struct student stu)
{
    stu.marks = stu.marks + 5;
    stu.roll_no = stu.roll_no - 10;
    return stu;
}

void display(struct student stu)
{
    cout << "Name: " << stu.name << endl;
    cout << "Roll number: " << stu.roll_no << endl;
    cout << "Marks: " << stu.marks << endl;
}