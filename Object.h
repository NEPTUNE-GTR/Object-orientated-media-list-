#ifndef OBJECT_h
#define OBJECT_h


class Object 
{

public:
    virtual ~Object() = 0;
    virtual int getId() = 0;
private:

};
inline Object::~Object() { }

#endif