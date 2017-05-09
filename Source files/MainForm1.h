//---------------------------------------------------------------------------

#ifndef MainForm1H
#define MainForm1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label3;
	TLabel *Label5;
	TLabel *Label6;
	TButton *ButtonAdd;
	TEdit *EditAdd;
	TEdit *EditDel;
	TButton *ButtonDeleteFromStack;
	TMemo *Memo;
	TButton *ButtonClear;
	TButton *ButtonExit;
	TPanel *PanelMaxStack;
	TEdit *EditCreate;
	TLabel *Label1;
	TLabel *Label2;
	TButton *ButtonCreate;
	void __fastcall ButtonExitClick(TObject *Sender);
	void __fastcall ButtonAddClick(TObject *Sender);
	void __fastcall ButtonCreateClick(TObject *Sender);
	void __fastcall ButtonDeleteFromStackClick(TObject *Sender);
	void __fastcall ButtonClearClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
