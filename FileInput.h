#ifndef FILEINPUT_h
#define FILEINPUT_h

#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string> 
#include "assert.h"
#include "Actor.h"
#include "Movie.h"



//class decleration
class FileInput
{
    public:
         FileInput(std::string fileName); //constructor
         void processFile();
         void processActor(std::string line);
         void processMovies(int position);
    private:
        std::string fileName;
};
#endif