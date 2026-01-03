#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>> adj, int size)
{
    int n = size;
    queue<int> q;
    vector<bool> visited(n, false);

    // marks the index of starting node true
    visited[start] = true;

    // push  the first node dude

    q.push(start);
    while (!q.empty())
    {

        // take the first node dude
        int node = q.front();
        q.pop();
        cout << node << " ";

        // now iterate to all the node
        for (auto neighbour : adj[node])
        {

            // check is this visited or not  dude
            if (!visited[neighbour])
            {
                visited[neighbour] = true;
                // push that node so that start the next level
                q.push(neighbour);
            }
        }
    }
}
int main()
{

    // now make the graph dude
    int n = 6;

    // now make the graph using 2d vector dude

    vector<vector<int>> adj(n);

    // draw the relation ship of edges
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 5};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2};

    // now call the df function dude
    bfs(0, adj, 6);
}