//---------------------------------------------------------------------------

#pragma hdrstop

#include "HashTable.h"

//---------------------------------------------------------------------------

//Destructor.

HashTable::~HashTable()
{
	delete[] stacks;
}

//---------------------------------------------------------------------------

//Constructor with parameter.
//Creates hash table with pTableSize stacks in it.

HashTable::HashTable(int pTableSize)
{
	this->tableSize = pTableSize;
	stacks = new StackInt[this->tableSize];

	size = 0;
}

//---------------------------------------------------------------------------

//Default constructor.
//Creates hash table with 10 stacks in it.

HashTable::HashTable()
{
	this->tableSize = 10;
	stacks = new StackInt[this->tableSize];

	size = 0;
}

//---------------------------------------------------------------------------

//Adds value pValue to hash table.

void HashTable::add(int pValue)
{
	int hashKey = getHashCode(pValue);

	stacks[hashKey].push(pValue);
	size++;
}

//---------------------------------------------------------------------------

//Removes value from stack woth pStackNumber number.

void HashTable::removeFromStack(int pStackNumber)
{
	if (pStackNumber >= tableSize || pStackNumber < 0)
	{
		UnicodeString NoSuchStack = "There is no stack with that number!";
		throw NoSuchStack;
	}

	if (stacks[pStackNumber].isEmpty())
	{
		UnicodeString StackIsEmpty = "Stack is empty!";
		throw StackIsEmpty;
	}

	stacks[pStackNumber].pop();
	size--;
}
//---------------------------------------------------------------------------

//Returns pValue hash code.

int HashTable::getHashCode(int pValue)
{
	return abs(pValue % tableSize);
}

//---------------------------------------------------------------------------

//Returns number of the stack that contains
//largest element in hash table.

int HashTable::getMaxStackNumber()
{
	if (size == 0)
	{
		UnicodeString HashIsEmpty = "Hash is empty";
		throw HashIsEmpty;
	}


	bool found = false; //If true - at least one not empty stack was found.
	int maxElement;
	int maxStackNumber;
	for (int i = 0; i < tableSize; i++)
	{
		if (!(stacks[i].isEmpty()))
		{
			//If it is the first founded not empty stack then it is possible
			//to initialize MaxElement and MaxStackNumber for the first time.
			if (!found)
			{
				maxElement = stacks[i].getMaxElement();
				maxStackNumber = i;

				found = true;
			}
			else  //If it is not the first not empty stack.
			{
				int maxFromStack = stacks[i].getMaxElement();

				if (maxFromStack > maxElement)
				{
					maxElement = maxFromStack;
					maxStackNumber = i;
				}
			}
		}
	}

	return maxStackNumber;
}

//---------------------------------------------------------------------------

//Shows all elements in hash table on pMemo.

void HashTable::showAll(TMemo* pMemo)
{
	pMemo->Clear();

	for (int i = 0; i < tableSize; i++)
	{
		pMemo->Lines->Add(IntToStr(i + 1) + ") ");

		stacks[i].showAll(pMemo, i);
	}
}

//---------------------------------------------------------------------------

//Returns amount of stacks in hash table.

int HashTable::getSize()
{
	return size;
}

//---------------------------------------------------------------------------

//Returns amount of stacks in hash table.

int HashTable::getTableSize()
{
    return tableSize;
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
