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

// Node *binarySearchTree(Node *root, int target)
// {
//     if (!root)
//     {
//         Node *temp = new Node(target);
//         return temp;
//     }
//     if (target < root->data)
//     {
//         root->left = binarySearchTree(root->left, target);
//     }
//     else if (target > root->data)
//     {
//         root->right = binarySearchTree(root->right, target);
//     }

//     return root;
// }

// void levelOrder(Node *root)
// {
//     queue<Node *> q;
//     vector<int> v;
//     q.push(root);
//     Node *temp;
//     while (!q.empty())
//     {
//         temp = q.front();
//         v.push_back(temp->data);
//         q.pop();
//         if (temp->left)
//         {
//             q.push(temp->left);
//         }
//         if (temp->right)
//         {
//             q.push(temp->right);
//         }
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
// }

// void preOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     if (root->left == NULL && root->right == NULL)
//     {
//         cout << root->data << endl;
//     }
//     preOrder(root->left);
//     preOrder(root->right);
// }

// int main()
// {
//     Node *root = NULL;
//     int arr[5] = {10, 20, 5, 6, 4};
//     for (int i = 0; i < 5; i++)
//     {

//         root = binarySearchTree(root, arr[i]);
//     }

//     // levelOrder(root);
//     preOrder(root);
//     // levelOrder(root);

//     return 0;
// }

// creating another binary search tree

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

Node *createBinaryTree(Node *root, int target)
{
    if (root == NULL)
    {
        Node *temp = new Node(target);
        return temp;
    }
    if (root->data > target)
    {
        root->left = createBinaryTree(root->left, target);
    }
    else
    {
        root->right = createBinaryTree(root->right, target);
    }

    return root;
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

// printing only the leaf nodes;

void printLeaf(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << endl;
    }
    printLeaf(root->left);
    printLeaf(root->right);
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main()
{

    Node *root = NULL;
    int arr[5] = {6, 3, 2, 5, 11};
    for (int i = 0; i < 5; i++)
    {
        root = createBinaryTree(root, arr[i]);
    }
    // vector<int> traverse_Tree = levelOrder(root);
    // for (int i = 0; i < traverse_Tree.size(); i++)
    // {
    //     cout << traverse_Tree[i] << " ";
    // }
    // cout << endl;
    // printLeaf(root);
    // inOrder(root);
    postOrder(root);

    return 0;
}

// preorder = node ,left ,right;
// inorder=left,node,right
// postorder = left,right,Node