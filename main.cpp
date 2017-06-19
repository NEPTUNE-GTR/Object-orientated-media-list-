#include <fstream>
#include <iostream>
#include <string>
#include "assert.h"

using namespace std;

int main ( int argc, char *argv[] )
{
    assert( argc > 1 );

    if(argc > 1 && argv[1] != NULL)
    {
        string fileName = argv[1]; 

        cout << "Name of the file entered is: ";
        cout << fileName << endl;

    }
}