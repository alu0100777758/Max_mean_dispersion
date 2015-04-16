#include "vertice.h"

vertice::vertice()
{
    //ctor
}

vertice::~vertice()
{
    //dtor
}
vertice::vertice(node* start, node* endn, int cost):_start(start),_end(endn),_cost(cost)
{

}

node* vertice::getStart()
{
    return _start;
}

node* vertice::getEnd()
{
    return _end;
}

int vertice::getCost()
{
    return _cost;
}
bool vertice::equals(vertice other)
{
    return (((getStart() == other.getStart()) && (getEnd() == other.getEnd()))&& getCost() == other.getCost()) ;
}
bool operator== (vertice vertice1, vertice vertice2){
    return vertice1.equals(vertice2);
}
bool operator!= (vertice vertice1, vertice vertice2){
    return !(vertice1 == vertice2);
}
