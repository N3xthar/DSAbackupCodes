// this is the code of bfs dude !!

#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>> &adj, int size)
{
    int n = size;

    // making queue for level order  traversal
    queue<int> q;

    // making a visited array for keeping track
    vector<int> visited(n, false);

    // start the queue using visited node
    visited[start] = true;

    q.push(start);

    // now make  a while loop
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // now iterate to neighbour
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}
int main()
{
    int  n  = 6;
    vector<vector<int>> adj(n);

    // draw the relation ship of edges 
     adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 5};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2};

    bfs(0 ,  adj , 6 );
    return  0 ;
}