/* 2. Program of stack using linked list. */
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

class Stack
{
private:
    Node *top;

public:
    Stack()
    {
        top = nullptr;
    }

    bool isEmpty() const
    {
        return (top == nullptr);
    }

    void push(int value)
    {
        Node *new_node = new Node(value);

        if (new_node == nullptr)
        {
            cout << "Stack overflow!!!" << endl;
            return;
        }

        new_node->next = top;
        top = new_node;
        cout << "Pushed " << value << " to stack." << endl;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow!!!" << endl;
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
        cout << "Popped " << temp->data << " from the stack." << endl;
    }

    int peek() const
    {
        if (isEmpty())
        {
            cout << "Stack underflow!!!" << endl;
            return -1;
        }

        return top->data;
    }

    void display() const
    {
        if (isEmpty())
        {
            cout << "Stack underflow!!!" << endl;
            return;
        }

        Node *temp = top;

        cout << "Stack Elements: ";

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    ~Stack()
    {
        while (isEmpty())
        {
            pop();
        }
    }
};

int main()
{
    int data, choice = 0;
    Stack stack;

    while (1)
    {
        data, choice = 0;

        system("cls");

        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display the top elements" << endl;
        cout << "4. Display all the elements" << endl;
        cout << "5. Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to push: ";
            cin >> data;
            stack.push(data);
            break;

        case 2:
            stack.pop();
            break;

        case 3:
            cout << "Top element is: " << stack.peek() << endl;
            break;

        case 4:
            stack.display();
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