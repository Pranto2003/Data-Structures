#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    int size;

    LinkedList() {
        this->head = NULL;
        this->size = 0;
    }

    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        size++;

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void bubbleSort() {
        if (head == NULL || head->next == NULL) {
            return;
        }

        bool swapped;
        do {
            Node* current = head;
            Node* prev = NULL;
            swapped = false;

            while (current->next != NULL) {
                if (current->data > current->next->data) {
                    swapped = true;
                    swap(current->data, current->next->data);
                }
                prev = current;
                current = current->next;
            }
        } while (swapped);
    }
};

int main() {
    LinkedList list;
    list.insertAtEnd(12);
    list.insertAtEnd(15);
    list.insertAtEnd(10);
    list.insertAtEnd(5);
    list.insertAtEnd(20);
    list.insertAtEnd(3);
    list.insertAtEnd(2);

    cout << "Linked list before sorting:" << endl;
    list.printList();

    list.bubbleSort();

    cout << "Linked list after sorting:" << endl;
    list.printList();

    return 0;
}
