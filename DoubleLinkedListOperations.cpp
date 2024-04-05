#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *previous;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->previous = NULL;
        this->next = NULL;
    }
};

void insertatHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->previous = temp;
    head = temp;
}

void insertatTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->previous = tail;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertatHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertatTail(tail, data);
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next->previous = newNode;
    temp->next = newNode;
    newNode->previous = temp;
}

void deleteAtPosition(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->previous = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node *current = head;
        Node *previous = NULL;
        int count = 1;
        while(count<position){
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next->previous = previous;
        delete current;
    }
}

void printLinkedList(Node *&head)
{
    Node *temp = head;
    cout << endl;
    cout << "Printing the Linked List :" << endl;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

void sizeOfLinkedList(Node *&head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    cout << "The size of Linked List :" << count << endl;
    cout << endl;
}
int main()
{
    int value, position;
    cout << "Enter the value of 1st node :" << endl;
    cin >> value;
    Node *node1 = new Node(value);
    Node *head = node1;
    Node *tail = head;
    printLinkedList(head);
    cout << "Enter the value at Head :" << endl;
    cin >> value;
    insertatHead(head, value);
    printLinkedList(head);
    cout << "Enter the value at Tail :" << endl;
    cin >> value;
    insertatTail(tail, value);
    printLinkedList(head);
    cout << "Enter the value at position :" << endl;
    cin >> position;
    cout << "Enter the value at the position :" << endl;
    cin >> value;
    insertAtPosition(head, tail, position, value);
    printLinkedList(head);
    cout << "Head :" << head->data << endl;
    cout << "Tail :" << tail->data << endl;
    sizeOfLinkedList(head);
    deleteAtPosition(head, 3);
    return 0;
}