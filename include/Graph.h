#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "node.h"
#include "vertice.h"
class Graph
{
    public:
        Graph();
        virtual ~Graph();
        std::vector<node> getNodes();
        std::vector<vertice> getVertices();
    protected:
    private:
    std::vector<node>    _nodes;
    std::vector<vertice> _vertices;
};

#endif // GRAPH_H
