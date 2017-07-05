#ifndef OBJECT_h
#define OBJECT_h


class Object 
{

public:
    virtual ~Object() = 0;
    int id;
};
inline Object::~Object() { }

#endif