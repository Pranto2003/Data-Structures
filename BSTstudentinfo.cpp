#include <iostream>
using namespace std;
class Node
{
public:
    int id;
    string name;
    float cgpa;
    Node *left, *right;

    Node(int id, string name, float cgpa)
    {
        this->id = id;
        this->name = name;
        this->cgpa = cgpa;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertNode(Node *&node, int id, string name, float cgpa)
{
    if (node == NULL)
    {
        return new Node(id, name, cgpa);
    }
    if (id < node->id)
    {
        node->left = insertNode(node->left, id, name, cgpa);
    }
    else if (id > node->id)
    {
        node->right = insertNode(node->right, id, name, cgpa);
    }
    return node;
}

Node *searchNode(Node *&node, int id)
{
    if (node == NULL || node->id == id)
    {
        return node;
    }

    if (id < node->id)
    {
        return searchNode(node->left, id);
    }
    else
    {
        return searchNode(node->right, id);
    }
}
int main()
{
    Node *root = NULL;
    root = insertNode(root, 100, "Pranto", 3.88);
    root = insertNode(root, 101, "Udoy", 3.82);
    root = insertNode(root, 102, "Mahin", 3.70);

    int searchId;
    cout << "Enter student ID to search: ";
    cin >> searchId;

    Node *result = searchNode(root, searchId);
    if (result)
    {
        cout << "Found Student:\n";
        cout << "ID: " << result->id << "\nName: " << result->name << "\nCGPA: " << result->cgpa << endl;
    }
    else
    {
        cout << "Student with ID " << searchId << " not found." << endl;
    }
    return 0;
}