#ifndef FILEINPUT_h
#define FILEINPUT_h

#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <fstream>
#include <sstream>
#include "string.h" 
#include "assert.h"

using namespace std;
using std::string;

//class decleration
class FileInput
{
    public:
         FileInput(std::string fileName); //constructor
         processFile();

    private:
        std::string fileName;
};

#endif