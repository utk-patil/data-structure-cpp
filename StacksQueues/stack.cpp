/* 1. Program of stack using array. */
#include <iostream>
#include <cstdlib>
#define MAX 10

using namespace std;

class Stack
{
private:
    int top;
    int max_size;
    int *stack_arr;

public:
    Stack(int size = MAX)
    {
        max_size = size;
        stack_arr = new int[max_size];
        top = -1;
    }

    ~Stack()
    {
        delete[] stack_arr;
    }

    bool isFull() const
    {
        return (top == max_size - 1);
    }

    bool isEmpty() const
    {
        return (top == -1);
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack overflow!!!" << endl;
            return;
        }
        else
        {
            stack_arr[++top] = value;
            cout << "Pushed " << value << " to stack." << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow!!!" << endl;
            return;
        }
        else
        {
            cout << "Popped " << stack_arr[top--] << " from stack." << endl;
        }
    }

    int peek() const
    {
        if (isEmpty())
        {
            cout << "Stack underflow!!!" << endl;
            return -1;
        }
        else
        {
            return stack_arr[top];
        }
    }

    void display() const
    {
        if (isEmpty())
        {
            cout << "Stack is empty!!!" << endl;
            return;
        }

        cout << "Stack elements: ";

        for (int i = top; i >= 0; i--)
            cout << stack_arr[i] << " ";

        cout << endl;
    }
};

int main()
{
    int data, choice = 0;

    Stack stack(MAX);

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