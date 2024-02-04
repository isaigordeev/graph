//
// Created by Isai Gordeev on 03/02/2024.
//

#include <iostream>
#include <vector>
#include <map>
#include <utility>
//#include "include/graph.h"


using namespace std;

struct Edge {
    int number;
    int weight;

    explicit Edge(int number, int w) : number(number), weight(w) {}
};

//class Graph {
private:
    int vertex_number;
    vector<Edge> nodes;
    map<Edge, Edge> adjacencyList;

public:



    explicit Graph(int vertex_number, vector<pair<int, int>> adjacencyList, vector<int> nodes){
        this->vertex_number = vertex_number;
    }

    void addEdge(int number, int weight) {
        nodes.emplace_back(number, weight);
    }

    // Function to display the weighted graph
    void displayGraph() {
        for (const auto &entry : adjacencyList) {
            cout << "Vertex " << entry.first << " is connected to:\n";
            for (const Edge &edge : entry.second) {
                cout << " with weight " << edge.weight << "\n";
            }
        }
    }
};


int main() {
    Graph graph;

    // Adding edges with weights
    graph.addEdge(0, 1, 2);
    graph.addEdge(0, 2, 5);
    graph.addEdge(1, 2, 1);
    graph.addEdge(1, 3, 4);
    graph.addEdge(2, 3, 3);

    // Displaying the graph
    graph.displayGraph();

    return 0;
}
