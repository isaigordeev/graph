//
// Created by Isai Gordeev on 28/01/2024.
//

#include "utils.h"
#include <string>

std::string create_file_name(std::string& path, std::string& prefix, int& number, std::string& ext){
    std::cout << ext;
    return path + "/" + prefix + std::to_string(number) + ext;
}

std::string main_dir(){
    try {
        std::filesystem::path executablePath = std::filesystem::canonical(std::filesystem::path());
        std::filesystem::path executableDirectory = executablePath.parent_path();
        std::cout << "Directory of main.cpp: " << executableDirectory.string() << std::endl;
        return executableDirectory.string();
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return "";
    }
}

std::string input_dir(const std::string& folderName){
    try {

        std::filesystem::path currentWorkingDirectory = std::filesystem::current_path();
        std::filesystem::path targetFolder;
        for (auto currentPath = currentWorkingDirectory; !currentPath.empty(); currentPath = currentPath.parent_path()) {
            std::filesystem::path potentialFolder = currentPath / folderName;
            if (std::filesystem::exists(potentialFolder) && std::filesystem::is_directory(potentialFolder)) {
                targetFolder = potentialFolder;
                break;
            }
        }

        if (!targetFolder.empty()) {
            std::cout << "Directory of '" << folderName << "': " << targetFolder.string() << std::endl;
            return targetFolder.string();
        } else {
            std::cerr << "Folder '" << folderName << "' not found in the current working directory or its parents." << std::endl;
            return "";
        }
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return "";
    }
}


