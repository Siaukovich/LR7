//---------------------------------------------------------------------------

#ifndef StackIntH
#define StackIntH

#include <vcl.h>

class StackInt
{
public:
	//Constructor.
	StackInt();

	//Destructor.
	~StackInt();

	//Returns true if there is at least one element
	//in stack, false otherwise.
	bool isEmpty();

	//Pushes element to stack.
	void push(int pValue);

	//Pops element out of this stack.
	int pop();

    //Shows all elements in stack on pMemo
	//on string with number pStringNumber.
	void showAll(TMemo* Memo, int StringNumber);

	//Deletes all elements from stack.
	void clear();

	//Returns max element from stack.
	int getMaxElement();

private:
	//Struct that describes single node in stack.
	struct Node
	{
		int value;

		Node* next;
	};

	//Pointer to the top element in stack.
	Node* top;

    //Amount of elements in stack.
	int size;
};
//---------------------------------------------------------------------------
#endif
