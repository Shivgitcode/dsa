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

// Node *createBinaryTree(Node *root, int target)
// {
//     if (root == NULL)
//     {
//         Node *temp = new Node(target);
//         return temp;
//     }
//     if (root->data > target)
//     {
//         root->left = createBinaryTree(root->left, target);
//     }
//     else
//     {
//         root->right = createBinaryTree(root->right, target);
//     }

//     return root;
// }

// vector<int> levelOrder(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     vector<int> v;
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

//     return v;
// }

// printing only the leaf nodes;

// void printLeaf(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     if (root->left == NULL && root->right == NULL)
//     {
//         cout << root->data << endl;
//     }
//     printLeaf(root->left);
//     printLeaf(root->right);
// }

// void inOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     inOrder(root->left);
//     cout << root->data << " ";
//     inOrder(root->right);
// }

// void postOrder(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout << root->data << " ";
// }

// int main()
// {

//     Node *root = NULL;
//     int arr[5] = {6, 3, 2, 5, 11};
//     for (int i = 0; i < 5; i++)
//     {
//         root = createBinaryTree(root, arr[i]);
//     }
//     // vector<int> traverse_Tree = levelOrder(root);
//     // for (int i = 0; i < traverse_Tree.size(); i++)
//     // {
//     //     cout << traverse_Tree[i] << " ";
//     // }
//     // cout << endl;
//     // printLeaf(root);
//     // inOrder(root);
//     postOrder(root);

//     return 0;
// }

// preorder = node ,left ,right;
// inorder=left,node,right
// postorder = left,right,Node

// #include <iostream>
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
//     cout << "Insert in left of " << n << ": ";
//     temp->left = buildTree();
//     cout << "Insert in right of " << n << ": ";
//     temp->right = buildTree();
//     return temp;
// }

// bool isSame(Node *root1, Node *root2)
// {
//     if (root1 == NULL && root2 == NULL)
//     {
//         return true;
//     }
//     if (root1 == NULL || root2 == NULL)
//     {
//         return false;
//     }
//     if (root1->data != root2->data)
//     {
//         return false;
//     }

//     return isSame(root1->left, root2->left) && isSame(root1->right, root2->right);
// }

// int main()
// {
//     cout << "create tree 1: ";
//     Node *root1 = buildTree();
//     cout << endl;
//     cout << "create tree 2 : ";
//     Node *root2 = buildTree();

//     cout << isSame(root1, root2);

//     return 0;
// }

// #include <iostream>
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

// Node *buildTree()
// {
//     int n;
//     cin >> n;
//     if (n == -1)
//     {
//         return NULL;
//     }
//     Node *temp = new Node(n);
//     cout << "Insert inside left of " << n << ": ";
//     temp->left = buildTree();
//     cout << "Insert inside right of " << n << ": ";
//     temp->right = buildTree();
//     return temp;
// }

// bool isSymmetric(Node *temp1, Node *temp2)
// {
//     if (temp1 == NULL && temp2 == NULL)
//     {
//         return true;
//     }
//     if (temp1 == NULL || temp2 == NULL)
//         return false;
//     if (temp1->data != temp2->data)
//     {
//         return false;
//     }

//     return isSymmetric(temp1->left, temp2->right) && isSymmetric(temp1->right, temp2->left);
// }

// int main()
// {

//     cout << "create tree: ";
//     Node *root = buildTree();
//     cout << isSymmetric(root->left, root->right);

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <queue>
// #include <algorithm>
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

// Node *buildTree()
// {
//     int n;
//     cin >> n;
//     if (n == -1)
//     {
//         return NULL;
//     }
//     Node *temp = new Node(n);
//     cout << "Insert inside left of " << n << ": ";
//     temp->left = buildTree();
//     cout << "Insert inside right of " << n << ": ";
//     temp->right = buildTree();
//     return temp;
// }

// vector<vector<int>> levelOrder(Node *root)
// {

//     queue<Node *> q;
//     q.push(root);
//     vector<vector<int>> v;
//     if (!root)
//     {
//         return v;
//     }
//     Node *temp;
//     while (!q.empty())
//     {
//         int s = q.size();
//         vector<int> v2;
//         for (int i = 0; i < s; i++)
//         {
//             temp = q.front();
//             q.pop();
//             if (temp->right)
//                 q.push(temp->right);
//             if (temp->left)
//                 q.push(temp->left);
//             v2.push_back(temp->data);
//         }
//         v.push_back(v2);
//     }

//     reverse(v.begin(), v.end());

//     return v;
// }

// int main()
// {
//     cout << "create tree: ";
//     Node *root = buildTree();
//     vector<vector<int>> printTree = levelOrder(root);
//     for (int i = 0; i < printTree.size(); i++)
//     {
//         for (int j = 0; j < printTree[i].size(); j++)
//         {
//             cout << printTree[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

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
//         left = right = NULL;
//     }
// };

// Node *buildTree()
// {
//     int n;
//     cin >> n;
//     if (n == -1)
//         return NULL;
//     Node *temp = new Node(n);
//     cout << "Insert into left of " << n << ": ";
//     temp->left = buildTree();
//     cout << "Insert into right of " << n << ": ";
//     temp->right = buildTree();
//     return temp;
// }

// vector<vector<int>> zigZag(Node *root)
// {
//     queue<Node *> q;
//     vector<vector<int>> v;
//     q.push(root);
//     Node *temp;
//     bool leftToRight = true;
//     while (!q.empty())
//     {
//         int s = q.size();
//         vector<int> v2(s);

//         for (int i = 0; i < s; i++)
//         {
//             temp = q.front();

//             q.pop();
//             int index = leftToRight ? i : s - i - 1;
//             v2[index] = temp->data;
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//         leftToRight = !leftToRight;
//         v.push_back(v2);
//     }

//     return v;
// }

// int main()
// {
//     cout << "create root: ";
//     Node *root = buildTree();
//     vector<vector<int>> ans = zigZag(root);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

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

// int sumOfBinaryTree(Node *root)
// {
//     queue<Node *> q;
//     int sum = 0;
//     Node *temp;
//     q.push(root);
//     while (!q.empty())
//     {
//         temp = q.front();
//         sum += temp->data;
//         q.pop();
//         if (temp->left)
//             q.push(temp->left);
//         if (temp->right)
//             q.push(temp->right);
//     }

//     return sum;
// }

int sumOfBinary(Node *root, int currSum, int target)
{
    if (root == NULL)
    {
        return false;
    }
    currSum += root->data;
    if (root->left == NULL && root->right == NULL)
    {
        return currSum == target;
    }

    return sumOfBinary(root->left, currSum, target) || sumOfBinary(root->right, currSum, target);
}

int main()
{

    cout << "Create tree: ";
    Node *root = buildTree();
    cout << "Sum of tree is : " << sumOfBinary(root, 0, 22);

    return 0;
}