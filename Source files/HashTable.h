//---------------------------------------------------------------------------

#ifndef HashTableH
#define HashTableH

#include <vcl.h>

#include "StackInt.h"

class HashTable
{
public:
	//Default constructor.
	//Creates hash table with 10 stacks in it.
	HashTable();

	//Constructor with parameter.
	//Creates hash table with pSize stacks in it.
	HashTable(int pTableSize);

	//Destructor.
	~HashTable();

	//Returns amount of elements in hash table.
	int getSize();

	//Returns amount of stacks in hash table.
	int getTableSize();

	//Adds value pValue to hash table.
	void add(int pValue);

	//Removes value from stack woth pStackNumber number.
	void removeFromStack(int pStackNumber);

	//Returns pValue hash code.
	int getHashCode(int pValue);

	//Returns number of the stack that contains
	//largest element in hash table.
	int getMaxStackNumber();

	//Shows all elements in hash table on pMemo.
	void showAll(TMemo* Memo);

private:
	//Pointer for creating array of stacks.
	StackInt* stacks;

	//Amount of stacks in hash table.
	int tableSize;

	//Amount of elements in hash table.
	int size;
};

//---------------------------------------------------------------------------
#endif
