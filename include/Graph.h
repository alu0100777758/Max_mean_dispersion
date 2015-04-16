#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include "Node_basic.h"
#include "vertice.h"
class Graph
{
    public:
        Graph();
        virtual ~Graph();
        void addNode(Node_basic nodo);
        void addVertice(vertice vert);
        std::vector<Node_basic> getNodes();
        std::vector<vertice> getVertices();

        std::vector<vertice> getVerticesFrom(Node_basic nodo);
        std::vector<vertice> getVerticesTo(Node_basic nodo);
    protected:
    private:
    std::vector<Node_basic>    _nodes;
    std::vector<vertice> _vertices;
};

#endif // GRAPH_H
