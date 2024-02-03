//
// Created by Isai Gordeev on 03/02/2024.
//

#ifndef GRAPH_NODE_H
#define GRAPH_NODE_H


struct Node {
    int number;
    int weight;

    explicit Node(int number, int w) : number(number), weight(w) {}
};

#endif //GRAPH_NODE_H
