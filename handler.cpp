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
        exitFile << "INSERT INTO " << tableName << " VALUES(" << endl;
      }
      while(lineIndex < linePer)
	{
	  dataFile.getline(buffer, sizeof(buffer));
	  string line(buffer);
	  if(isNumber(line))
	    {
	      exitFile << line << "," << endl;
	    }
	  else
	    {
	      exitFile << "\'" << line << "\'" << endl;
	    }
	  lineIndex++;
	}
     
      //dataFile.getline(buffer, sizeof(buffer));
      //string line(buffer);
      //dataFile.getline(buffer, sizeof(buffer));
      //exitFile << "\'" << line << "\', " << endl;
       
 
      if(lineIndex == linePer)
      	{
         exitFile << ");" << endl;
         lineIndex = 1;
      	}
      //exitFile << ");" << endl;
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
