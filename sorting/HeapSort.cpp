#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> graph(V);
    for (int i = 0; i < E; i++) {
        int u, v;
        cout << "Enter edge " << i + 1 << " (u v): ";
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout << "Enter starting vertex: ";
    cin >> start;

    vector<bool> visited(V, false);
    stack<int> st;
    st.push(start);

    cout << "\nDFS traversal: ";
    while (!st.empty()) {
        int u = st.top();
        st.pop();

        if (visited[u]) continue;
        visited[u] = true;
        cout << u << " ";

        for (int i = (int)graph[u].size() - 1; i >= 0; i--) {
            int v = graph[u][i];
            if (!visited[v]) {
                st.push(v);
            }
        }
    }
    cout << "\n";
    return 0;
}
