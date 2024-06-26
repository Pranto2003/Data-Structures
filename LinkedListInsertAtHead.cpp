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
void insertAtHead(Node* &head,int data){
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
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
        n1->next = n2;
        n2->next = n3;
        n3->next = n4;
        n4->next = n5;
        printLinkedList(head);
        cout << endl;
        insertAtHead(head,30);
        insertAtHead(head,35);
        insertAtHead(head,40);
        cout << endl;
        printLinkedList(head);

        return 0;
}