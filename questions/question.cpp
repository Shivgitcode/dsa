// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 3};
//     stack<int> s;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         s.push(arr[i]);
//     }
//     while (!s.empty())
//     {
//         cout << s.top() << " ";
//         s.pop();
//     }

//     return 0;
// }

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
//         left = right = NULL;
//     }
// };

// Node *levelOrderTree()
// {
//     cout << "create tree: ";
//     int n;
//     cin >> n;
//     Node *root = new Node(n);
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         int first;
//         int second;
//         cout << "Insert in left of " << temp->data << ": ";
//         cin >> first;
//         if (first != -1)
//         {
//             Node *node1 = new Node(first);
//             temp->left = node1;
//             q.push(temp->left);
//         }

//         cout << "Insert in right of " << temp->data << ": ";
//         cin >> second;
//         if (second != -1)
//         {
//             Node *node2 = new Node(second);
//             temp->right = node2;
//             q.push(temp->right);
//         }
//     }
//     return root;
// }
// void preOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     cout << root->data << endl;
//     preOrder(root->left);
//     preOrder(root->right);
// }

// int maxHeight(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     return 1 + max(maxHeight(root->left), maxHeight(root->right));
// }

// int main()
// {
//     Node *root = levelOrderTree();

//     cout << "Max height of tree is " << maxHeight(root) << endl;
//     preOrder(root);

//     return 0;
// }

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
        left = right = NULL;
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
    cout << "Insert into left of " << n << ": ";
    temp->left = buildTree();
    cout << "Insert into right of " << n << ": ";
    temp->right = buildTree();

    return temp;
}

int main()
{
    Node *root =

        return 0;
}