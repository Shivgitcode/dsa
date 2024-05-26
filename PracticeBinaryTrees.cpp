// #include <iostream>
// #include <queue>
// #include <vector>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = left;
//         this->right = right;
//     }
// };

// void buildTree(Node *&root)
// {
//     queue<Node *> q;
//     int left;
//     int right;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         cout << "Insert in left of node " << temp->data << " ";
//         cin >> left;
//         if (left != -1)
//         {
//             temp->left = new Node(left);
//             q.push(temp->left);
//         }
//         cout << "Insert in right of node " << temp->data << " ";
//         cin >> right;
//         if (right != -1)
//         {
//             temp->right = new Node(right);
//             q.push(temp->right);
//         }

//         cout << endl;
//     }
// }
// void preOrder(Node *&root)
// {

//     if (root == NULL)
//     {
//         return;
//     }

//     cout << root->data << " ";
//     preOrder(root->left);
//     preOrder(root->right);
// }

// void levelOrder(Node *&root)
// {
//     vector<int> v;
//     queue<Node *> q;
//     q.push(root);
//     v.push_back(root->data);
//     Node *temp;
//     while (!q.empty())
//     {
//         q.pop();
//         if (temp->left)
//         {
//             v.push_back(temp->left->data);
//             q.push(temp->left);
//         }
//         if (temp->right)
//         {
//             v.push_back(temp->right->data);
//             q.push(temp->right);
//         }
//     }

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }

// int main()
// {
//     Node *root = new Node(10);
//     buildTree(root);
//     levelOrder(root);

//     return 0;
// }

// building another tree

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int data)
//     {
//         this->data = data;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };

// Node *buildTree()
// {
//     int n;
//     cin >> n;
//     if (n == -1)
//     {
//         return NULL;
//     }
//     Node *temp = new Node(n);

//     cout << "Insert in left of " << n << " ";
//     temp->left = buildTree();
//     cout << "Insert in right of " << n << " ";
//     temp->right = buildTree();

//     return temp;
// }

// void levelOrder(Node *root)
// {
//     {
//         queue<Node *> q;
//         vector<int> v;
//         q.push(root);
//         Node *temp;
//         while (!q.empty())
//         {
//             temp = q.front();
//             v.push_back(temp->data);
//             q.pop();
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             };
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }

//         for (int i = 0; i < v.size(); i++)
//         {
//             cout << v[i] << " ";
//         }
//     }
// }

// int main()
// {
//     cout << "Create root Node ";

//     Node *root = buildTree();
//     levelOrder(root);

//     return 0;
// }

// sum of binary tree

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

// Node* buildTree(int n)
// {
//     Node*root=new Node(n);

//     queue<Node *> q;
//     int right, left;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         cout << "Insert in left of " << temp->data << ": " ;
//         cin >> left;
//         if (left != -1)
//         {
//             Node *first = new Node(left);
//             q.push(first);
//         }
//         cout << "Insert in right of " << temp->data << ": ";

//         cin >> right;
//         if (right != -1)
//         {
//             Node *second = new Node(right);
//             q.push(second);
//         }
//     }

//     return root;
// }

Node *buildTree()
{
    int n;
    cin >> n;
    if (n == -1)
    {
        return NULL;
    }
    Node *temp = new Node(n);
    cout << "Insert in left of " << n << ": ";
    temp->left = buildTree();
    cout << "Insert in right of " << n << ": ";
    temp->right = buildTree();
    return temp;
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

    cout << "sum of binary tree :" << sum << endl;
}

vector<int> levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<int> v;
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

void leafNodes(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<int> v;
    Node *temp;
    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (!(temp->left && temp->right))
        {
            v.push_back(temp->data);
        }
        else
        {
            q.push(temp->left);
            q.push(temp->right);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    cout << "Create root Node : ";
    Node *root = buildTree();
    // int sizeOfBinaryTree = levelOrder(root).size();

    // cout << sizeOfBinaryTree << endl;

    // sumOfBinaryTree(root);
    leafNodes(root);

    return 0;
}