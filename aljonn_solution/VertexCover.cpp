//
// Created by Aljonn Santos on 8/11/2023.
//

#include "VertexCover.h"
#include <iostream>


bool isValidVertexCover(const std::vector<int>& vertexCover, const Graph& graph){
    std::vector<bool> covered(graph.getNumOfVertices(), false);
    for(int vertex : vertexCover){
        for(int neighbour : graph.getNeighbours(vertex)){
            covered.at(neighbour) = true;
        }
    }
    //if there is an uncovered vertex, invalid vertex cover.
    for(auto vertex : covered){
        if(!vertex)
            return false;
    }
    //debugging
    printVector(vertexCover,"Valid Cover: ");
    return true;
}

//Brute-Force: create all subsets of vertices then check smallest valid cover.
void recursiveMinVertexCover(int vertex, std::vector<int>& tempVertexCover, std::vector<int>& minVertexCover, const Graph& graph){
    //stop recursion when we reach the last vertex of the graph.
    if(vertex == graph.getNumOfVertices()){
        if(isValidVertexCover(tempVertexCover, graph) && tempVertexCover.size() < minVertexCover.size()) {
                minVertexCover = tempVertexCover;
                //debugging
                printVector(minVertexCover, "Update Minimum Cover: ");
        }
        return;
    }
    //create subsets: 1 with current vertex, and 1 without current vertex.
    tempVertexCover.push_back(vertex);
    //with current vertex
    recursiveMinVertexCover(vertex + 1, tempVertexCover, minVertexCover, graph);
    tempVertexCover.pop_back();
    //without current vertex
    recursiveMinVertexCover(vertex + 1, tempVertexCover, minVertexCover, graph);
}

//reusable method to print vector for debugging.
void printVector(const std::vector<int>& vec, const std::string& message){
    std::cout<<message;
    for(auto x : vec){
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
}

