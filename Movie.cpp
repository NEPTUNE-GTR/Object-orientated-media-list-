#include "Movie.h"

using namespace std;
using std::string;

//class definition
Movie::Movie(string title, int releaseYear, string familyName, string givenName, int id)
{
    this->title       = title;
    this->releaseYear = releaseYear;
    this->familyName  = familyName;
    this->givenName   = givenName;
    this->id          = id;

}
string Movie::getTitle()
{
    return title;
}
string Movie::getGivenName()
{
    return givenName;
}
string Movie::getFamilyName()
{
    return familyName;
}
int Movie::getReleaseYear()
{
    return releaseYear;
}
int Movie::getId()
{
    return id;
}
Movie::~Movie()
{
    delete &title;
    delete &releaseYear;
    delete &familyName;
    delete &givenName;
}
