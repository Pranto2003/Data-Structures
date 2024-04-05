#include <iostream>
using namespace std;
#define size 5
class CircularQueue
{
private:
    int *arr;
    int front, rear;

public:
    CircularQueue()
    {
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enQueue(int x)
    {
        if ((rear + 1) % size == front)
        {
            return;
        }
        if (front == -1)
        {
            front = 0;
            rear = (rear + 1) % size;
            arr[rear] = x;
        }
    }
    int deQueue()
    {
        if (front == -1)
        {
            cout << "Queue Underflow" << endl;
        }
        int result = arr[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }
        return result;
    }
};
int main()
{
    return 0;
}