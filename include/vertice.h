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
        friend bool operator== (vertice vertice1, vertice vertice2);
        friend bool operator!= (vertice vertice1, vertice vertice2);
        virtual bool equals(vertice vertice1);
    protected:
    private:
    node*   _start;
    node*   _end;
    int     _cost;
};

#endif // VERTICE_H
