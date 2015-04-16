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
