#include <iostream>
using namespace std;
#define size 5
class Queue
{
private:
    int *arr;
    int front;
    int rear;

public:
    Queue()
    {
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int x)
    {
        if (rear == size - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        else
        {
            rear++;
            arr[rear] = x;
            if (front == -1)
            {
                front++;
            }
        }
    }
    void pop()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            front++;
        }
    }
    int top()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is Empty" << endl;
        }
        else
        {
            return arr[front];
        }
    }
    bool empty()
    {
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    cout << q.top() << endl;
    q.pop();
    if(q.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }
    return 0;
}