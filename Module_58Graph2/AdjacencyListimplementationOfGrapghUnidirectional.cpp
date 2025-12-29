// this is the implementation  using list ;
#include <bits/stdc++.h>

using namespace std;

vector<list<int>> graph;

void add_edges(int src, int des, bool bi_dir = true)
{
    graph[src].push_back(des);

    // now is this bir directional or not
    if (bi_dir)
    {
        graph[des].push_back(src);
    }
}

// not the display function
void display()
{
    for (int i = 0; i < graph.size(); i++)
    {
        cout << i << "->";
        for (auto el : graph[i])
        {
            cout << " " << el;
        }
        cout << "\n";
    }
}

int main()
{
    int v, e;
    cout << "Enter the vertex";
    cin >> v;
    cout << "Enter the edges ";
    cin >> e;
    graph.resize(v);

    // read the edges
    while (e--)
    {  
        int s, d; // s for the source and d for the destination
        cout << "Enter the source ";

        cin >> s;

        cout << "Enter the destination";
        cin >> d;
        add_edges(s, d);
    }
    cout<<"The graph is \n";
    display();
    return 0;
}