/* 9. Separate chaining*/
#include <iostream>
#include <cstdlib>
#include <string>
#define TABLE_SIZE 10

using namespace std;

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
    Record *next;

    Record(Employee emp)
    {
        info = emp;
        next = nullptr;
    }
};

class HashTable
{
private:
    int MAX;
    Record **table;

    int hashFunction(int key)
    {
        return key % MAX;
    }

public:
    HashTable(int size)
    {
        MAX = size;
        table = new Record*[MAX];

        for (int i = 0; i < MAX; i++)
        {
            table[i] = nullptr;
        }
    }

    ~HashTable()
    {
        for (int i = 0; i < MAX; i++)
        {
            Record *temp = table[i];
            while (temp != nullptr)
            {
                Record *record_to_delete = temp;
                temp = temp->next;

                delete record_to_delete;
            }
        }

        delete[] table;
    }

    void insert(const Employee emp)
    {
        int key = emp.emp_id;
        int index = hashFunction(key);

        Record *new_record = new Record(emp);
        new_record->next = table[index];
        table[index] = new_record;

        cout << "Record inserted successfully!" << endl;
    }

    void search(int emp_id)
    {
        int index = hashFunction(emp_id);

        Record *temp = table[index];

        while (temp != nullptr)
        {
            if (temp->info.emp_id == emp_id)
            {
                Employee emp = temp->info;
                cout << "Found employee: ID " << emp.emp_id << ", Name = " << emp.name << ", Age = " << emp.age << endl;
                return;
            }

            temp = temp->next;
        }

        cout << "Employee with ID " << emp_id << " not found." << endl;
    }

    void delete_record(int emp_id)
    {
        int index = hashFunction(emp_id);

        Record *temp = table[index];

        while (temp != nullptr && temp->next != nullptr)
        {
            if (temp->next->info.emp_id == emp_id)
            {
                Record *record_to_delete = temp->next;
                temp->next = temp->next->next;
                delete record_to_delete;
                cout << "Deleted employee with ID " << emp_id << endl;
                return;
            }
        }

        cout << "Employee with ID " << emp_id << " not found." << endl;
    }

    void display() const
    {
        for (int i = 0; i < MAX; i++)
        {
            Record *temp = table[i];

            while (temp != nullptr)
            {
                Employee emp = temp->info;
                cout << "Index " << i << ": ID = " << emp.emp_id << ", Name = " << emp.name << ", Age = " << emp.age << endl;
                temp = temp->next;
            }
        }
    }
};

int main()
{
    HashTable hashTable(TABLE_SIZE);
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