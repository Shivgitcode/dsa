#include <iostream>
#include <vector>
#include <queue>
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
    if (temp->data > n)
    {
        cout << "Insert in left of " << n << ": ";
        temp->left = buildTree();
    }
    else if (temp->data < n)
    {
        cout << "Insert in right of " << n << ": ";
        temp->right = buildTree();
    }

    return temp;
}

vector<int> levelOrder(Node *root)
{
    vector<int> v;
    queue<Node *> q;
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

int main()
{

    cout << "Create root : ";

    Node *root = buildTree();

    levelOrder(root);

    return 0;
}