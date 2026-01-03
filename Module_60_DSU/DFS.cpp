// This is the code for the dfs dude

#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited)
{

    // mark the visited vector true ;
    visited[node] = true;
    // process the node
    cout << node << " ";

    // now iterate the song dude
    for (auto neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            dfs(neighbour, adj, visited);
        }
    }
}

int main()
{
    // now make the graph dude
    int n = 6;

    // graph edges
    vector<vector<int>> adj(n); // adjacency list

    // graph edges
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 5};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2};
,   
    // now make the bool graph dude
    vector<bool> visited(n, false);

    // call the dfs function dude ;
    dfs(0 , adj , visited);
    return 0;
}
