//
// Created by Aljonn Santos on 8/11/2023.
//

#ifndef ALJONN_SOLUTION_VERTEXCOVER_H
#define ALJONN_SOLUTION_VERTEXCOVER_H

#include "Graph.h"

void printVector(const std::vector<int>& vec, const std::string& message);
bool isValidVertexCover(const std::vector<int>& vertexCover, const Graph& graph);
void recursiveMinVertexCover(int vertex, std::vector<int>& tempVertexCover, std::vector<int>& minVertexCover, const Graph& graph);



#endif //ALJONN_SOLUTION_VERTEXCOVER_H
