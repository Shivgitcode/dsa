#include <iostream>
#include <queue>
#include <vector>
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

Node *buildTree()
{
    int n;
    cin >> n;
    if (n == -1)
    {
        return NULL;
    }
    Node *temp = new Node(n);
    cout << "Insert inside left of " << n << ": ";
    temp->left = buildTree();
    cout << "Insert into right of " << n << ": ";
    temp->right = buildTree();
    return temp;
}

vector<int> levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    vector<int> v;
    q.push(root);
    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        v.push_back(temp->data);
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }

    return v;
}

void sumOfBinaryTree(Node *root)
{
    queue<Node *> q;
    int sum = 0;
    q.push(root);
    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        sum += temp->data;
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }

    cout << sum << endl;
}

void printLeaf(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    printLeaf(root->left);
    printLeaf(root->right);
}
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (1 + max(height(root->left), height(root->right)));
}

int main()
{
    cout << "Create Node: ";
    Node *root = buildTree();
    vector<int> arr = levelOrderTraversal(root);
    // size of tree

    cout << "Size of arr: " << arr.size() << endl;

    sumOfBinaryTree(root);

    printLeaf(root);
    int height_of_tree = height(root);
    cout << height_of_tree << endl;
    // cout << mysum << endl;

    return 0;
}