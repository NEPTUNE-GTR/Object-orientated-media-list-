#ifndef ACTOR_h
#define ACTOR_h

#include "fileInput.h"
#include "Object.h"


class Actor : Object 
{
    public:
        Actor(string familyName, string givenName, int birthYear, string gender)

    private:
        string familyName;
        string givenName;
        string gender;
        int    birthYear;


}




#endif