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
        LinkedList();

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
        Node *temp = head;

        while (temp != nullptr && temp->data != item)
        {
            temp = temp->next;
        }

        if (temp != nullptr)
        {
            Node *new_node = new Node(value);

            new_node->next = temp->next;
            temp->next = new_node;
        }
        else
        {
            cout << "Node with value " << item << " not found" << endl;
        }
    }

    void AddBeforeNode(int value, int item)
    {
        Node *temp = head;

        while (temp != nullptr && temp->next != nullptr && temp->next->data != item)
        {
            temp = temp->next;
        }

        if (temp->next != nullptr)
        {
            Node *new_node = new Node(value);
            new_node->next = temp->next;
            temp->next = new_node;
        }
        else
        {
            cout << "Node with value " << item << " not found" << endl;
        }
    }

    void AddAtPosition(int value, int pos)
    {
        Node *temp = head;
        int current_pos = 1;

        if (pos == 1)
        {
            AddAtBeginning(value);
            return;
        }

        while (temp != nullptr && current_pos < pos - 1)
        {
            temp = temp->next;
            current_pos++;
        }

        if (temp != nullptr)
        {
            Node *new_node = new Node(value);
            new_node->next = temp->next;
            temp->next = new_node;
        }
        else
        {
            cout << "Position " << pos << " is out of bound" << endl;
        }
    }

    void Delete(int value)
    {
        Node *temp = head;

        while (temp != nullptr && temp->next != nullptr && temp->next->data != value)
        {
            temp = temp->next;
        }

        if (temp->next != nullptr)
        {
            Node *node_to_delete = temp->next;
            temp->next = node_to_delete->next;
            delete node_to_delete;
        }
        else
        {
            cout << "Node with value " << value << " not found" << endl;
        }
    }

    void Reverse()
    {
        Node *prev = nullptr;
        Node *current = head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }
};

int main()
{
    int choice, data, item, pos, search = 0;
    LinkedList linked_list;

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