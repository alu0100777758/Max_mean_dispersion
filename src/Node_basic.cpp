#include "Node_basic.h"

#include <iostream>
Node_basic::Node_basic(int id):_id(id)
{
}
Node_basic::~Node_basic()
{

}
bool Node_basic::equals(Node_basic nodo1)
{
    return getid() == nodo1.getid();
}
bool operator== (Node_basic &nodo1, Node_basic &nodo2)
{
    return nodo1.equals(nodo2);
}

bool operator!= (Node_basic &nodo1, Node_basic &nodo2)
{
    return !(nodo1 == nodo2);
}
