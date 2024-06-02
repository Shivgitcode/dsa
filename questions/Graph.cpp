// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     // undirected unweighted graph
//     // int vertex, edges;
//     // cin >> vertex >> edges;

//     // vector<vector<bool>>
//     //     AdjMat(vertex, vector<bool>(vertex, 0));

//     // int u, v;
//     // for (int i = 0; i < edges; i++)
//     // {
//     //     cin >> v >> u;
//     //     AdjMat[u][v] = 1;
//     //     AdjMat[v][u] = 1;
//     // }

//     // for (int i = 0; i < vertex; i++)
//     // {
//     //     for (int j = 0; j < vertex; j++)
//     //     {
//     //         cout << AdjMat[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     // undirected weighted graph
//     int vertex, edges;
//     cin >> vertex >> edges;

//     vector<vector<int>> AdjMat(vertex, vector<int>(vertex, 0));

//     int u, v, weight;
//     for (int i = 0; i < edges; i++)
//     {
//         cin >> v >> u >> weight;
//         AdjMat[u][v] = weight;
//         AdjMat[v][u] = weight;
//     }

//     for (int i = 0; i < vertex; i++)
//     {
//         for (int j = 0; j < vertex; j++)
//         {
//             cout << AdjMat[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// making graph using adjacency list

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> BFSsearch(int v, vector<int> adj[])
{
    queue<int> q;
    vector<int> visited(v, 0);
    q.push(0);
    visited[0] = 1;
    vector<int> ans;
    int node;
    while (!q.empty())
    {
        node = q.front();
        q.pop();
        ans.push_back(node);
        for (int i = 0; i < adj[node].size(); i++)
        {
            if (!visited[adj[node][i]])
            {
                visited[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }
    return ans;
}

void DFS(int node, vector<int> adj[], vector<int> &ans, vector<bool> &visited)
{
    visited[node] = 1;
    ans.push_back(node);
    for (int j = 0; j < adj[node].size(); j++)
    {
        if (!visited[adj[node][j]])
        {
            DFS(adj[node][j], adj, ans, visited);
        }
    }
}

int main()
{
    int vertex, edges;
    cin >> vertex >> edges;
    vector<int> AdjMat[5];
    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AdjMat[u].push_back(v);
        AdjMat[v].push_back(u);
    }

    // for (int i = 0; i < vertex; i++)
    // {
    //     cout << i << " -> ";
    //     for (int j = 0; j < AdjMat[i].size(); j++)
    //     {
    //         cout << AdjMat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // doing bfs->breath first search traversal in graph
    // vector<int> bfs = BFSsearch(vertex, AdjMat);
    // for (int i = 0; i < bfs.size(); i++)
    // {
    //     cout << bfs[i] << " ";
    // }
    int node = 0;
    vector<bool> visited(vertex, 0);
    vector<int> ans;
    DFS(node, AdjMat, ans, visited);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}