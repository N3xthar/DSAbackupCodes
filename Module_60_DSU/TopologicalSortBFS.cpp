#include <bits/stdc++.h>
using namespace std;

// Har node ka indegree nikalo

// Jiska indegree = 0 → queue me daalo

// Ek-ek karke remove karo

// Neighbours ka indegree kam karo

// make a vector to store topological order // making it global dude !!

vector<int> topo;

vector<int> topoSort(int v, vector<vector<int>> &adj)
{
    vector<int> indegree(v, 0);
    // first calculate the indegree dude
    for (int u = 0; u < v; u++)
    {
        for (auto neigh : adj[u])
        {
            indegree[neigh]++;
        }
    }

    // make a queue and push it into queue having indegre 0 dude ;
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    // iterate to all the node having zero indegree dude
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        // put into in the sorting vector
        topo.push_back(node);

        // now put the node which has inplace is equal is 0
        for (auto neighbour : adj[node])
        {
            //  reduce inplace vector by one dude
            indegree[neighbour]--;
            if (indegree[neighbour] == 0)
            {
                // if indegree become then put into queue
                q.push(neighbour);
            }
        }
    }
    if (topo.size() != v)
    {
        cout << "Cycle exists ";
    }
    return topo;
}

int main()
{
    int n = 6;
    vector<vector<int>> adj(n);

    // draw the relation ship of edges
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 5};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2};

    topoSort(n, adj);
    cout<<"\n";
    // printing the vector dude 
    for(int i = 0 ;i < topo.size();i++){
        cout<<topo[i]<<" ";
        
    }
    cout<<"\n";
}