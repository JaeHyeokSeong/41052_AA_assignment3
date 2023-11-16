from graph import Graph
from bipartiteMatching import BipartiteMatching
from unittest import TestCase
import unittest

class MyTests(TestCase):

    def test_graph_add_edge(self):
        # setup
        number_of_node = 3
        g_setup = [[0, 1, 2], [0], [1]]
        g = Graph(number_of_node)

        # process
        for i in range(number_of_node):
            for j in g_setup[i]:
                g.add_edge(i, j)

        # result
        for i in range(number_of_node):
            self.assertEqual(g.nodes[i], g_setup[i])

    def test_min_vertex_size_case1(self):
        # setup
        number_of_node = 3
        g_setup = [[0, 1, 2], [0], [1]]
        g = Graph(number_of_node)
        for i in range(number_of_node):
            for j in g_setup[i]:
                g.add_edge(i, j)
        b = BipartiteMatching(g)

        # process
        actual_value = b.get_size_of_the_minimum_vertex_cover()

        # result
        self.assertEqual(actual_value, 3)

    def test_min_vertex_size_case2(self):
        # setup
        number_of_node = 5
        g_setup = [[0, 1], [0], [1, 2], [2, 3, 4], [0]]
        g = Graph(number_of_node)
        for i in range(number_of_node):
            for j in g_setup[i]:
                g.add_edge(i, j)
        b = BipartiteMatching(g)

        # process
        actual_value = b.get_size_of_the_minimum_vertex_cover()

        # result
        self.assertEqual(actual_value, 4)

    def test_min_vertex_size_case3(self):
        # setup
        number_of_node = 1
        g_setup = [[]]
        g = Graph(number_of_node)
        for i in range(number_of_node):
            for j in g_setup[i]:
                g.add_edge(i, j)
        b = BipartiteMatching(g)

        # process
        actual_value = b.get_size_of_the_minimum_vertex_cover()

        # result
        self.assertEqual(actual_value, 0)

    def test_min_vertex_size_case4(self):
        # setup
        number_of_node = 1
        g_setup = [[0]]
        g = Graph(number_of_node)
        for i in range(number_of_node):
            for j in g_setup[i]:
                g.add_edge(i, j)
        b = BipartiteMatching(g)

        # process
        actual_value = b.get_size_of_the_minimum_vertex_cover()

        # result
        self.assertEqual(actual_value, 1)


if __name__ == '__main__':
    unittest.main()
