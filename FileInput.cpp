#include "FileInput.h"
#include "LinkedList.h"

LinkedList * actorList  = new LinkedList();
LinkedList * movieList  = new LinkedList();
LinkedList * maleList   = new LinkedList();
LinkedList * femaleList = new LinkedList();

using namespace std;
using std::string;

//class defenition
FileInput::FileInput(string name) //constructor
{
    fileName = name;
}
void FileInput::processFile()
{
    ifstream myfile;
    string   line;
    int      toggle = 0; // 0 if list of actors or 1 if list of movies
    int      position = 0;

    myfile.open(fileName.c_str());
     
    //check if there is problem opening given file
    if(myfile.fail())
    {
        cerr << "ERROR OPENING FILE " << fileName << endl;
        exit(1);
    }

    while (!myfile.eof() && toggle != 1)
    {
        getline(myfile, line);

        if(line == "")
        {
            toggle   = 1;    //switching to a list of movies
            position = myfile.tellg(); // getting position in text file of blank line
        }
        if(toggle == 0)    //processing list of actors 
        {
            processActor(line);
        }
    }
    processMovies(position);
}
void FileInput::processActor(string line)
{
    Actor * currentActor;
    string familyName;
    string givenName;
    string gender;
    int    birthYear;

    stringstream   data(line);

    data >> familyName >> givenName >> birthYear >> gender;
     
    cout << givenName << " " <<familyName << " " << gender << " " << birthYear << " " << endl;
    currentActor = new Actor(familyName, givenName, birthYear, gender, birthYear);
    actorList->add(currentActor, birthYear);
}
void FileInput::processMovies(int position)
{
    Movie *  currentMovie;
    ifstream myfile;
    string   line;
    string   title;
    string   familyName = "";
    string   givenName  = "";
    int      releaseYear;
    int      count = 0;

    myfile.open (fileName.c_str());
     
    //check if there is problem opening given file
    if(myfile.fail())
    {
        cerr << "ERROR OPENING FILE " << fileName << endl;
        exit(1);
    }
    //getting the position in the text file that contains the list of movies
    myfile.seekg(position);

    while (!myfile.eof())
    {
        getline(myfile, line);
        title = line;

        getline(myfile, line);
        
        int nPos = line.find(" ", 0); 
        while(nPos != int(string::npos))
        {
            count++;
            nPos = line.find(" ", nPos+1);
        }

        if(count > 0 && line != "") //if the line contains year of release and staring actor 
        {
            stringstream data(line);

            data >> releaseYear >> familyName >> givenName;
            cout << title << " " << releaseYear << " " << familyName << " " << givenName << endl;
            currentMovie = new Movie(title, releaseYear, familyName, givenName, releaseYear);
            movieList->add(currentMovie, releaseYear);
        }
        else if(count == 0 && line != "") //else line only contains year of release NOT the staring actor
        {
            stringstream data(line);

            data >> releaseYear;
            cout << title << " " << releaseYear << " " << familyName << " " << givenName << endl;
            currentMovie = new Movie(title, releaseYear, familyName, givenName, releaseYear);
            movieList->add(currentMovie, releaseYear);
        }
        familyName  = "";
        givenName   = "";
        releaseYear = 0;
        count = 0;
     }
}
