#ifndef FILEINPUT_h
#define FILEINPUT_h

#include <fstream>
#include <iostream>
#include <string> 
#include "assert.h"

using namespace std;
using std::string;

//class decleration
class FileInput
{
    public:
         FileInput(string fileName); //constructor
         processFile(string fileName);

    private:
        string fileName;
};

#endif