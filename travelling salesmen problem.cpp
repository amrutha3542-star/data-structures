#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = 1e9;

int tsp(vector<vector<int>>& graph, int start) {
    int n = graph.size();
    vector<int> cities;
    for (int i = 0; i < n; ++i) {
        if (i != start) {
            cities.push_back(i);
        }
    }

    int min_cost = INF;
    do {
        int cost = graph[start][cities[0]] + graph[cities.back()][start];
        for (int i = 0; i < n - 2; ++i) {
            cost += graph[cities[i]][cities[i + 1]];
        }
        min_cost = min(min_cost, cost);
    } while (next_permutation(cities.begin(), cities.end()));

    return min_cost;
}

int main() {
    vector<vector<int>> graph = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int start_city = 0;
    int min_path_cost = tsp(graph, start_city);

    cout << "Minimum cost for the Travelling Salesman Problem starting from city " << start_city << " is: " << min_path_cost << endl;

    return 0;
}
