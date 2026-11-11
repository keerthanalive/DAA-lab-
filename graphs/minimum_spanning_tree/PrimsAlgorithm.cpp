#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<pair<int, int>>> graph(V + 1);
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cout << "Enter edge " << i + 1 << " (u v w): ";
        cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    vector<int> key(V + 1, INT_MAX);
    vector<int> parent(V + 1, -1);
    vector<bool> inMST(V + 1, false);

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    key[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (inMST[u]) continue;
        inMST[u] = true;

        for (auto [v, w] : graph[u]) {
            if (!inMST[v] && w < key[v]) {
                key[v] = w;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    int mstCost = 0;
    cout << "\nMinimum Spanning Tree:\n";
    for (int i = 1; i <= V; i++) {
        if (i != start) {
            cout << parent[i] << " - " << i << " (weight " << key[i] << ")\n";
            mstCost += key[i];
        }
    }
    cout << "Total MST cost: " << mstCost << "\n";
    return 0;
}
