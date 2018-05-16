#ifndef NODE_h
#define NODE_h

#include "fileInput.h"

class Node 
{
    friend class LinkedList; //Allows LinkedList to have access to private and protected members of the Node class

    private:
	    Node   * next;
	    Object * data;
        Object * getData();
        Node   * getNextNode();
        void setNextNode(Node * next);
        void displayData();
        ~Node(); 
    public:
        Node(Object * data, Node * next);      
};

#endif