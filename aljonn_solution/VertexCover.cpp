//
// Created by Aljonn Santos on 8/11/2023.
//

#include "VertexCover.h"
#include <iostream>

bool isValidVertexCover(const std::vector<int>& vertexCover, const Graph& graph){
    std::vector<Graph::Edge> edges = graph.getEdgeList();
    //set covered = true for the edges covered by the vertex.
    for(int vertex : vertexCover){
        for(Graph::Edge& edge : edges){
            if(edge.u == vertex || edge.v == vertex){
                edge.covered = true;
            }
        }
    }
    //check if there is an uncovered edge.
    for(Graph::Edge edge : edges){
        if (!edge.covered)
            return false;
    }
    return true;
}

//Brute-Force: create all subsets of vertices then check smallest valid cover.
void recursiveMinVertexCover(int vertex, std::vector<int>& tempVertexCover, std::vector<int>& minVertexCover, const Graph& graph){
    //stop recursion when we reach the last vertex of the graph.
    if(vertex == graph.getNumOfVertices()){
        if(isValidVertexCover(tempVertexCover, graph) && tempVertexCover.size() < minVertexCover.size()) {
                minVertexCover = tempVertexCover;
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

