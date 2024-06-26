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
//     cout << "Insert into left of " << n << ": ";
//     temp->left = buildTree();
//     cout << "Insert into right of " << n << ": ";
//     temp->right = buildTree();

//     return temp;
// }

// int main()
// {
//     cout << "Create root: ";
//     Node *root = buildTree();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int data)
//     {
//         this->data = data;
//         next = NULL;
//     }
// };

// void InsertAtTail(Node *&tail, Node *&head, int data)
// {
//     Node *temp = new Node(data);

//     if (head == NULL)
//     {
//         head = temp;
//         tail = temp;
//         return;
//     }
//     else
//     {
//         tail->next = temp;
//         tail = temp;
//     }
// }

// void printList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// void reverseList(Node *&head)
// {
//     Node *prev = NULL;
//     Node *curr = head;
//     Node *forward = NULL;
//     while (curr != NULL)
//     {
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     head = prev;
// }

// Node *buildList(int size)
// {
//     Node *Head = NULL;
//     Node *tail = NULL;
//     for (int i = 0; i < size; i++)
//     {
//         int n;
//         cin >> n;
//         InsertAtTail(tail, Head, n);
//     }
//     return Head;
// }

// Node *sumL(Node *first, Node *second)
// {
//     int sum = 0;
//     int carry = 0;
//     int digit = 0;
//     Node *tail = NULL;
//     Node *head = NULL;
//     while (first != NULL || second != NULL || carry != 0)
//     {
//         int val1 = 0;
//         if (first != NULL)
//         {
//             val1 = first->data;
//         }
//         int val2 = 0;
//         if (second != NULL)
//         {
//             val2 = second->data;
//         }
//         sum = carry + val1 + val2;
//         digit = sum % 10;
//         InsertAtTail(tail, head, digit);
//         carry = sum / 10;

//         if (first != NULL)
//         {
//             first = first->next;
//         }
//         if (second != NULL)
//         {
//             second = second->next;
//         }
//     }
//     return head;
// }

// Node *addTwoNumbers(Node *&first, Node *&second)
// {
//     reverseList(first);
//     reverseList(second);
//     Node *ans = sumL(first, second);
//     reverseList(ans);
//     return ans;
// }

// int main()
// {
//     cout << "create first number: " << endl;
//     int size;
//     cin >> size;
//     Node *first = buildList(size);

//     cout << "create second number: " << endl;
//     int size2;
//     cin >> size2;
//     Node *second = buildList(size2);
//     Node *ans = addTwoNumbers(first, second);
//     printList(ans);

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     cout << (ceil(log2(n + 1)));
//     return 0;
// }

// nth ugly Number

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isUgly(int n)
// {
//     if (n <= 0)
//     {
//         return 1;
//     }
//     while (n % 2 == 0)
//         n /= 2;
//     while (n % 3 == 0)
//         n /= 3;
//     while (n % 5 == 0)
//         n /= 5;

//     return n == 1;
// }

// int main()
// {
//     int s;
//     cin >> s;
//     vector<int> nums;
//     for (int i = 1; nums.size() < s; i++)
//     {
//         if (isUgly(i))
//         {
//             nums.push_back(i);
//         }
//     }

//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " ";
//     }

//     return 0;
// }

// diameter of binary tree

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
//     cout << "Insert inside left of " << n << ": ";
//     temp->left = buildTree();
//     cout << "Insert inside right of " << n << ": ";
//     temp->right = buildTree();
//     return temp;
// }

// int height(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int leftNode = height(root->left);
//     int rightNode = height(root->right);
//     return max(leftNode, rightNode) + 1;
// }

// int diameter(Node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     };
//     int left = diameter(root->left);
//     int right = diameter(root->right);
//     int h = height(root->left) + height(root->right) + 1;
//     return max(left, max(right, h));
// }

// vector<vector<int>> levelOrder(Node *root)
// {
//     queue<Node *> q;
//     vector<vector<int>> ans;
//     q.push(root);
//     Node *temp;
//     bool leftRight = true;
//     while (!q.empty())
//     {
//         int s = q.size();
//         vector<int> v(s);
//         for (int i = 0; i < s; i++)
//         {
//             temp = q.front();
//             q.pop();

//             int index = leftRight ? i : s - i - 1;

//             v[index] = temp->data;

//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//         ans.push_back(v);
//         leftRight = !leftRight;
//     }

//     return ans;
// }

// bool isBalanced(Node *root)
// {
//     if (root == NULL)
//     {
//         return true;
//     }
//     bool right = isBalanced(root->right);
//     bool left = isBalanced(root->left);
//     bool diff = abs(height(root->left) - height(root->right)) <= 1;
//     if (left && right && diff)
//     {
//         return 1;
//     }
//     else
//     {
//         return false;
//     }
// }

// vector<vector<int>> levelOrder2(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     vector<vector<int>> ans;
//     Node *temp;
//     while (!q.empty())
//     {
//         int s = q.size();
//         vector<int> v;
//         for (int i = 0; i < s; i++)
//         {
//             temp = q.front();
//             v.push_back(temp->data);
//             q.pop();
//             if (temp->left)
//                 q.push(temp->left);
//             if (temp->right)
//                 q.push(temp->right);
//         }
//         ans.push_back(v);
//     }
//     return ans;
// }

// int main()
// {
//     cout << "Create tree: ";
//     Node *root = buildTree();

//     cout << height(root) << endl;
//     cout << diameter(root) << endl;
//     vector<vector<int>> ans = levelOrder(root);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }

//     if (isBalanced(root))
//     {
//         cout << "true";
//     }
//     else
//     {
//         cout << "false";
//     }

//     vector<vector<int>> ans2 = levelOrder(root);
//     for (int i = 0; i < ans[2].size(); i++)
//     {
//         cout << ans[2][i] << " ";
//     }

//     return 0;
// }

#include <iostream>
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

Node *buildTree(Node *root, int n)
{
    if (root == NULL)
    {
        root = new Node(n);
        return root;
    }
    if (n < root->data)
    {
        root->left = buildTree(root->left, n);
    }
    if (n > root->data)
    {
        root->right = buildTree(root->right, n);
    }
    return root;
}

void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

int main()
{
    Node *root = NULL;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < arr.size(); i++)
    {
        Node *root = buildTree(root, arr[i]);
    }
    Inorder(root);

    return 0;
}