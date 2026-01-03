#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> &graph, vector<bool> &visited)
{

    // mark the vector that contain the index = true

    visited[node] = true;

    // process the node dude
    cout << node << " ";

    // now go to the depth dude
    for (auto neighbour : graph[node])
    {
        // check is this is visited or not
        if (!visited[neighbour])
        {
            // call the dfs to the depth dude
            dfs(neighbour, graph, visited);
        }
    }
}

// now go to the main function dude 
int main(){
    int size  = 6 ;
    vector<vector<int>>graph(size);
     graph[0] = {1, 2};
    graph[1] = {0, 3, 4};
    graph[2] = {0, 5};
    graph[3] = {1};
    graph[4] = {1};
    graph[5] = {2};
    // now make the global vector that contain  the graph is visited or  not dude 
    vector<bool>visited(size,false);

    // call the dfs dude 
    dfs(0,graph,visited);
    return 0 ;




}