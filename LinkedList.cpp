#include <iostream>
using namespace std;
class Node{
        public:
        int data;
         Node *next;
        Node(int value){
            data = value;
        }
};

void traverseLinkedList(Node* head){
        Node* current = head;
        while(current!=nullptr){
            cout << current->data << endl;
            current = current->next;
        }
}

int main(){
        int value1, value2, value3;
        cout << "Enter the first value :" << endl;
        cin >> value1;
        cout << "Enter the second value :" << endl;
        cin >> value2;
        cout << "Enter the third value :" << endl;
        cin >> value3;
        Node n1(value1);
        Node n2(value2);
        Node n3(value3);
        Node* head;
        head = &n1;
        n1.next = &n2;
        n2.next = &n3;
        n3.next = nullptr;
        cout << endl;
        cout << endl;
        traverseLinkedList(head);
        return 0;
}