#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

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

void inOrder(Node *&node)
{
    if (node == NULL)
    {
        return;
    }
    else
    {
        inOrder(node->left);
        cout << node->data << endl;
        inOrder(node->right);
    }
}

void preOrder(Node *&node)
{
    if (node == NULL)
    {
        return;
    }
    else
    {
        cout << node->data << endl;
        preOrder(node->left);
        preOrder(node->right);
    }
}

void postOrder(Node *&node)
{
    if (node == NULL)
    {
        return;
    }
    else
    {
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << endl;
    }
}

bool searchNode(Node *&node, int data)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (node->data == data)
    {
        return true;
    }
    if (data < node->data)
    {
        return searchNode(node->left, data);
    }
    else
    {
        return searchNode(node->right, data);
    }
}

Node *minValue(Node *&node)
{
    Node *temp = node;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxValue(Node *&node)
{
    Node *temp = node;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deletefromBST(Node *&node, int data)
{
    if (node == NULL)
    {
        return NULL;
    }
    if (node->data == data)
    {
        if (node->left == NULL && node->right == NULL)
        {
            delete node;
            return NULL;
        }
        // 1 child
        // left child
        if (node->left != NULL && node->right == NULL)
        {
            Node *temp = node->left;
            delete node;
            return temp;
        }

        // right child
        if (node->left == NULL && node->right != NULL)
        {
            Node *temp = node->right;
            delete node;
            return temp;
        }

        // 2 child
        if (node->left != NULL && node->right != NULL)
        {
            Node *temp = minValue(node->right);
            node->data = temp->data;
            node->right = deletefromBST(node->right, temp->data);
            return node;
        }
    }
    else if (data < node->data)
    {
        node->left = deletefromBST(node->left, data);
        return node;
    }
    else if (data > node->data)
    {
        node->right = deletefromBST(node->right, data);
        return node;
    }
}
int main()
{
    int valuetosearch, valuetodelete;
    Node *root = NULL;
    while (true)
    {
        int choice;
        cout << "What do you want " << endl;
        cout << "1. Insert data to BST" << endl;
        cout << "2. Search data in BST" << endl;
        cout << "3. Traverse the BST" << endl;
        cout << "4.Delete any node from BST" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the values in BST" << endl;
            cout << "Enter -1 to stop" << endl;
            takeInput(root);
            break;
        case 2:
            cout << "Enter the value you want to search :" << endl;
            cin >> valuetosearch;
            if (searchNode(root, valuetosearch))
            {
                cout << valuetosearch << " is present in the tree " << endl;
            }
            else
            {
                cout << valuetosearch << " isn't present in the tree " << endl;
            }
            break;
        case 3:
            cout << "Print Inorder" << endl;
            inOrder(root);
            cout << "Print Preorder" << endl;
            preOrder(root);
            cout << "Print Postorder" << endl;
            postOrder(root);
            break;
        case 4:
            cout << "Delete any element from BST :" << endl;
            cin >> valuetodelete;
            deletefromBST(root, valuetodelete);
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid Choice " << endl;
        }
    }

    return 0;
}