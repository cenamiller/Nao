//Aisha Balogun Mohammed 
//17th November 2017

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "HashTables.cpp"//change to .h
#include "GeneralHashFunctions.cpp"//change to .h
using std::ifstream;
using std::cout;
using std::cin;

//TODO
// read in the two test files (names.txt, randoWords.txt) line by line
// lab1 code comes in handy here

//TODO
//use the STL hash as the hashing function to test your HashTable functionality

//TODO
//use the WeakHash() from GeneralHashFunctions as the hashing function to test your HashTable functionality

//TODO
// now using the same testing methods, pick 2 hashing functions from the included open source library "GeneralHashFunctions"

//TODO
// you will test your HashTable functions using one HashTable per file, per hashing function
// so you should have 2Files*4Hashers = 8 HashTable objects
// each HashTable object contains two different unordered maps for storage using different collision resistance methods
// you will use the addToTables() method once to add one entry into both tables
// you will edit the individual add-to-tables functions to add the appropriate functionality

using namespace std;
int main()
{
	HashTables hash1;
	HashTables hash2;
	HashTables hash3;
	HashTables hash4;
	HashTables hash5;
	HashTables hash6;
	HashTables hash7;
	HashTables hash8;
	
	ifstream fileopener;
	fileopener.open("names.txt");
	string str;

	while(getline(fileopener, str))
	{
		std::size_t str_hash = std::hash<std::string>{}(str);
		cout << "hash(" << str << ") = " << str_hash << '\n';
		unint newHash1 = (unint) str_hash;
		hash1.addToTables(newHash1,str);
		unint newHash2 = WeakHash(str);
		hash2.addToTables(newHash2,str);
		unint newHash3 = RSHash(str);
		hash3.addToTables(newHash3,str);
		unint newHash4 = JSHash(str);
		hash4.addToTables(newHash4,str);
	}
	
	fileopener.close();
	
	hash1.CollisionReport();
	hash2.CollisionReport();
	hash3.CollisionReport();
	hash4.CollisionReport();
	
	ifstream fileopener2;
	fileopener2.open("randoWords.txt");
	string str2;
	while(getline(fileopener2, str2))
	{
		std::size_t str_hash = std::hash<std::string>{}(str2);
		cout << "hash(" << str2 << ") = " << str_hash << '\n';
		unint newHash5 = (unint) str_hash;
		hash5.addToTables(newHash5,str2);
		unint newHash6 = WeakHash(str2);
		hash6.addToTables(newHash6,str2);
		unint newHash7 = RSHash(str2);
		hash7.addToTables(newHash7,str2);
		unint newHash8 = JSHash(str2);
		hash8.addToTables(newHash8,str2);
	}
	
	fileopener2.close();
	
	hash5.CollisionReport();
	hash6.CollisionReport();
	hash7.CollisionReport();
	hash8.CollisionReport();

  return 0;
}
