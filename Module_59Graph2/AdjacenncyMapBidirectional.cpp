#include <bits/stdc++.h>

using namespace std;

class Graph
{
public:
    // adjacency map
    unordered_map<int, vector<int>> adj;

    // add the edge bidirectional
    void add_edge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // now disp function dude ;
    void disp()
    {
        for (auto &pair : adj)
        {
            int node = pair.first;
            cout << node << "->";
            for (auto neigh : pair.second)
            {
                cout << neigh << " ";
            }
        }
    }
};
int main()
{
    // make the object
    Graph graph;
    graph.add_edge(1, 2);
    graph.add_edge(2, 2);
    graph.add_edge(31, 2);
    graph.add_edge(5, 2);
    graph.add_edge(7, 2);
    graph.add_edge(99, 2);
    graph.add_edge(2, 2);
    graph.add_edge(102, 2);
    // now the disp function dude 
    graph.disp();
}
