/* 3. Program of queue using array. */
#include <iostream>
#include <cstdlib>
#define MAX 10

using namespace std;

class Queue
{
private:
    int front, rear, capacity;
    int *queue_arr;

public:
    Queue(int max_size)
    {
        front = -1;
        rear = -1;
        capacity = max_size;
        queue_arr = new int[max_size];
    }

    ~Queue()
    {
        delete[] queue_arr;
    }

    bool isFull() const
    {
        return (rear == capacity - 1);
    }

    bool isEmpty() const
    {
        return (front == -1 || front > rear); // use can use front == rear + 1
    }

    void insert(int value)
    {
        if (isFull())
        {
            cout << "Queue overflow!!!" << endl;
            return;
        }

        if (front == -1)
            front = 0;

        queue_arr[++rear] = value;
        cout << "Inserted " << value << " to queue." << endl;
    }

    void del()
    {
        if (isEmpty())
        {
            cout << "Queue underflow!!!" << endl;
            return;
        }

        cout << "Deleted " << queue_arr[front++] << " from stack." << endl;

        if (front == rear + 1)
        {
            front = -1;
            rear = -1;
        }
    }

    int peek() const
    {
        if (isEmpty())
        {
            cout << "Queue underflow!!!" << endl;
            return -1;
        }

        return queue_arr[front];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue empty!!!" << endl;
            return;
        }

        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
            cout << queue_arr[i] << " ";

        cout << endl;
    }
};

int main()
{
    int data, choice = 0;

    Queue queue(MAX);

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