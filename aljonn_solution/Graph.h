//
// Created by Aljonn Santos on 8/11/2023.
//

#ifndef ALJONN_SOLUTION_GRAPH_H
#define ALJONN_SOLUTION_GRAPH_H


#include <unordered_map>
#include <unordered_set>
#include <list>

class Graph {

public:
    struct Edge{
        int v {};
        int u {};
        bool covered = false;
    };

    explicit Graph(int numOfVertices);
    void addEdge(int i, int j);
    std::unordered_map<int, std::unordered_set<int> > getAdjList();
    void printGraph();
    int getNumOfVertices() const;
    std::unordered_set<int> getNeighbours(int vertex) const;
    std::vector<int> tempVertexCover;
    std::vector<int> minVertexCover;
    std::vector<Graph::Edge> getEdgeList() const;

private:
    std::unordered_map<int, std::unordered_set<int> > adjList;
    int numOfVertices;
    std::vector<Graph::Edge> edgeList;



};



#endif //ALJONN_SOLUTION_GRAPH_H
