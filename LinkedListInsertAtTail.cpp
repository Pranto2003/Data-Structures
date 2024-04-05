#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
void insertAtTail(Node* &tail,int data){
        Node *newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
}
void printLinkedList(Node* &head){
        Node *temp = head;
        while(temp!=NULL){
            cout << temp->data << endl;
            temp = temp->next;
        }
}
int main(){
        Node* n1 = new Node(5);
        Node* n2 = new Node(10);
        Node* n3 = new Node(15);
        Node* n4 = new Node(20);
        Node* n5 = new Node(25);
        Node *head = n1;
        Node *tail = n5;
        n1->next = n2;
        n2->next = n3;
        n3->next = n4;
        n4->next = n5;
        printLinkedList(head);
        cout << endl;
        insertAtTail(tail,30);
        insertAtTail(tail,35);
        insertAtTail(tail,40);
        cout << endl;
        printLinkedList(head);

        return 0;
}