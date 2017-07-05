#ifndef LINKEDLIST_h
#define LINKEDLIST_h

#include "Node.h"
#include "fileInput.h"
class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void add(Object * data, int number);
    Object * get(int index);
    int getSize();

private:
    Node * top;  
};

#endif
