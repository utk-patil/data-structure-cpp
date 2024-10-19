/* 1. Program of single linked list */
#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        next = nullptr;
        data = value;
    }
};

int main()
{
    int choice, data, item, pos;

    while (1)
    {
        cout << "1. Create empty list" << endl;
        cout << "2. Display" << endl;
        cout << "3. Count" << endl;
        cout << "4. Search" << endl;
        cout << "5. Add at beginning" << endl;
        cout << "6. Add to end" << endl;
        cout << "7. Add after node" << endl;
        cout << "8. Add before node" << endl;
        cout << "9. Add at position" << endl;
        cout << "10. Delete" << endl;
        cout << "11. Reverse" << endl;
        cout << "12. Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 12:
            exit(1);
            break;

        default:
            cout << "Wrong choice!!!" << endl
                 << endl;
            break;
        }

        cout << "Press any key to continue...";
        cin.ignore();
        cin.get();
    }

    return 0;
}