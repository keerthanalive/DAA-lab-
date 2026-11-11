#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter number of vertices: ";
    cin >> n;

    vector<vector<int>> dist(n, vector<int>(n, INT_MAX / 4));
    for (int i = 0; i < n; i++) dist[i][i] = 0;

    cout << "Enter adjacency matrix (if no edge, enter 9999):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
            if (dist[i][j] == 9999) dist[i][j] = INT_MAX / 4;
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] != INT_MAX / 4 && dist[k][j] != INT_MAX / 4) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    cout << "\nAll-pairs shortest paths:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] >= INT_MAX / 4) cout << "INF\t";
            else cout << dist[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
