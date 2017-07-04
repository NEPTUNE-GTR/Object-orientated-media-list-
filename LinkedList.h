#ifndef LINKEDLIST_h
#define LINKEDLIST_h

#include "Node.h"
#include "fileInput.h"
class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void add(Object * data);
    Object * get(int index);
    int getSize();

private:
    Node * top;
    
};

#endif
