#include <iostream>
using namespace std;
class Stack
{
private:
    int *arr, top, capacity;

public:
    Stack()
    {
        capacity = 1;
        arr = new int[capacity];
        top = -1;
    }
    bool isFull()
    {
        if (top == capacity - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int value)
    {
        if (isFull())
        {
            int newCapacity = capacity * 2;
            int *newStack = new int[newCapacity];
            for (int i = 0; i < capacity; i++)
            {
                newStack[i] = arr[i];
            }
            delete[] arr;
            arr = newStack;
            capacity = newCapacity;
        }

        arr[++top] = value;
        cout << "Element " << value << " pushed into the stack" << endl;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            int poppedValue = arr[top--];
            cout << poppedValue << " poped from the stack " << endl;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty " << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
    ~Stack()
    {
        delete[] arr;
    }
};
int main()
{
    Stack myStack;
    int option, value;
    while (true)
    {
        cout << endl;
        cout << "---------------------" << endl;
        cout << "What do you want to do?" << endl;
        cout << "1.Push element into the stack" << endl;
        cout << "2.Pop element from the stack" << endl;
        cout << "3.Display the stack" << endl;
        cout << "4.Exit...." << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter the value you want to push" << endl;
            cin >> value;
            myStack.push(value);
            break;

        case 2:
            myStack.pop();
            break;

        case 3:
            myStack.display();
            break;

        case 4:
            cout << "Exiting" << endl;
            return 0;

        default:
            cout << "Invalid Option" << endl;
        }
    }

    return 0;
}