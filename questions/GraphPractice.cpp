// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     // creating undirected unweighted graph
//     int vertex, edges;
//     cin >> vertex >> edges;

//     vector<int> AdjList[5];
//     int u, v;
//     for (int i = 0; i < edges; i++)
//     {
//         cin >> u >> v;
//         AdjList[u].push_back(v);
//         AdjList[v].push_back(u);
//     }

//     for (int i = 0; i < vertex; i++)
//     {
//         cout << i << "-> ";
//         for (int j = 0; j < AdjList[i].size(); j++)
//         {
//             cout << AdjList[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// vector<int> BFS(vector<int> adj[], int v)
// {
//     queue<int> q;
//     int node;
//     vector<int> ans;
//     q.push(0);
//     vector<bool> visited(v, 0);
//     while (!q.empty())
//     {
//         node = q.front();

//         ans.push_back(node);
//         visited[node] = 1;
//         q.pop();
//         for (int i = 0; i < adj[node].size(); i++)
//         {
//             if (!visited[adj[node][i]])
//             {
//                 visited[adj[node][i]] = 1;
//                 q.push(adj[node][i]);
//             }
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int vertex, edges;
//     cin >> vertex >> edges;
//     vector<int> AdjMat[5];

//     int u, v;
//     for (int i = 0; i < edges; i++)
//     {
//         cin >> u >> v;
//         AdjMat[u].push_back(v);
//         AdjMat[v].push_back(u);
//     }

//     // bfs traversal

//     vector<int> ans = BFS(AdjMat, vertex);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int k;
//     cin >> k;

//     vector<int> v = {1, 2, 3, 4, 5, 6, -1};
//     cout << v[v.size() - k - 1];

//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int N, M;
//     vector<int> v;
//     cin >> N;
//     cin >> M;
//     int index;
//     for (int i = 0; i < N; i++)
//     {
//         int n;
//         cin >> n;
//         v.push_back(n);
//     }

//     for (int i = N - 1; i >= 0; i--)
//     {
//         if (v[i] == M)
//         {
//             index = i;
//             break;
//         }
//     }

//     cout << index;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;
//     int sum = 0;
//     int temp = num;
//     vector<int> v;
//     while (num > 0)
//     {
//         sum = num % 10;
//         v.push_back(sum);
//         num = num / 10;
//     }

//     int i = v.size() - 1;

//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] == 0)
//         {
//             v[i] = 5;
//         }
//     }

//     while (num < temp)
//     {
//         num = num * 10 + v[i];
//         i--;
//     }

//     cout << num << endl;

//     return 0;
// }
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v = {2, 6, 3, 12, 56, 8};
//     sort(v.begin(), v.end());
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }

//     return 0;
// }

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

int sumLeafToRoot(Node *root, int sum)
{
    if (root == NULL)
    {
        return 0;
    }
    sum = sum * 10 + root->data;
    if (root->left == NULL && root->right == NULL)
    {
        return sum;
    }
    int leftSum = sumLeafToRoot(root->left, sum);
    int rightSum = sumLeafToRoot(root->right, sum);

    return leftSum + rightSum;
}

int main()
{
    cout << "Create Tree: ";
    Node *root = buildTree();
    cout << sumLeafToRoot(root, 0) << endl;

    return 0;
}