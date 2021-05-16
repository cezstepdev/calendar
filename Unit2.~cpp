//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DB.h"
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "trayicon"
#pragma resource "*.dfm"
TForm2 *Form2;
DB polaczenie;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TForm2::login_user()
{
	if(polaczenie.logining(login->Text,password->Text)==0)
                ShowMessage("Nieprawid³owe dane!");
        else
        {
                Form2->Hide();
                Form1->Show();
                Form1->user->Caption=login->Text;
        }

        login->Text="";
        password->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::LoginButtonClick(TObject *Sender)
{
        login_user();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SignupButtonClick(TObject *Sender)
{
        Form2->Hide();
        Form3->Show();
        login->Text="";
        password->Text="";
}
//---------------------------------------------------------------------------


