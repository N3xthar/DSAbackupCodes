#include <bits/stdc++.h>

using namespace std;

class DSU
{
    vector<int> parent, rank, size;

public:
    // make the constructor dude
    DSU(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        size.resize(n, 1); // har node ka initial size = 1 ;

        // make each node is of its own parents
        for (int i = 0; i < n; i++)
        {
            parent[i] = i;
        }
    }

    // function with path compression dude
    int find(int x)
    {
        if (parent[x] != x)
        {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    // function union by rank plus size implementation
    void unite(int x, int y)
    {
        int px = find(x);
        int py = find(y);

        // if both are same component than no need to do union dude
        if (px == py)
            return;

        // now attach according to rank
        if (rank[px] < rank[py])
        {
            parent[px] = py;
            size[py] += size[px];
        }
        else if (rank[px] > rank[py])
        {
            parent[px] = py;
            size[py] += size[px];
        }
        else
        {
            // if both have same size

            parent[py] = px;
            rank[px]++;
            size[px] += size[py];
        }
    }

    // function for getting size
    int getSize(int x)
    {
        int px = find(x);
        return size[x];
    }
};

int main()
{
    DSU dsu(7);
    dsu.unite(1, 2);
    dsu.unite(3, 4);
    dsu.unite(4, 4);
    cout<<dsu.getSize(1);
    
}