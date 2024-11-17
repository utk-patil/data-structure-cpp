/* 10. Bucket hashing */
#include <iostream>
#include <cstdlib>
#include <string>
#define BUCKET_SIZE 10
#define BUCKET_SLOT_SIZE 3

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
private:
    Record **table;

    int hashFunction(int key)
    {
        return key % BUCKET_SIZE;
    }

public:
    HashTable()
    {
        table = new Record *[BUCKET_SIZE];

        for (int i = 0; i < BUCKET_SIZE; i++)
        {
            table[i] = new Record[BUCKET_SLOT_SIZE];
        }
    }

    ~HashTable()
    {
        for (int i = 0; i < BUCKET_SIZE; i++)
        {
            delete[] table[i];
        }

        delete[] table;
    }

    void insert(const Employee emp)
    {
        int index = hashFunction(emp.emp_id);

        for (int i = 0; i < BUCKET_SLOT_SIZE; i++)
        {
            if (table[index][i].status == EMPTY || table[index][i].status == DELETED)
            {
                table[index][i].info = emp;
                table[index][i].status = OCCUPIED;
                cout << "Employee with ID " << emp.emp_id << " inserted at bucket " << index << ", slot " << i << "." << endl;
                return;
            }
        }

        cout << "No space available in bucket " << index << " to insert ID " << emp.emp_id << "." << endl;
    }

    void search(int emp_id)
    {
        int index = hashFunction(emp_id);

        for (int i = 0; i < BUCKET_SLOT_SIZE; i++)
        {
            if (table[index][i].status == OCCUPIED && table[index][i].info.emp_id == emp_id)
            {
                Employee emp = table[index][i].info;
                cout << "Found employee: ID " << emp.emp_id << ", Name = " << emp.name << ", Age = " << emp.age << " at bucket " << index << ", slot " << i << "." << endl;
                return;
            }
        }

        cout << "Employee with ID " << emp_id << " not found." << endl;
    }

    void delete_record(int emp_id)
    {
        int index = hashFunction(emp_id);

        for (int i = 0; i < BUCKET_SLOT_SIZE; i++)
        {
            if (table[index][i].status == OCCUPIED && table[index][i].info.emp_id == emp_id)
            {
                table[index][i].info = Employee();
                table[index][i].status = DELETED;
                return;
            }
        }

        cout << "Employee with ID " << emp_id << " not found." << endl;
    }

    void display() const
    {
        for (int i = 0; i < BUCKET_SIZE; i++)
        {
            cout << "Bucket " << i << ": ";

            for (int j = 0; j < BUCKET_SLOT_SIZE; j++)
            {
                cout << "Slot " << j << ": ";

                if (table[i][j].status == OCCUPIED)
                {
                    Employee emp = table[i][j].info;

                    cout << "ID = " << emp.emp_id << ", Name = " << emp.name << ", Age = " << emp.age << endl;
                }
                else if (table[i][j].status == DELETED)
                {
                    cout << "DELETED" << endl;
                }
                else
                {
                    cout << "EMPTY" << endl;
                }
            }

            cout << endl;
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