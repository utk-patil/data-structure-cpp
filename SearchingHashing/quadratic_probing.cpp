/* 7. Quadratic probing */
#include <iostream>
#include <cstdlib>
#include <string>
#define TABLE_SIZE 10

using namespace std;

enum TypeOfRecord
{
    EMPTY,
    DELETED,
    OCCUPIED
};

class Employee
{
public:
    int emp_id;
    string name;
    int age;

    Employee()
    {
        emp_id = -1;
        name = "";
        age = 0;
    }
};

class Record
{
public:
    Employee info;
    TypeOfRecord status;

    Record()
    {
        status = EMPTY;
    }
};

class HashTable
{
    Record table[TABLE_SIZE];

    int hashFunction(int key)
    {
        return key % TABLE_SIZE;
    }

public:
    void insert(Employee emp)
    {
    }
};

int main()
{
    int choice = 0;

    while (1)
    {
        choice = 0;
        system("cls");

        cout << "1. Insert a record" << endl;
        cout << "2. Search a record" << endl;
        cout << "3. Delete a record" << endl;
        cout << "4. Display table" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            /* code */
            break;

        case 2:
            /* code */
            break;

        case 3:
            /* code */
            break;

        case 4:
            /* code */
            break;

        case 5:
            exit(1);
            break;

        default:
            cout << "Wrong choice!!!" << endl;
            break;
        }

        cout << "Press any key to continue..." << endl;
        cin.ignore();
        cin.get();
    }

    return 0;
}