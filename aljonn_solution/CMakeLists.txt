cmake_minimum_required(VERSION 3.26)
project(aljonn_solution)

set(CMAKE_CXX_STANDARD 20)

add_executable(aljonn_solution
        Graph.cpp
        Graph.h
        VertexCover.cpp
        VertexCover.h)
