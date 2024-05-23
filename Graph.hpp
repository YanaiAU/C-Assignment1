#pragma once
#include <vector>
#include <stdexcept>
#include <iostream>

namespace ariel {
    class Graph {
    private:
        std::vector<std::vector<int>> adjacencyMatrix;
    public:
        void loadGraph(const std::vector<std::vector<int>>& matrix);
        void printGraph() const;
        const std::vector<std::vector<int>>& getAdjacencyMatrix() const;
    };
}
