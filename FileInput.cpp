
#include "FileInput.h"


using namespace std;

//class defenition
FileInput::FileInput(std::string name) //constructor
{
    fileName = name;
   

}
 FileInput::processFile()
 {
     ifstream    myfile;
     std::string line;
     int         toggle = 0; // 0 if list of actors or 1 if list of movies

     myfile.open (fileName.c_str());
     
     //check if there is problem opening given file
     if(myfile.fail())
     {
         cerr << "ERROR OPENING FILE " << fileName << endl;
         exit(1);
     }


     while (!myfile.eof())
     {
         std::getline(myfile, line);
         //cout << line << endl;
         if(toggle == 0)    //processing list of actors 
         {
         }

         if(line == "")
         {
             toggle = 1;         
         }
     }
     cout << toggle;
 }
 {
     std::string familiyName;
     std::string givenName;
     std::string gender;
     int         birthYear;

     std::stringstream   data(line);

     data >> familiyName >> givenName >> birthYear >> gender;
     
     cout << givenName << " " <<familiyName << " " << gender << " " << birthYear << " " << endl;

 }

