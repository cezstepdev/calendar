//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "trayicon.h"
//---------------------------------------------------------------------------
/**
*klasa TForm2 w ktorej znajduja sie przyciski oraz funkcje odpoiwedzialne za logowanie uzytkownika 
*/
class TForm2 : public TForm
{
__published:	// IDE-managed Components
///wskaznik na pole w ktore uzytkownik wpisuje login
        TEdit *login;
///wskaznik na pole w ktore uzytkownik wpisuje haslo
        TEdit *password;
        TButton *LoginButton;
        TButton *SignupButton;
///wskaznik na pole ktore opisuje gdzie uzytkownik powinien wpisac login
        TLabel *LoginLabel;
///wskaznik na pole ktore opisuje gdzie uzytkownik powinien wpisac haslo
        TLabel *PassLabel;
///funkcja ktora odpowiada za logowanie onClick LoginButton
        void __fastcall SignupButtonClick(TObject *Sender);
///funkcja ktora odpowiada za przejscie do okna rejestracji onClick SignupButton
        void __fastcall LoginButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
///\fn sprawdza czy nastapilo logowanie, otwiera okno uzytkownika 
        void login_user();
        __fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
