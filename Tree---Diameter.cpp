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
void takeInput(Node* &node){
    int data;
    cin >> data;
    while(data!=-1){
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

int diameterofNode(Node* &node){
    if(node==NULL){
        return 0;
    }
    int value1 = diameterofNode(node->left);
    int value2 = diameterofNode(node->right);
    int value3 = heightofTree(node->left) + heightofTree(node->right) + 1;

    int answer = max(value1, max(value2, value3));
    return answer;
}
int main()
{
    Node *root = NULL;
    cout << "Enter the values in BST" << endl;
    cout << "Enter -1 to stop" << endl;
    takeInput(root);
    cout << "The diameter of the tree is :" << diameterofNode(root) << endl;

    return 0;
}