#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int src, dest, weight;
};

bool compare(Edge e1, Edge e2) {
    return e1.weight < e2.weight;
}

int findParent(int vertex, vector<int>& parent) {
    if (parent[vertex] == vertex)
        return vertex;
    return findParent(parent[vertex], parent);
}

void kruskalMST(vector<Edge>& edges, int n) {
    sort(edges.begin(), edges.end(), compare);

    vector<Edge> result;
    vector<int> parent(n);
    for (int i = 0; i < n; i++)
        parent[i] = i;

    for (Edge edge : edges) {
        int srcParent = findParent(edge.src, parent);
        int destParent = findParent(edge.dest, parent);

        if (srcParent != destParent) {
            result.push_back(edge);
            parent[srcParent] = destParent;
        }
    }

    cout << "Edge \tWeight\n";
    for (Edge edge : result) {
        cout << edge.src << " - " << edge.dest << " \t" << edge.weight << "\n";
    }
}

int main() {
    int n = 4; // Number of vertices
    vector<Edge> edges = {
        {0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}
    };

    kruskalMST(edges, n);
    return 0;
}
