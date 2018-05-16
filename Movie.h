#ifndef MOVIE_h
#define MOVIE_h

#include "fileInput.h"
#include "Object.h"

class Movie : public Object
{
    public:
        Movie(std::string title, int releaseYear, std::string familyName, std::string givenName, int id);
        std::string getTitle();
        std::string getGivenName();
        std::string getFamilyName();
        int         getReleaseYear();
        int         getId();
        ~Movie();

    private:
        std::string title;
        std::string familyName;
        std::string givenName;
        int         releaseYear;
        int         id;
};
#endif