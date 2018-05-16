#include "LinkedList.h"

using namespace std;
using std::string;

//class definition

LinkedList::LinkedList()
{
    top = NULL;
}

void LinkedList::add(Object * data, int number)
{
    //generic unordered add to front of list
    //////////////////////////////////////////////////
    // Node * newNode = new Node(data, top);
    // top            = newNode; 
    //////////////////////////////////////////////////

    //ordered add to list
    Node * curr    = top;
    Node * prev    = NULL;

    while(curr != NULL && curr->getData()->getId() < number)
    {
        prev = curr;
        curr = curr->getNextNode(); 
    }
    if(prev != NULL)
    {
        prev->setNextNode( new Node(data, curr));
    }
    else
    {
        top = new Node(data, curr);
    }
    
}
Object * LinkedList::get(int index)
{
    Object * item;
    Node   * current;
    int      counter;

    current = top;
    if(index >= 0 && index < this->getSize())
    {
        while(counter != index && current != NULL)
        {
            counter++;
            item    = current->getData();
            current = current->getNextNode(); 
        }
    }
    return item;
}
int LinkedList::getSize()
{
    Node * current;

    current     = top;
    int counter = 0;

    while(current != NULL)
    {
        counter++;
        current = current->getNextNode();
    }
    return counter;
}

LinkedList::~LinkedList()
{
    Node * next;
    while (top != NULL)
    {
        next = top->getNextNode();
        delete top;
        top = next;
    }
}
