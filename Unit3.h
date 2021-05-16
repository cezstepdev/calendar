//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
///wskaznik na pole w ktore uzytkownik wpisuje login podczas rejestracji
        TEdit *login;
///wskaznik na pole w ktore uzytkownik wpisuje haslo podczas rejestracji
        TEdit *password;
///wskaznik na pole w ktore uzytkownik wpisuje ponownie haslo podczas rejestracji		
        TEdit *repassword;
///wskaznik na przycisk ktory odpowiada za rejestracje uzytkownika		
        TButton *SignupButton;
///wskaznik na przycisk ktory odpowiada za przejscie do okna logowania			
        TButton *LoginButton;
///wskaznik na pole ktore opisuje gdzie uzytkownik powinien wpisac login
        TLabel *LoginLabel;
///wskaznik na pole ktore opisuje gdzie uzytkownik powinien wpisac haslo
        TLabel *PassLabel;
///wskaznik na pole ktore opisuje gdzie uzytkownik powinien wpisac ponownie haslo		
        TLabel *RepassLabel;
        void __fastcall LoginButtonClick(TObject *Sender);
        void __fastcall SignupButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
/**
\fn odpowiada z zarajestrowanie uzytkownika
*/
        void signup();
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
