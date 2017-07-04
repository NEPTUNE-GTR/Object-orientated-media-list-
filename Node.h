#ifndef NODE_h
#define NODE_h

#include "fileInput.h"

class Node 
{
    private:
	    Node   * next;
	    Object * data;
    public:
        Node(Object * data, Node * next);
        displayData();
        Object * getData();
        Node   * getNextNode();
        setNextNode(Node * next);
        ~Node();       
};

#endif