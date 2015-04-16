#ifndef SYMMETRIC_CONNECTED_GRAPH_H
#define SYMMETRIC_CONNECTED_GRAPH_H

#include <Graph.h>
#include "Node_basic.h"
#include "vertice.h"

class Symmetric_connected_graph : public Graph
{
    public:
        Symmetric_connected_graph();
        Symmetric_connected_graph(int nodes);
        virtual ~Symmetric_connected_graph();

        void addNode(Node_basic node);
        void addVertice(vertice vert);
    protected:
    private:
};

#endif // SYMMETRIC_CONNECTED_GRAPH_H
