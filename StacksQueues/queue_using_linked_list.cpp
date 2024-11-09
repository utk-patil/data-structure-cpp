/* 1. Program of queue using linked list. */
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
        data = value;
        next = nullptr;
    }
};

class Queue
{
private:
    Node *front;
    Node *rear;

public:
    Queue()
    {
        front = rear = nullptr;
    }

    bool isEmpty() const
    {
        return front == nullptr;
    }

    void insert(int value)
    {
        Node *new_node = new Node(value);

        if (new_node == nullptr)
        {
            cout << "Memory not available!!!" << endl;
            return;
        }

        if (rear == nullptr)
        {
            front = rear = new_node;
            cout << "Inserted " << value << " to queue." << endl;
            return;
        }

        rear->next = new_node;
        rear = new_node;
        cout << "Inserted " << value << " to queue." << endl;
    }

    void del()
    {
        if (isEmpty())
        {
            cout << "Queue underflow!!!" << endl;
            return;
        }

        Node *temp = front;

        front = front->next;
        cout << "Deleted " << temp->data << " from stack." << endl;
        delete temp;
    }

    int peek() const
    {
        if (isEmpty())
        {
            cout << "Queue underflow!!!" << endl;
            return -1;
        }

        return front->data;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue empty!!!" << endl;
            return;
        }

        cout << "Queue elements: ";

        Node *temp = front;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    ~Queue()
    {
        while (isEmpty())
            del();
    }
};

int main()
{
    int data, choice = 0;

    Queue queue;

    while (1)
    {
        data, choice = 0;

        system("cls");

        cout << "1. Insert" << endl;
        cout << "2. Delete" << endl;
        cout << "3. Display element at the front" << endl;
        cout << "4. Display all the elements" << endl;
        cout << "5. Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to insert: ";
            cin >> data;
            queue.insert(data);
            break;

        case 2:
            queue.del();
            break;

        case 3:
            cout << "Top element is: " << queue.peek() << endl;
            break;

        case 4:
            queue.display();
            break;

        case 5:
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