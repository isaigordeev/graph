//
// Created by Isai Gordeev on 04/02/2024.
//

#include <iostream>
#include <fstream>

#include "../include/utils.h"
#include "../include/input.h"
//#include "../include/graph.h"




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

    std::string data;
    while (std::getline(inputFile, data)) {
        std::cout << "Read from file: " << data << std::endl;
    }

    inputFile.close();

    return 0;
}
