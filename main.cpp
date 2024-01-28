#include <iostream>
#include <string>
#include <fstream>
#include "utils.cpp"
#include <unistd.h>
#include <filesystem>

int main() {
    std::string folderName = "INF421_PI_tests";
    std::string relative_path = "INF421_PI_tests/";
    std::string prefix = "centers.";
    std::string ext = ".in";
    int defaultFileNumber = 1;

    std::string defaultPath = "/Users/isaigordeev/Desktop/2023/graph/INF421_PI_tests/centers.1.in";

    std::string absoluteInputPath = input_dir(folderName);
    std::string filePath = create_file_name(absoluteInputPath, prefix, defaultFileNumber, ext);

    std::ifstream inputFile(filePath);


    if (!inputFile.is_open()) {
        std::cerr << "Error opening file: " << filePath << std::endl;
        return 1;
    }


    std::string data;
    while (std::getline(inputFile, data)) {
        std::cout << "Read from file: " << data << std::endl;
    }

    inputFile.close();

    return 0;
}