// Author: Forrest Walsh
// Date Started: 9/29/2019
// Purpose: To put datafiles in an insert format for SQL because I am too lazy to type all these values in for databases. 
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>

using namespace std;

// Main call format

// table, dataFile, newFile, 

int main(int argc, char *argv[])
{
  // Variables
  string fileName;
  string tableName;
  string testString = "fortnite";

  if(argc < 3)
    {
      cout << "Terminating program, expected 3 arguments" << endl;
      exit(0);
    }

  tableName = argv[1];
  fileName = argv[2];
  char buffer[1024];
  // Pre-Proccessing outputs
  cout << "The File you are Running: " << argv[0] << endl;
  cout << "The table name is " << tableName << endl;
  cout << "The datafile is " << fileName << endl;
  cout << "----------------------------------" << endl;
  cout << "Test of the escape lines" << endl;
  cout << "\'" << testString << "\'" << endl;
  cout << "------------------------" << endl;
  cout << "Test Complete, on to real stuff" << endl;
  cout << "-----------------------------------" << endl;

  // Writing line to grab
  string line;

  // Datafile Declaration
  ifstream dataFile;
  ofstream exitFile;
  dataFile.open(argv[2]);
  exitFile.open(argv[3]);
  while(dataFile.good())
    {
      // take line from data file
      dataFile.getline(buffer, sizeof(buffer));
      string line(buffer);
      
      // Convert it to the proper format
      //cout << line << endl;
      exitFile << "\'" << line << "\'," << endl;
      // insert it into the new file
    }

  // insert the ''s on each line.
  // insert insert it into a new file.
  // 
  return 0;
}
