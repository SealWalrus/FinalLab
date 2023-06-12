//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "VirtualTrees.hpp"
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TComboBox *ComboBox1;
	TProgressBar *ProgressBar1;
	TVirtualStringTree *VirtualStringTree1;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TCheckBox *CheckBox4;
	TStaticText *StaticText1;
	TButton *Button1;
	TButton *Button2;
	TStaticText *StaticText2;
	void __fastcall StaticText1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
