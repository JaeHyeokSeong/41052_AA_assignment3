from graph import Graph


class BipartiteMatching:

    """
    Input an object of the Graph class
    """
    def __init__(self, graph: Graph):
        self.graph = graph
        self.__visited = [False for i in range(self.graph.number_of_node)]
        self.__result = [-1 for i in range(self.graph.number_of_node)]

    def __dfs(self, node: int) -> bool:
        for neighbor in self.graph.nodes[node]:
            # There is no need to consider nodes that have already been processed
            if self.__visited[neighbor]:
                continue
            # If the nodes is not processed, it is treated as True
            self.__visited[neighbor] = True
            if self.__result[neighbor] == -1 or self.__dfs(self.__result[neighbor]):
                self.__result[neighbor] = node
                return True
        return False

    """
    Return size of the minimum vertex cover
    """
    def get_size_of_the_minimum_vertex_cover(self) -> int:
        size = 0
        for i in range(self.graph.number_of_node):
            self.__visited = [False for i in range(self.graph.number_of_node)]
            if self.__dfs(i):
                size = size + 1
        return size
