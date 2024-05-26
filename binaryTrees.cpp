// #include <iostream>
// #include <queue>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int d)
//     {
//         this->left = NULL;
//         this->right = NULL;
//         this->data = d;
//     }
// };

// Node *buildTree(Node *root)
// {
//     cout << "Enter the data : " << endl;
//     int data;
//     cin >> data;
//     root = new Node(data);
//     if (data == -1)
//     {
//         return NULL;
//     }
//     cout << "Enter data for inserting in left" << data << endl;
//     root->left = buildTree(root->left);
//     cout << "Enter data for inserting in right" << data << endl;
//     root->right = buildTree(root->right);
//     return root;
// }

// void levelOrderTraversal(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         cout << temp->data << " ";
//         q.pop();

//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }

//         if (temp->left)
//         {
//             q.push(temp->left);
//         }
//         if (temp->right)
//         {
//             q.push(temp->right);
//         }
//     }
// }

// int main()
// {
//     Node *root = NULL;

//     // buildtree
//     root = buildTree(root);

//     cout << "Printing the level order traversal output " << endl;
//     levelOrderTraversal(root);

//     return 0;
// }

// creating binary tree using queue/

// #include <iostream>
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

// void buildTree(Node *&root)
// {
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         int first;
//         int second;
//         cout << "Enter the first node of " << temp->data << " ";
//         cin >> first;
//         cout << endl;
//         if (first != -1)
//         {
//             temp->left = new Node(first);
//             q.push(temp->left);
//         }

//         cout << "Enter the second node of " << temp->data << " ";

//         cin >> second;
//         cout << endl;
//         if (second != -1)
//         {
//             temp->right = new Node(second);
//             q.push(temp->right);
//         }
//     }
// }

// int main()
// {

//     Node *root = new Node(10);

//     buildTree(root);

//     return 0;
// }

// creating binary tree using recursion

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
        this->right = NULL;
        this->left = NULL;
    }
};

Node *buildTree()
{
    int x;

    cin >> x;
    if (x == -1)
    {
        return NULL;
    }
    Node *temp = new Node(x);
    cout << "Insert in left Node of " << x << " ";
    temp->left = buildTree();
    cout << "Insert in right Node of " << x << " ";
    temp->right = buildTree();
    cout << endl;
    return temp;
}

void preOrder(Node *&root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    Node *root = buildTree();
    preOrder(root);

    return 0;
}