//
// Created by Isai Gordeev on 28/01/2024.
//

#include "graph.h"
#include <string>
#include <fstream>


#include <iostream>
#include <vector>

class Graph {
private:
    int vertices;
    std::vector<std::vector<int>> adjacencyList;

public:
    Graph(int V) : vertices(V), adjacencyList(V) {}

    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    void dfs(int vertex, std::vector<bool>& visited) {
        visited[vertex] = true;
        std::cout << vertex << " ";

        for (int adjacentVertex : adjacencyList[vertex]) {
            if (!visited[adjacentVertex]) {
                dfs(adjacentVertex, visited);
            }
        }
    }

    void dfsTraversal() {
        std::vector<bool> visited(vertices, false);

        std::cout << "Depth-First Traversal:" << std::endl;
        for (int i = 0; i < vertices; ++i) {
            if (!visited[i]) {
                dfs(i, visited);
            }
        }

        std::cout << std::endl;
    }
};




