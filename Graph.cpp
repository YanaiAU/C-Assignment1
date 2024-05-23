#include "Graph.hpp"

namespace ariel {
    void Graph::loadGraph(const std::vector<std::vector<int>>& matrix) {
        size_t size = matrix.size();
        for (const auto& row : matrix) {
            if (row.size() != size) {
                throw std::invalid_argument("Invalid graph: The graph is not a square matrix.");
            }
        }
        adjacencyMatrix = matrix;
    }

    void Graph::printGraph() const {
        size_t vertices = adjacencyMatrix.size();
        size_t edges = 0;
        for (const auto& row : adjacencyMatrix) {
            for (int val : row) {
                if (val != 0) {
                    edges++;
                }
            }
        }
        std::cout << "Graph with " << vertices << " vertices and " << edges / 2 << " edges." << std::endl;
    }

    const std::vector<std::vector<int>>& Graph::getAdjacencyMatrix() const {
        return adjacencyMatrix;
    }
}
