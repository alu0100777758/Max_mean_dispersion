#ifndef NODE_BASIC_H
#define NODE_BASIC_H

#include <node.h>


class Node_basic : public node
{
public:
    Node_basic(int id);
    virtual ~Node_basic();
    unsigned int getid(){return _id;}
    void setid(unsigned int val){_id = val;}
    friend bool operator== (Node_basic &nodo1, Node_basic &nodo2);
    friend bool operator!= (Node_basic &nodo1, Node_basic &nodo2);
    virtual bool equals(Node_basic nodo1);
protected:
private:
    int _id;
};
#endif // NODE_BASIC_H
