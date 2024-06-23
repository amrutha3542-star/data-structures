#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> graph = {
        {0, 1, 0, 0},
        {1, 0, 1, 1},
        {0, 1, 0, 1},
        {0, 1, 1, 0}
    };

    int min_edges = 0;
    for (int i = 0; i < graph.size(); ++i) {
        for (int j = i + 1; j < graph[i].size(); ++j) {
            if (graph[i][j] == 1) {
                min_edges++;
            }
        }
    }

    std::cout << "Minimum number of edges in the graph: " << min_edges << std::endl;

    return 0;
}
