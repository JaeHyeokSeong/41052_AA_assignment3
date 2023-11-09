//
// Created by Aljonn Santos on 9/11/2023.
//
#include <iostream>
#include <gtest/gtest.h>
#include "Graph.h"
#include "VertexCover.h"

TEST(MinimumVertexCover, SevenVertices1){
    Graph myGraph(7);
    myGraph.addEdge(0,1);
    myGraph.addEdge(1,2);
    myGraph.addEdge(2,3);
    myGraph.addEdge(2,4);
    myGraph.addEdge(3,4);
    myGraph.addEdge(4,5);
    myGraph.addEdge(3,5);
    myGraph.addEdge(3,6);

    myGraph.printGraph();
    recursiveMinVertexCover(0, myGraph.tempVertexCover, myGraph.minVertexCover, myGraph);

    printVector(myGraph.minVertexCover, "Minimum Cover: ");
    EXPECT_EQ(myGraph.minVertexCover.size(), 3);
}

TEST(MinimumVertexCover, SixVertices){
    Graph myGraph(6);
    myGraph.addEdge(0,4);
    myGraph.addEdge(0,1);
    myGraph.addEdge(1,3);
    myGraph.addEdge(1,5);
    myGraph.addEdge(3,2);

    myGraph.printGraph();
    recursiveMinVertexCover(0, myGraph.tempVertexCover, myGraph.minVertexCover, myGraph);

    printVector(myGraph.minVertexCover, "Minimum Cover: ");
    EXPECT_EQ(myGraph.minVertexCover.size(), 3);
}

TEST(MinimumVertexCover, SevenVertices2){
    Graph myGraph(7);
    myGraph.addEdge(1,0);
    myGraph.addEdge(1,3);
    myGraph.addEdge(0,2);
    myGraph.addEdge(2,6);
    myGraph.addEdge(6,4);
    myGraph.addEdge(6,5);
    myGraph.addEdge(3,4);
    myGraph.addEdge(4,5);

    myGraph.printGraph();
    recursiveMinVertexCover(0, myGraph.tempVertexCover, myGraph.minVertexCover, myGraph);

    printVector(myGraph.minVertexCover, "Minimum Cover: ");
    EXPECT_EQ(myGraph.minVertexCover.size(), 4);
}

TEST(MinimumVertexCover, EightVertices) {
    Graph myGraph(8);
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 2);
    myGraph.addEdge(1, 3);
    myGraph.addEdge(2, 4);
    myGraph.addEdge(3, 4);
    myGraph.addEdge(3, 5);
    myGraph.addEdge(4, 6);
    myGraph.addEdge(5, 7);

    myGraph.printGraph();
    recursiveMinVertexCover(0, myGraph.tempVertexCover, myGraph.minVertexCover, myGraph);

    printVector(myGraph.minVertexCover, "Minimum Cover: ");
    EXPECT_EQ(myGraph.minVertexCover.size(), 4);
}

TEST(MinimumVertexCover, TenVertices) {
    Graph myGraph(10);
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 2);
    myGraph.addEdge(1, 3);
    myGraph.addEdge(2, 4);
    myGraph.addEdge(3, 4);
    myGraph.addEdge(3, 5);
    myGraph.addEdge(4, 6);
    myGraph.addEdge(5, 7);
    myGraph.addEdge(6, 8);
    myGraph.addEdge(7, 9);

    myGraph.printGraph();
    recursiveMinVertexCover(0, myGraph.tempVertexCover, myGraph.minVertexCover, myGraph);

    printVector(myGraph.minVertexCover, "Minimum Cover: ");
    EXPECT_EQ(myGraph.minVertexCover.size(), 5);
}

TEST(MinimumVertexCover, TwelveVertices) {
    Graph myGraph(12);
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 2);
    myGraph.addEdge(1, 3);
    myGraph.addEdge(2, 4);
    myGraph.addEdge(3, 4);
    myGraph.addEdge(3, 5);
    myGraph.addEdge(4, 6);
    myGraph.addEdge(5, 7);
    myGraph.addEdge(6, 8);
    myGraph.addEdge(7, 9);
    myGraph.addEdge(8, 10);
    myGraph.addEdge(9, 11);

    myGraph.printGraph();
    recursiveMinVertexCover(0, myGraph.tempVertexCover, myGraph.minVertexCover, myGraph);

    printVector(myGraph.minVertexCover, "Minimum Cover: ");
    EXPECT_EQ(myGraph.minVertexCover.size(), 6);
}

TEST(MinimumVertexCover, FifteenVertices) {
    Graph myGraph(15);
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 2);
    myGraph.addEdge(1, 3);
    myGraph.addEdge(2, 4);
    myGraph.addEdge(3, 4);
    myGraph.addEdge(3, 5);
    myGraph.addEdge(4, 6);
    myGraph.addEdge(5, 7);
    myGraph.addEdge(6, 8);
    myGraph.addEdge(7, 9);
    myGraph.addEdge(8, 10);
    myGraph.addEdge(9, 11);
    myGraph.addEdge(10, 12);
    myGraph.addEdge(11, 13);
    myGraph.addEdge(12, 14);

    myGraph.printGraph();
    recursiveMinVertexCover(0, myGraph.tempVertexCover, myGraph.minVertexCover, myGraph);

    printVector(myGraph.minVertexCover, "Minimum Cover: ");
    EXPECT_EQ(myGraph.minVertexCover.size(), 7);
}

TEST(MinimumVertexCover, MoreEdges2) {
    Graph myGraph(12);
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 2);
    myGraph.addEdge(0, 3);
    myGraph.addEdge(1, 4);
    myGraph.addEdge(2, 5);
    myGraph.addEdge(3, 6);
    myGraph.addEdge(4, 7);
    myGraph.addEdge(5, 8);
    myGraph.addEdge(6, 9);
    myGraph.addEdge(7, 10);
    myGraph.addEdge(8, 11);

    myGraph.printGraph();
    recursiveMinVertexCover(0, myGraph.tempVertexCover, myGraph.minVertexCover, myGraph);

    printVector(myGraph.minVertexCover, "Minimum Cover: ");
    EXPECT_EQ(myGraph.minVertexCover.size(), 6);
}

TEST(MinimumVertexCover, MoreEdges3) {
    Graph myGraph(15);
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 2);
    myGraph.addEdge(1, 3);
    myGraph.addEdge(2, 4);
    myGraph.addEdge(3, 4);
    myGraph.addEdge(3, 5);
    myGraph.addEdge(4, 6);
    myGraph.addEdge(4, 7);
    myGraph.addEdge(6, 8);
    myGraph.addEdge(8, 9);
    myGraph.addEdge(9, 10);
    myGraph.addEdge(10, 11);
    myGraph.addEdge(11, 12);
    myGraph.addEdge(12, 13);
    myGraph.addEdge(13, 14);

    myGraph.printGraph();
    recursiveMinVertexCover(0, myGraph.tempVertexCover, myGraph.minVertexCover, myGraph);

    printVector(myGraph.minVertexCover, "Minimum Cover: ");
    EXPECT_EQ(myGraph.minVertexCover.size(), 7);
}


int main(int argc, char* argv[]) {
    std::cout << "Brute Force Algorithm for Minimum Vertex Cover" << std::endl;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}