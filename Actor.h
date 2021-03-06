#ifndef ACTOR_h
#define ACTOR_h

#include "fileInput.h"
#include "Object.h"

class Actor : public Object 
{
    public:
        Actor(std::string familyName, std::string givenName, int birthYear, std::string gender, int id);
        std::string getFamilyName();
        std::string getGivenName();
        std::string getGender();
        int         getBirthYear();
        int         getId();
        ~Actor();
    private:
        std::string familyName;
        std::string givenName;
        std::string gender;
        int         birthYear;
        int         id;
};
#endif