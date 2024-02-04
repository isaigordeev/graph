//
// Created by Isai Gordeev on 28/01/2024.
//

#ifndef GRAPH_UTILS_H
#define GRAPH_UTILS_H

#include <string>

std::string create_file_name(std::string& path, const char *prefix, const char *number, const std::string& ext);
std::string input_dir(const std::string& folderName);
std::string main_dir();


#endif //GRAPH_UTILS_H
