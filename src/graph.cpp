//
// Created by Isai Gordeev on 03/02/2024.
//
#include "../include/graph.h"


Graph::Graph() {
    this->_vertex_number = 0;
    this->define_vertices(this->_vertex_number);
}

Graph::Graph(int vertex_number) {
    this->_vertex_number = vertex_number;
}


Graph::Graph(int vertex_number, std::vector<std::pair<int, int>> adjacencyList, std::vector<int> weights) {
    this->_vertex_number = vertex_number;
    this->adjacencyList = adjacencyList;
    this->weights = weights;
}


void Graph::define_vertices(int vertex_number)  {
    _nodes_enum = std::vector<int>(vertex_number);
    _nodes = std::vector<Node>(vertex_number, Node());
}


