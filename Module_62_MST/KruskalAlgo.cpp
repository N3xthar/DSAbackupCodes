#include <bits/stdc++.h>
using namespace std;

// making my own data type for edges

struct Edges
{
    int src, dest, weight;
};

// making a comparator dude !
bool comp(Edges a, Edges b)
{
    return a.weight < b.weight;
}

// DSU  find path compression
int findParent(int node, vector<int> &parent)
{
    if (parent[node] == node)
        return node;
    return parent[node] = findParent(parent[node], parent);
}

// function for union dude
void UnionSet(int u, int v, vector<int> &parent, vector<int> &rank)
{
     u = findParent(u, parent);
     v = findParent(v, parent);
    if (u != v)
    {
        if (rank[u] < rank[v])
            parent[u] = v;
        else if (rank[u] > rank[v])
            parent[v] = u;
        else
        {
            parent[v] = u;
            rank[u]++;
        }
    }
}

// now implementation of KRUSKAL ALGORITHM
int kruskal(int n, vector<Edges> &edges)
{
    // sort the edges
    sort(edges.begin(), edges.end(),comp);
    // making the vector
    vector<int> parent(n);
    vector<int> rank(n, 0);

    // making the each node of its own
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        rank[i] = 0;
    }
    int edgeCount = 0;
    int mstWeight = 0;
    for (int i = 0; i < edges.size() && edgeCount < n - 1; i++)
    {
        Edges curr = edges[i];
        int pu = findParent(curr.src, parent);
        int pv = findParent(curr.dest, parent);
        if (pu != pv)
        {

            mstWeight += curr.weight;
            UnionSet(pu, pv, parent, rank);
            edgeCount++;
        }
    }
    return mstWeight;
}
int main()
{
    int n = 4;
    vector<Edges> edges = {
        {0, 1, 10}, {0, 2, 0}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}};
    cout << "MST Weight is " << kruskal(n, edges);
    return 0;
}