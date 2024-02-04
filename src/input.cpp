//
// Created by Isai Gordeev on 04/02/2024.
//

#include <iostream>
#include <fstream>
#include <sstream>

#include "../include/utils.h"
#include "../include/input.h"
#include "../include/graph.h"




int initGraph(){

    std::string absoluteInputPath = input_dir(FOLDER_NAME);
    std::string filePath = create_file_name(absoluteInputPath, PREFIX, DEFAULT_FILE_NUMBER, EXT);

    std::ifstream inputFile(filePath);

    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " << filePath << std::endl;
        return 1;
    }


    std::string number;
    std::getline(inputFile, number);

    int vertex_number = std::stoi(number);


    std::vector<std::string> input;
    std::string data;

    std::vector<std::pair<int, int>> adjacency;
    std::vector<int> weights;


    while (std::getline(inputFile, data)) {
        std::cout << "Read from file: " << data << std::endl;
        std::istringstream iss(data);
        int first, second;

        if(iss >> first >> second)
            adjacency.emplace_back(first, second);
        else {
            int weight = std::stoi(data);
            weights.push_back(weight);
        }
    }

    for(auto s : adjacency){
        std::cout << s.first << " " << s.second << std::endl;
    }

    int i = 0;
    for(auto s : weights){
        std::cout << s << " weights " << ++i << std::endl;
    }

    inputFile.close();


    Graph graph = Graph(vertex_number, adjacency, weights);


    return 0;
}
