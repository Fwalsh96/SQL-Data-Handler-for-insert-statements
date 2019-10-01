// Author: Forrest Walsh
// Date Started: 9/29/2019
// Purpose: To put datafiles in an insert format for SQL because I am too lazy to type all these values in for databases. 
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <typeinfo>

using namespace std;

// Main call format

// table, dataFile, newFile, entry number 

// Function Definitions
bool isNumber(string);


int main(int argc, char *argv[])
{
  // Variables
  string fileName;
  string tableName;
  int linePer;

  if(argc < 4)
    {
      cout << "Terminating program, expected 3 arguments" << endl;
      exit(0);
    }
  cout << "How many lines per each?: " << endl;
  cin >> linePer;

  tableName = argv[1];
  fileName = argv[2];
  // linePer = atoi(argv[3]);
  char buffer[1024];

  // Pre-Proccessing outputs
  cout << "The File you are Running: " << argv[0] << endl;
  cout << "The table name is " << tableName << endl;
  cout << "The datafile is " << fileName << endl;
  cout << "There are " << linePer << " for each entry" << endl; 
  linePer++; // Incrementing here to fix the logical error in my while loop
  cout << "----------------------------------" << endl;
 

  // Writing line to grab
  string line;

  // Datafile Declaration
  ifstream dataFile;
  ofstream exitFile;
  int lineIndex = 1;
  dataFile.open(argv[2]);
  exitFile.open(argv[3]);

  // The grabbing and inserting of the data
  while(!(dataFile.eof()))
    {
      // If first set of values
      if(lineIndex == 1)
      {
	// format the insert statemnt
        exitFile << "INSERT INTO " << tableName << " VALUES(" << endl;
      }
      while(lineIndex < linePer)
	{
	  // Get the line and store it in a string
	  dataFile.getline(buffer, sizeof(buffer));
	  string line(buffer);

	  // If line is an integer ignore the single quotes
	  if(isNumber(line))
	    {
	      exitFile << line << "," << endl;
	    }
	  // Else add the single quotes
	  else
	    {
	      exitFile << "\'" << line << "\'," << endl;
	    }
	  // increment Index
	  lineIndex++;
	}
 
      if(lineIndex == linePer)
      	{
	  // Finish off the insert statement
         exitFile << ");" << endl;
	 // Prep file for next 
         lineIndex = 1;
      	}
    }

  // insert the ''s on each line.
  // insert insert it into a new file.
 
  return 0;
}


// Function I found on Hotjar.com
bool isNumber(string s)
{
  for(int i = 0; i < s.length(); i++)
    {
      if(isdigit(s[i]) == false)
	return false;
    }
  return true;
}
