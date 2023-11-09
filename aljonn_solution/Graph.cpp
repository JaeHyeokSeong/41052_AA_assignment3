//
// Created by Aljonn Santos on 8/11/2023.
//

#include "Graph.h"
#include <iostream>

Graph::Graph(int numOfVertices){
    this->numOfVertices = numOfVertices;
     for(int i = 0; i < numOfVertices; i++){
         minVertexCover.push_back(i);
     }
}

//adds edge from i to j, with weight.
void Graph::addEdge(int i, int j){
    //check if valid vertex then add for both since undirected graph.
    if (i >= 0 && i < numOfVertices && j >= 0 && j < numOfVertices && i != j){
        adjList[i].insert(j);
        adjList[j].insert(i);
        edgeList.push_back({i,j,false});
    }
}

std::unordered_set<int> Graph::getNeighbours(int vertex) const{
    return adjList.at(vertex);
}

std::vector<Graph::Edge> Graph::getEdgeList() const{
    return edgeList;
}

std::unordered_map<int, std::unordered_set<int> > Graph::getAdjList() {
    return adjList;
}

int Graph::getNumOfVertices() const{
    return numOfVertices;
}

void Graph::printGraph() {
    std::cout<<"\nGraph with " << numOfVertices << " vertices:\n";
    for(int i = 0; i < numOfVertices; ++i){
        std::cout << "Vertex " << i << ": Neighbours: ";
        for(const auto& neighbour : adjList[i]){
            std::cout<< neighbour << " ";
        }
        std::cout << '\n';
    }
    std::cout<<"\n";
}
