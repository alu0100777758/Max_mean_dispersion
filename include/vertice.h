#ifndef VERTICE_H
#define VERTICE_H

#include "node.h"
class vertice
{
    public:
        vertice();
        vertice(node* start, node* endn,int cost );
        virtual ~vertice();
        node* getStart();
        node* getEnd();
        int  getCost();
    protected:
    private:
    node*   _start;
    node*   _end;
    int     _cost;
};

#endif // VERTICE_H
