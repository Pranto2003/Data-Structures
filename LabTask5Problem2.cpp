#include <iostream>
using namespace std;
#define MAX_SIZE 5
class Queue{
    private :
        int arr[MAX_SIZE], front,rear;
        public:
        Queue(){
            front = -1;
            rear = -1;
        }
        bool isFull(){
            if(rear==MAX_SIZE-1){
                return true;
            }
            else{
                return false;
            }
        }
        bool isEmpty(){
            if(front==-1){
                return true;
            }
            else{
                return false;
            }
        }
        void enQueue(int value){
            if(isFull()){
                cout << "Queue Overflow" << endl;
            }
            else{
               if(front==-1){
                   front = 0;
               }
               rear++;
               arr[rear] = value;
               cout << "Element " << value << " enqueued into the queue" << endl;
            }
        }
        void deQueue(){
            if(isEmpty()){
                cout << "Queue Underflow" << endl;
            }
            else{
                int dequeuedValue = arr[front];
                front++;
                cout << "Dequeued Value :" << dequeuedValue << endl;
            }
        }
        void display(){
            if(isEmpty()){
                cout << "Queue is empty " << endl;
            }
            else{
                for (int i =front; i<=rear; i++){
                    cout << arr[i] << " ";
                }
            }
        }
};
int main()
{
        Queue myQueue;
        int option, value;
        while(true){
            cout << endl;
            cout << "---------------------" << endl;
            cout << "What do you want to do?" << endl;
            cout << "1.Push element into the Queue" << endl;
            cout << "2.Pop element from the Queue" << endl;
            cout << "3.Display the Queue" << endl;
            cout << "4.Exit...." << endl;
            cin >> option;


            switch(option){
                case 1:
                cout << "Enter the value you want to push" << endl;
                cin >> value;
                myQueue.enQueue(value);
                break;

                case 2:
                myQueue.deQueue();
                break;

                case 3:
                myQueue.display();
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