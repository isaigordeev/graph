cmake_minimum_required(VERSION 3.24)
project(graph)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
        ./src/main.cpp
        ./src/input.cpp
        ./src/graph.cpp
        ./src/utils.cpp
        )

set(HEADERS
#        include/YourHeaderFile.h
        ./include/utils.h
        ./include/node.h
        )

add_executable(graph ${SOURCES} ${HEADERS})
