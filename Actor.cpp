#include "Actor.h"

using namespace std;
using std::string;

//class defenition
Actor::Actor(string family, string given, int Year, string gen)
{
    familyName = family;
    givenName  = given;
    birthYear  = Year;
    gender     = gen;
}
string Actor::getFamilyName()
{
    return familyName;
}
string Actor::getGivenName()
{
    return givenName;
}
int Actor::getBirthYear()
{
    return birthYear;
}
string Actor::getGender()
{
    return gender;
}
Actor::~Actor()
{
    int x = 1;
}