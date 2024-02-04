//
// Created by Isai Gordeev on 03/02/2024.
//

#ifndef GRAPH_GRAPH_H
#define GRAPH_GRAPH_H

#include <iostream>
#include <vector>
#include <map>

#include "node.h"


class Graph {
private:
    int _vertex_number;
    std::vector<int> _nodes_enum;
    std::vector<Node> _nodes;
    std::vector<std::pair<int, int>> adjacencyList;
    std::map<Node, Node> _adjacency;

public:
    explicit Graph(int vertex_number, std::vector<std::pair<int, int>> adjacencyList, std::vector<int> nodes);

    void define_vertices(int vertex_number);

};

#endif //GRAPH_GRAPH_H
