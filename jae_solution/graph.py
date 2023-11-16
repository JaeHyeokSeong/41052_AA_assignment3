
class Graph:

    """
    number_of_node: input the total number of nodes within.

    In this case, nodes start from 0. For example, if number_of_node = 3,
    the total nodes existing in the graph would be 0, 1, 2
    """
    def __init__(self, number_of_node: int):
        self.number_of_node = number_of_node
        self.nodes = [[] for i in range(number_of_node)]

    """
    node1: Input first node in the edge
    node2: Input the second node in the edge
    """
    def add_edge(self, node1: int, node2: int):
        self.nodes[node1].append(node2)

