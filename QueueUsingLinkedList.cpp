#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class MyQueue
{
public:
    Node *front, *rear;
    int size;
    MyQueue()
    {
        front = rear = NULL;
        size = 0;
    }

    void enqueue(int data)
    {
        Node *temp = new Node(data);
        if (rear == NULL)
        {
            front = rear = temp;
            size++;
            return;
        }
        rear->next = temp;
        rear = temp;
        size++;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
        size--;
    }

    void display()
    {
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void getSize()
    {
        cout << "Size of the Queue is: " << size << endl;
    }
};

int main()
{
    MyQueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.getSize();
    q.dequeue();
    q.display();
    q.getSize();
    return 0;
}
