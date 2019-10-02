# SQL Data Handler#
	This program takes an SQL datafile and formats each file into a SQL script that inserts the data into a table.


## Modify the Datafile before use ##
	Ensure before running the program that the datafile only contains data, a count of the entries is not skipped. Ignoring this step can cause issues.


## Running Program: ##
	1. g++ handler.cpp -o handle
	2. ./handle tableName dataFile writingFile

## Known Bugs ##
	The program will always print one empty insert statemnt at the bottom.