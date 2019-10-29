# SQL Data Handler
This program takes an SQL datafile and formats each file into a SQL script that inserts the data into a table.


## Modify the Datafile before use ##
Ensure before running the program that the datafile only contains data, a count of the entries is not skipped. Ignoring this step can cause issues.


## Running Program: ##
	1. g++ handler.cpp -o handle
	2. ./handle tableName dataFile writingFile
	   Where tableName is the name of the table.
	   Where Datafile is the name of the data file you are inserting
	   Where writingFile is the name of the file you want to write the insert statements to.

## Known Bugs ##
   Currenly the program has trouble handling messy data, I am still looking into why this is occuring. 