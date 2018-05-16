#include "Actor.h"

using namespace std;
using std::string;

//class defenition
Actor::Actor(string familyName, string givenName, int birthYear, string gender, int id)
{
    this->familyName = familyName;
    this->givenName  = givenName;
    this->birthYear  = birthYear;
    this->gender     = gender;
    this->id         = id;
}
int Actor::getId()
{
    return id;
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
    delete &familyName;
    delete &givenName;
    delete &birthYear;
    delete &gender;
}