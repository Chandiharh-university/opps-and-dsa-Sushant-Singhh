#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>>& graph, int n) {
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";
    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        cout << vertex << " ";

        for (int neighbor : graph[vertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main() {
    int n = 6; // Number of vertices
    vector<vector<int>> graph = {
        {1, 2},    // Edges from vertex 0
        {0, 3, 4}, // Edges from vertex 1
        {0, 4},    // Edges from vertex 2
        {1, 5},    // Edges from vertex 3
        {1, 2, 5}, // Edges from vertex 4
        {3, 4}     // Edges from vertex 5
    };

    int startVertex = 0;
    bfs(startVertex, graph, n);

    return 0;
}
