#include "LinkedList.h"
#include "FileInput.h"

using namespace std;


int main ( int argc, char *argv[] )
{
    assert(argc > 1);

    if(argc > 1 && argv[1] != NULL)
    {
        string fileName = argv[1]; 

        cout << "Working on file: " << fileName << endl << endl;

        FileInput * file = new FileInput(fileName);
        file->processFile();


    }
}