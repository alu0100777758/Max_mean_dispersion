#include "Graph.h"

Graph::Graph()
{
    //ctor
}

Graph::~Graph()
{
    //dtor
}
void Graph::addNode(Node_basic nodo)
{
    _nodes.push_back(nodo);
}

void Graph::addVertice(vertice vert)
{
    _vertices.push_back(vert);
}

std::vector<Node_basic> Graph::getNodes()
{
    return _nodes;
}

std::vector<vertice> Graph::getVertices()
{
    return _vertices;
}
std::vector<vertice> Graph::getVerticesFrom(Node_basic nodo)
{
    std::vector<vertice> solution;
    for(unsigned int i = 0; i < getVertices().size(); i++){
       if(nodo == (*static_cast<Node_basic *>(getVertices().at(i).getStart()))){
            solution.push_back(getVertices().at(i));
       }
    }
    return solution;
}

std::vector<vertice> Graph::getVerticesTo(Node_basic nodo)
{
    std::vector<vertice> solution;
    for(unsigned int i = 0; i < getVertices().size(); i++){
       if(nodo == (*static_cast<Node_basic *>(getVertices().at(i).getEnd()))){
            solution.push_back(getVertices().at(i));
       }
    }
    return solution;
}
