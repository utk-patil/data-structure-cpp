/* 6. Linear probing */
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

    Employee(int emp_id, string name, int age)
    {
        emp_id = emp_id;
        name = name;
        age = age;
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
    void insert(const Employee emp)
    {
        int key = emp.emp_id;
        int index = hashFunction(key);

        for (int i = 0; i < TABLE_SIZE; i++)
        {
            int probIndex = hashFunction(index + i);

            if (table[probIndex].status == EMPTY || table[probIndex].status == DELETED)
            {
                table[probIndex].info = emp;
                table[probIndex].status = OCCUPIED;
                cout << "Inserted (" << key << ", " << emp.name << ", " << emp.age << ") at index " << probIndex << endl;
                return;
            }
        }

        cout << "Hash table is full. Could not insert employee with ID " << key << endl;
    }

    void search(int key)
    {
        int index = hashFunction(key);

        for (int i = 0; i < TABLE_SIZE; i++)
        {
            int probIndex = hashFunction(index + i);

            if (table[probIndex].status == OCCUPIED && table[probIndex].info.emp_id == key)
            {
                Employee emp = table[probIndex].info;

                cout << "Found employee: ID " << emp.emp_id << ", Name = " << emp.name << ", Age = " << emp.age << " at index " << probIndex << endl;
                return;
            }
        }

        cout << "Employee with ID " << key << " not found." << endl;
    }

    void delete_record(int key)
    {
        int index = hashFunction(key);

        for (int i = 0; i < TABLE_SIZE; i++)
        {
            int probIndex = hashFunction(index + i);

            if (table[probIndex].status == OCCUPIED && table[probIndex].info.emp_id == key)
            {
                table[probIndex].info = Employee();
                table[probIndex].status = DELETED;
                cout << "Deleted employee with ID " << key << " at index " << probIndex << endl;
                return;
            }
        }

        cout << "Employee with ID " << key << " not found." << endl;
    }

    void display() const
    {
        for (int i = 0; i < TABLE_SIZE; i++)
        {
            if (table[i].status == OCCUPIED)
            {
                Employee emp = table[i].info;

                cout << "Index " << i << ": ID = " << emp.emp_id << ", Name = " << emp.name << ", Age = " << emp.age << endl;
            }
            else if (table[i].status == DELETED)
            {
                cout << "Index " << i << ": DELETED" << endl;
            }
            else
            {
                cout << "Index " << i << ": EMPTY" << endl;
            }
        }
    }
};

int main()
{
    HashTable hashTable;
    int choice = 0, id, age, key;
    string name;

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
            cout << "Enter employee id, name and age: ";
            cin >> id >> name >> age;
            {
                Employee new_emp;
                new_emp.emp_id = id;
                new_emp.name = name;
                new_emp.age = age;
                hashTable.insert(new_emp);
            }
            break;

        case 2:
            cout << "Enter a key to be searched: ";
            cin >> key;
            hashTable.search(key);
            break;

        case 3:
            cout << "Enter a key to be deleted: ";
            cin >> key;
            hashTable.delete_record(key);
            break;

        case 4:
            hashTable.display();
            break;

        case 5:
            exit(1);
            break;

        default:
            cout << "Wrong choice!!!" << endl;
            break;
        }

        cout << "Press any key to continue...";
        cin.ignore();
        cin.get();
    }

    return 0;
}