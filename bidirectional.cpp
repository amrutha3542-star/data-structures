#include <iostream>
#include <list>

class Graph {
    int V;
    std::list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new std::list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v);
}

void Graph::BFS(int s) {
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    std::list<int> queue;
    visited[s] = true;
    queue.push_back(s);

    while (!queue.empty()) {
        s = queue.front();
        std::cout << s << " ";
        queue.pop_front();

        for (auto i = adj[s].begin(); i != adj[s].end(); ++i) {
            if (!visited[*i]) {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    std::cout << "Breadth First Traversal starting from vertex 0: ";
    g.BFS(0);

    return 0;
}
