//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainForm1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

#include "HashTable.h"

HashTable* gHash = NULL;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
    DoubleBuffered = true;
}
//---------------------------------------------------------------------------
//Adds element to gHash table.
void __fastcall TForm1::ButtonAddClick(TObject *Sender)
{
	if (gHash == NULL)
	{
		ShowMessage("You have to create gHash table before adding elements!");
        return;
	}

	try
	{
		int value = StrToInt(EditAdd->Text);

		gHash->add(value);

		gHash->showAll(Memo);

		PanelMaxStack->Caption = IntToStr(gHash->getMaxStackNumber() + 1);
	}
	catch(EConvertError&)
	{
		ShowMessage("Wrong input! Value should be an integer.");
	}
}
//---------------------------------------------------------------------------
//Creates gHash table.
void __fastcall TForm1::ButtonCreateClick(TObject *Sender)
{
	if (gHash != NULL)
	{
        delete gHash;
	}

	try
	{
		int tableSize = StrToInt(EditCreate->Text);

		gHash = new HashTable(tableSize);

		gHash->showAll(Memo);

		PanelMaxStack->Caption = "None.";
	}
	catch(EConvertError&)
	{
		ShowMessage("Wrong input! Value should be an integer.");
	}
}
//---------------------------------------------------------------------------
//Exits.
void __fastcall TForm1::ButtonExitClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
//Pops element out of stack.
void __fastcall TForm1::ButtonDeleteFromStackClick(TObject *Sender)
{
	if (gHash == NULL)
	{
		ShowMessage("You have to create gHash table before deleting elements!");
		return;
	}

	try
	{
		int stackNumber = StrToInt(EditDel->Text) - 1;

		gHash->removeFromStack(stackNumber);

		gHash->showAll(Memo);
	}
	catch(EConvertError&)
	{
		ShowMessage("Wrong input! Value should be an integer.");
	}
	catch(UnicodeString& exeption)
	{
		ShowMessage(exeption);
	}

	if (gHash->getSize() > 0)
	{
        PanelMaxStack->Caption = IntToStr(gHash->getMaxStackNumber() + 1);
	}
	else
	{
		PanelMaxStack->Caption = "None.";
    }

}
//---------------------------------------------------------------------------
//Clears gHash table.
void __fastcall TForm1::ButtonClearClick(TObject *Sender)
{
	if (gHash == NULL)
	{
		ShowMessage("You have to create gHash table before clearing it!");
		return;
	}

	HashTable* tempHash = gHash;

	gHash = new HashTable(tempHash->getTableSize());

	delete tempHash;

	gHash->showAll(Memo);

	PanelMaxStack->Caption = "None.";
}
//---------------------------------------------------------------------------

