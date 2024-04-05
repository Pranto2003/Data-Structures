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
void insertAtHead(Node* &head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
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
        insertAtTail(tail, data);
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}
void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *current = head;
        Node *previous = NULL;

        int count = 1;
        while (count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }

        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}
void searchInLinkedList(Node *head, int value)
{
    int count = 1;
    while (head->next != NULL)
    {
        if (head->data == value)
        {
            cout << value << " found at index :" << count << endl;
        }
        count++;
        head = head->next;
    }
}
void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    int value, position;
    cout << "Enter the first value :" << endl;
    cin >> value;
    Node *n1 = new Node(value);
    Node *head = n1;
    Node *tail = head;
    cout << "Enter the second value at head :" << endl;
    cin >> value;
    insertAtHead(head, value);
    cout << endl;
    cout << "Display LinkedList" << endl;
    printLinkedList(head);
    cout << "Enter the third value at tail :" << endl;
    cin >> value;
    insertAtTail(tail, value);
    cout << endl;
    cout << "Display LinkedList" << endl;
    printLinkedList(head);
    cout << endl;
    cout << "Enter the position where you want to insert " << endl;
    cin >> position;
    cout << "Enter the value which you want to insert in this position " << endl;
    cin >> value;
    insertAtPosition(head, tail, position, value);
    cout << "Display LinkedList" << endl;
    printLinkedList(head);
    cout << endl;
    cout << "Enter the position where you want to delete " << endl;
    cin >> position;
    cout << endl;
    deleteNode(head, position);
    cout << "Display Linked List" << endl;
    printLinkedList(head);
    cout << endl;
    cout << "Enter the value you want to search ?" << endl;
    cin >> value;
    searchInLinkedList(head, value);
    cout << endl;
    cout << "Head :" << head->data << endl;
    cout << "Tail :" << tail->data << endl;

    return 0;
}