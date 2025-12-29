
#include <bits/stdc++.h>
using namespace std ;
class Graph{
    public:
    unordered_map<int,vector<int>>adj;

    void add_edges(int u , int v ){
        adj[u].push_back(v);
    }
    // now display function dude 
    void display (){
        for(auto &pair : adj){
            cout<<pair.first<<"->";
            for (auto node : pair.second){
                cout<<node<<" ";
            }
            cout<<"\n";

        }
        cout<<"\n";
    }

};

int main(){
    Graph graph ;
    graph.add_edges(2,4);
    graph.add_edges(1,4);
    graph.add_edges(5,4);
    graph.add_edges(6,4);
    graph.add_edges(9,4);
    graph.add_edges(11,4);
    // now call the display function dude 
    graph.display();
    

}