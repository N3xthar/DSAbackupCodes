#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> m;

    vector<vector<int>> adjacencyList(n + 1);

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        adjacencyList[u].push_back(v);
        
    }

    cout << "\nAdjacency List:\n";

    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (auto ele : adjacencyList[i]) {
            cout << ele << " ";
        }
        cout << "\n";
    }

    return 0;
}
