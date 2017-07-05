#include "Node.h"


using namespace std;
using std::string;

//class definition

Node::Node(Object * data, Node * next)
{
    this->data = data;
    this->next = next;
}
void Node::displayData()
{
    cout << data << endl;
}
Object * Node::getData()
{
    return data;
}
Node * Node::getNextNode()
{
    return next;
}
void Node::setNextNode(Node * next)
{
    this->next = next;
}
Node::~Node()
{
    delete data;
    delete next;
}
        