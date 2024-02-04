//
// Created by Isai Gordeev on 03/02/2024.
//
#include "../include/graph.h"


Graph::Graph(int vertex_number, std::vector<std::pair<int, int>> adjacencyList, std::vector<int> nodes) {
    this->_vertex_number = vertex_number;
    this->adjacencyList = adjacencyList;

    this->define_vertices(this->_vertex_number);
}

void Graph::define_vertices(int vertex_number)  {
    _nodes_enum = std::vector<int>(vertex_number);
    _nodes = std::vector<Node>(vertex_number, Node());
}
