#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertNode(Node *&node, int data)
{
    if (node == NULL)
    {
        node = new Node(data);
    }
    else if (data < node->data)
    {
        node->left = insertNode(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insertNode(node->right, data);
    }
    return node;
}

void takeInput(Node *&node)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        insertNode(node, data);
        cin >> data;
    }
}
int heightofTree(Node *&node)
{
    if (node == NULL)
    {
        return 0;
    }

    int left = heightofTree(node->left);
    int right = heightofTree(node->right);
    int answer = max(left, right) + 1;
    return answer;
}
int main()
{
    Node *root = NULL;
    cout << "Enter the values in BST" << endl;
    cout << "Enter -1 to stop" << endl;
    takeInput(root);

    cout << "The Height of the tree is :" << heightofTree(root) << endl;
    return 0;
}