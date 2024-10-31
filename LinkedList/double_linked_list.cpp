/* Program of double linked list */
#include <iostream>
#include <cstdlib>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {

        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoubleLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    DoubleLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void CreateList()
    {
        DoubleLinkedList();

        int number_of_node, data = 0;

        cout << "Enter the number of nodes : ";
        cin >> number_of_node;

        if (number_of_node == 0)
            return;

        cout << "Please enter the 1 element to be inserted: ";
        cin >> data;

        AddAtBeginning(data);

        for (int i = 2; i <= number_of_node; i++)
        {
            cout << "Please enter the " << i << " element to be inserted: ";
            cin >> data;

            AddAtEnd(data);
        }
    }

    void Display()
    {
        if (head == nullptr)
        {
            cout << "List is empty!!!" << endl;
            return;
        }

        Node *temp = head;

        cout << "List: ";

        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    int Count()
    {
        int count = 0;

        return count;
    }

    bool Search(int search)
    {
        return false;
    }

    void AddAtBeginning(int value)
    {
        Node *new_node = new Node(value);

        if (head == nullptr)
        {
            head = tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }

    void AddAtEnd(int value)
    {
        Node *new_node = new Node(value);

        if (head == nullptr)
        {
            head = tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void AddAfterNode(int value, int item)
    {
    }

    void AddBeforeNode(int value, int item)
    {
    }

    void AddAtPosition(int value, int pos)
    {
    }

    void Delete(int value)
    {
    }

    void Reverse()
    {
    }
};

int main()
{
    int choice, data, item, pos, search = 0;
    DoubleLinkedList linked_list;

    while (1)
    {
        choice, data, item, pos, search = 0;
        system("cls");

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
        case 1:
            linked_list.CreateList();
            break;

        case 2:
            linked_list.Display();
            break;

        case 3:
            cout << "Total number of nodes: " << linked_list.Count() << endl;
            break;

        case 4:
            cout << "Enter element to search: ";
            cin >> search;
            cout << (linked_list.Search(search) ? "Element found" : "Element not found") << endl;
            break;

        case 5:
            cout << "Enter the element to add at beginning: ";
            cin >> data;
            linked_list.AddAtBeginning(data);
            break;

        case 6:
            cout << "Enter the element to add at end: ";
            cin >> data;
            linked_list.AddAtEnd(data);
            break;

        case 7:
            cout << "Enter the element to add: ";
            cin >> data;
            cout << "Enter the node after which to add: ";
            cin >> item;
            linked_list.AddAfterNode(data, item);
            break;

        case 8:
            cout << "Enter the element to add: ";
            cin >> data;
            cout << "Enter the node after which to before: ";
            cin >> item;
            linked_list.AddBeforeNode(data, item);
            break;

        case 9:
            cout << "Enter the element to add: ";
            cin >> data;
            cout << "Enter the position to add: ";
            cin >> pos;
            linked_list.AddAtPosition(data, pos);
            break;

        case 10:
            cout << "Enter the element to delete: ";
            cin >> data;
            linked_list.Delete(data);
            break;

        case 11:
            linked_list.Reverse();
            break;

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