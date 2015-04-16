#ifndef NODE_BASIC_H
#define NODE_BASIC_H

#include <node.h>


class Node_basic : public node
{
    public:
        Node_basic(int id);
        virtual ~Node_basic();
        unsigned int Getid() { return _id; }
        void Setid(unsigned int val) { _id = val; }
    protected:
    private:
        int _id;
};

#endif // NODE_BASIC_H
