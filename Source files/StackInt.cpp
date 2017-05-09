//---------------------------------------------------------------------------

#pragma hdrstop

#include "StackInt.h"

//---------------------------------------------------------------------------

//Constructor.

StackInt::StackInt()
{
	top = NULL;
	size = 0;
}

//---------------------------------------------------------------------------

//Destructor.

StackInt::~StackInt()
{
	clear();
}

//---------------------------------------------------------------------------

//Pushes element to stack.

void StackInt::push(int pValue)
{
	Node* tempNode = new Node;
	tempNode->value = pValue;

	if (isEmpty())
	{
		top = tempNode;
		top->next = NULL;
	}
	else
	{
		tempNode->next = top;
		top = tempNode;
	}

	size++;
}

//---------------------------------------------------------------------------

//Pops element out of this stack.

int StackInt::pop()
{
	int value = top->value;

	Node* tempNode = top;

	top = top->next;

	delete tempNode;

	size--;
	
	return value;
}

//---------------------------------------------------------------------------

//Shows all elements in stack on pMemo
//on string with number pStringNumber.

void StackInt::showAll(TMemo* pMemo, int pStringNumber)
{
	if (isEmpty()) 
	{
		return;
	}

	Node* tempNode = top;
	while (tempNode != NULL)
	{
		UnicodeString tempStr = pMemo->Lines->Strings[pStringNumber];
		int value = tempNode->value;
			
		pMemo->Lines->Strings[pStringNumber] = tempStr + IntToStr(value) + " ";
				
		tempNode = tempNode->next;
	}
}

//---------------------------------------------------------------------------

//Deletes all elements from stack.

void StackInt::clear()
{
	while (!(isEmpty()))
	{
		pop();
	}
}

//---------------------------------------------------------------------------

//Returns max element from stack.

int StackInt::getMaxElement()
{
	int maxElement = top->value;
	
	Node* tempNode = top->next;
	while (tempNode != NULL)
	{
		if (tempNode->value > maxElement) 
		{
			maxElement = tempNode->value;	
		}

		tempNode = tempNode->next;
	}

	return maxElement;
}         

//---------------------------------------------------------------------------

//Returns true if there is at least one element 
//in stack, false otherwise.

bool StackInt::isEmpty()
{
	return (size == 0);
}

//---------------------------------------------------------------------------
#pragma package(smart_init)
