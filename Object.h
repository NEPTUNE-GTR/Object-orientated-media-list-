#ifndef OBJECT_h
#define OBJECT_h


class Object 
{

public:
    virtual ~Object() = 0;
};
inline Object::~Object() { }

#endif