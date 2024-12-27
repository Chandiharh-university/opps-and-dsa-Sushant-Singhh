#include <iostream>
#include <vector>
using namespace std;

void dfsUtil(int vertex, vector<vector<int>>& graph, vector<bool>& visited) {
    visited[vertex] = true;
    cout << vertex << " ";

    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            dfsUtil(neighbor, graph, visited);
        }
    }
}

void dfs(int start, vector<vector<int>>& graph, int n) {
    vector<bool> visited(n, false);
    cout << "DFS Traversal: ";
    dfsUtil(start, graph, visited);
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

   
