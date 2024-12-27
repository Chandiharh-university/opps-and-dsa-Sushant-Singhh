#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMinDistance(vector<int>& distances, vector<bool>& visited, int n) {
    int minVertex = -1;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && (minVertex == -1 || distances[i] < distances[minVertex])) {
            minVertex = i;
        }
    }
    return minVertex;
}

void dijkstra(vector<vector<int>>& graph, int n, int src) {
    vector<int> distances(n, INT_MAX);
    vector<bool> visited(n, false);
    distances[src] = 0;

    for (int i = 0; i < n - 1; i++) {
        int minVertex = findMinDistance(distances, visited, n);
        visited[minVertex] = true;

        for (int j = 0; j < n; j++) {
            if (graph[minVertex][j] != 0 && !visited[j] && distances[minVertex] != INT_MAX
                && distances[minVertex] + graph[minVertex][j] < distances[j]) {
                distances[j] = distances[minVertex] + graph[minVertex][j];
            }
        }
    }

    cout << "Vertex \tDistance from Source\n";
    for (int i = 0; i < n; i++) {
        cout << i << " \t" << distances[i] << "\n";
    }
}

int main() {
    int n = 5; // Number of vertices
    vector<vector<int>> graph = {
        {0, 10, 0, 0, 5},
        {0, 0, 1, 0, 2},
        {0, 0, 0, 4, 0},
        {7, 0, 6, 0, 0},
        {0, 3, 9, 2, 0}
    };

    int src = 0; // Source vertex
    dijkstra(graph, n, src);
    return 0;
}
