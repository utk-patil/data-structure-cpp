/* 1. Program of single linked list */
#include <iostream>
#include <cstdlib>

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

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    void CreateList()

    {
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

    void Display() const
    {
        if (head == nullptr)
        {
            cout << "List is empty!!!" << endl;
            return;
        }

        cout << "List: ";

        Node *temp = head;

        while (temp != nullptr)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }

    int Count() const
    {
        int count = 0;

        Node *temp = head;

        while (temp != nullptr)
        {
            temp = temp->next;
            count++;
        }

        return count;
    }

    bool Search(int search) const
    {
        Node *temp = head;

        while (temp != nullptr)
        {
            if (temp->data == search)
                return true;

            temp = temp->next;
        }

        return false;
    }

    void AddAtBeginning(int value)
    {
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    void AddAtEnd(int value)
    {
        if (head == nullptr)
        {
            AddAtBeginning(value);
            return;
        }

        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        if (temp != nullptr)
        {
            Node *new_node = new Node(value);
            temp->next = new_node;
        }
    }

    void AddAfterNode(int value, int item)
    {
        if(head){}
    }
};

int main()
{
    int choice, data, item, pos, search;
    LinkedList linked_list;

    while (1)
    {
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