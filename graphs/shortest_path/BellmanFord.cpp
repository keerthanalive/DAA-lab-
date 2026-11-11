#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> graph(V, vector<int>(V, INT_MAX / 4));
    for (int i = 0; i < V; i++) graph[i][i] = 0;

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cout << "Enter edge " << i + 1 << " (u v w): ";
        cin >> u >> v >> w;
        graph[u][v] = min(graph[u][v], w);
        graph[v][u] = min(graph[v][u], w);
    }

    vector<int> dist(V, INT_MAX);
    vector<int> parent(V, -1);
    vector<bool> visited(V, false);
    int source;
    cout << "Enter source vertex: ";
    cin >> source;

    dist[source] = 0;
    for (int i = 0; i < V; i++) {
        int minDist = INT_MAX, u = -1;
        for (int j = 0; j < V; j++) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                u = j;
            }
        }
        if (u == -1) break;
        visited[u] = true;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] != INT_MAX / 4 && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    cout << "\nShortest distances from source " << source << ":\n";
    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << ": " << dist[i] << "\n";
    }
    return 0;
}
