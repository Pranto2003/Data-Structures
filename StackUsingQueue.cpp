#include <iostream>
using namespace std;
class Node{
    public:
        Node *next;
        int data;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
class Myqueue{
    public:
        int size;
        Node *front,*rear;
        Myqueue(){
            front = rear = NULL;
            this->size = size;
        }
        void enQueue(int data){
            Node *temp = new Node(data);
            if(rear==NULL){
                front = rear = temp;
                size++;
                return;
            }
            rear->next = temp;
            temp = rear;
            size++;
        }
        void deQueue(){
            if(front==NULL){
                cout << "The queue is empty" << endl;
                return;
            }
            Node *temp = front;
            front = front->next;
            if(front->next==NULL){
                rear = NULL;
            }
            delete temp;
            size--;
        }
        void top(){
            cout << "Top value of the queue is :" << rear->data << endl;
        }
        void sizeofQueue(){
            cout << "The size of the queue is :" << size << endl;
        }
        void display(){
            Node *temp = front;
            while(temp!=NULL){
                cout << temp->data << endl;
                temp = temp->next;
            }
            cout << endl;
        }
};
int main(){
        int value;
        Myqueue queue;
        cout << "Enter the value you want to Enqueue " << endl;
        cin >> value;
        queue.enQueue(value);
        cout << "Enter the value you want to Enqueue " << endl;
        cin >> value;
        queue.enQueue(value);
        queue.display();
        queue.top();
        queue.deQueue();
        queue.display();

        return 0;
}