#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <climits>

using namespace std;

#define INF INT_MAX

typedef pair<int, int> pii;

void dijkstra(vector<vector<pii>>& graph, int source) {
    int n = graph.size();
    vector<int> dist(n, INF);
    dist[source] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int w = neighbor.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "Shortest distances from source " << source << " to all other vertices:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Vertex " << i << ": " << dist[i] << "\n";
    }
}

int main() {
    int n = 6; // Number of vertices
    vector<vector<pii>> graph(n);

    // Adding edges to the graph (vertex, weight)
    graph[0].push_back({1, 2});
    graph[0].push_back({2, 5});
    graph[1].push_back({2, 2});
    graph[1].push_back({3, 7});
    graph[2].push_back({4, 1});
    graph[3].push_back({5, 3});
    graph[4].push_back({3, 2});
    graph[4].push_back({5, 5});

    int source = 0; // Source vertex for shortest path calculation

    dijkstra(graph, source);

    return 0;
}
