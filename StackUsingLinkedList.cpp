#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int data;
    Node(int data)
    {
        this->next = NULL;
        this->data = data;
    }
};
class Mystack{
public:
    int size;
    Node *head;
    Mystack(){
        this->size = 0;
        this->head = NULL;
    }
    void push(int data){
        Node *temp = new Node(data);
        temp->next = head;
        size++;
        head = temp;
    }
    void pop(){
        if(head==NULL){
            cout << "The stack is empty" << endl;
        }
        else{
            Node *temp = head;
            head = head->next;
            delete temp;
            size--;
        }
    }
    void top(){
        if(head==NULL){
            cout << "The stack is empty" << endl;
        }
        else{
            cout << head->data << endl;
        }
    }
    void sizeofStack(){
        cout << "The size of the stack is :" << size << endl;
    }

    void display(){
     if(head==NULL){
            cout << "The stack is empty" << endl;
     }
     else{
            Node *temp = head;
            while(temp!=NULL){
                cout << temp->data << endl;
                temp = temp->next;
            }
            cout << endl;
     }
    }
};

int main()
{
    int value;
    Mystack stack;
    cout << "Enter the value you want to push" << endl;
    cin >> value;
    stack.push(value);
    cout << "Enter the next value you want to push " << endl;
    cin >> value;
    stack.push(value);
    stack.display();
    stack.pop();
    stack.display();

    return 0;
}