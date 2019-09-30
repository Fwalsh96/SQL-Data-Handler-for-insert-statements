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
  string dataFile;
  string newFile;
  string tableName;
  string testString = "fortnite";

  if(argc < 3)
    {
      cout << "Terminating program, expected 3 arguments" << endl;
      exit(0);
    }

  tableName = argv[0];
  dataFile = argv[1];
  newFile = argv[2];

  cout << "The table name is " << tableName << endl;
  cout << "The datafile is " << dataFile << endl;
  cout << "The file we are writing to is " << newFile << endl;

  cout << "Test of the escape lines" << endl;
  cout << "\'" << testString << "\'" << endl;

  ifstream data;
  ofstream finisher;
  string line;

  
  do
    {
      // take line from data file
      getline(cin, line);

      // Convert it to the proper format
      finisher << "\'" << line << "\'" << endl;
      // insert it into the new file
    }while(!feof);

  // insert the ''s on each line.
  // insert insert it into a new file.
  // 
  return 0;
}
