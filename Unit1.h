//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <windows.h>
#include <mysql.h>
#include <string>
#include <cstdlib>
#include <time.h>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components

///\name grupa zmiennych dotyczaca podstawowego terminarza
//!@{
	//!@{
		//! wskazniki na pola witajace uzytkownika		
		TLabel *Welcome;
        TLabel *user;
	//!@}

	//!@{
		//!kartka kalendarza
        TButton *Button1;
        TButton *Button2;
        TButton *Button3;
        TButton *Button4;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TButton *Button8;
        TButton *Button9;
        TButton *Button10;
        TButton *Button11;
        TButton *Button12;
        TButton *Button13;
        TButton *Button14;
        TButton *Button15;
        TButton *Button16;
        TButton *Button17;
        TButton *Button18;
        TButton *Button19;
        TButton *Button20;
        TButton *Button21;
        TButton *Button22;
        TButton *Button23;
        TButton *Button24;
        TButton *Button25;
        TButton *Button26;
        TButton *Button27;
        TButton *Button28;
        TButton *Button29;
        TButton *Button30;
        TButton *Button31;
        TButton *Button32;
        TButton *Button33;
        TButton *Button34;
        TButton *Button35;
        TButton *Button36;
        TButton *Button37;
	//!@}
	//!@{
		///wskaznik na przycisk wylogowujacy uzytkownika 
		TButton *signout;
	//!@}
	//!@{ 
		//! wskazniki na napisy okreslajace dni tygodnia nad kartkami z kalendarza
		TLabel *dayPon;
        TLabel *dayWt;
        TLabel *daySr;
        TLabel *dayCzw;
        TLabel *dayPt;
        TLabel *daySb;
        TLabel *dayNd;
	//!@}
	//!@{
		//!wskaznik na przycisk zmniejszajacy oraz zwiekszajacy miesiac o 1
        TButton *prevMonth;
		TButton *nextMonth;
	//!@}
	//!@{ 
		//! wskazniki na napisy okreslajace dni tygodnia nad kartkami z kalendarza
        TButton *prevYear;
        TButton *nextYear;
	//!@} 
	//!@{
		//! pola z aktulanym miesiacem i rokiem		
        TLabel *Month;
        TLabel *Year;
	//!@} 
//!@}

///\name grupa zmiennych nalezaca do calculate date
//!@{
	//! wskaznik na przycik ktory wywoluje obliczanie daty  
		TButton *Calculate_date;
	//! wskaznik na pole w ktorym zostanie wyswietlony obliczony dzien w postaci slownej
        TLabel *CalculatedDzien;
	//!@{
		//! wskazniki na pola w ktore wprowadzamy date do obliczenia 
        TEdit *Miesiac;
        TEdit *Rok;
        TEdit *Dzien;
	//!@}
	//!@{
		//!	wskazniki na napisy okreslajace dzien miesiac rok 
        TLabel *CalcDzien;
        TLabel *CalcMiesiac;
        TLabel *CalcRok;
	//!@} 
//!@}

///\name grupa zmiennych nalezaca do events
//!@{
	//!@{
		//! wskazniki na pola roku miesiaca dnia mowiace uzytkownikowi kiedy wystepuje wydarzenie
		TLabel *Label15;
        TLabel *Label14;
        TLabel *Label13;
	//!@}	
	//!@{
		//! wskaznik na opis wydarzenia
		TLabel *Label12;
	//!@}
	//!@{
		//! wskaznik na przycisk dodajacy do bazy danych nowe wydarzenie
		TButton *Button42;
	//!@}
	//!@{
		//! wskaznik na przycisk cofajacy do menu eventu
		TButton *Button46;
	//!@}
	//!@{
		/// wskaznik na przycisk sluzacy do rozszerzenia mozliwosci dodania godziny i minuty do wydarzenia
		TButton *Button48;
	//!@}
	//!@{
		//!wskaznik na pole okreslajace id wydarzenia
		TLabel *Label19;
	//!@}		
	//!@{
		//!wskazniki na przyciski sluzace do dodawania, usuwania i edytowania wydarzenia danego dnia
		TButton *Button43;
        TButton *Button44;
        TButton *Button45;
	//!@}	 
	//!@{
		//!wskazniki na pola sluzace do wprowadzania opisu, godziny i minuty wydarzenia
		TEdit *Edit1;
        TEdit *Edit2;
		TEdit *Edit3;
	//!@}	
	//!@{
		//!wskazniki na napisy sluzace do opisu pol podczas dodawania\edytowania wydarzenia
        TLabel *Label16;
        TLabel *Label17;
        TLabel *Label18;
	//!@}
//!@}		
        TLabel *id;
        TLabel *Label1;
        TLabel *Label2;
///\name funkcje onClick() przyciskow okna
//!@{
		//! funkcja onClick()
		void __fastcall FormCreate(TObject *Sender);
        void __fastcall nextMonthClick(TObject *Sender);
        void __fastcall prevMonthClick(TObject *Sender);
        void __fastcall Calculate_dateClick(TObject *Sender);
        void __fastcall prevYearClick(TObject *Sender);
        void __fastcall nextYearClick(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button8Click(TObject *Sender);
        void __fastcall Button9Click(TObject *Sender);
        void __fastcall Button10Click(TObject *Sender);
        void __fastcall Button11Click(TObject *Sender);
        void __fastcall Button12Click(TObject *Sender);
        void __fastcall Button13Click(TObject *Sender);
        void __fastcall Button14Click(TObject *Sender);
        void __fastcall Button15Click(TObject *Sender);
        void __fastcall Button16Click(TObject *Sender);
        void __fastcall Button17Click(TObject *Sender);
        void __fastcall Button18Click(TObject *Sender);
        void __fastcall Button19Click(TObject *Sender);
        void __fastcall Button20Click(TObject *Sender);
        void __fastcall Button21Click(TObject *Sender);
        void __fastcall Button22Click(TObject *Sender);
        void __fastcall Button23Click(TObject *Sender);
        void __fastcall Button24Click(TObject *Sender);
        void __fastcall Button25Click(TObject *Sender);
        void __fastcall Button26Click(TObject *Sender);
        void __fastcall Button27Click(TObject *Sender);
        void __fastcall Button28Click(TObject *Sender);
        void __fastcall Button29Click(TObject *Sender);
        void __fastcall Button30Click(TObject *Sender);
        void __fastcall Button31Click(TObject *Sender);
        void __fastcall Button32Click(TObject *Sender);
        void __fastcall Button33Click(TObject *Sender);
        void __fastcall Button34Click(TObject *Sender);
        void __fastcall Button35Click(TObject *Sender);
        void __fastcall Button36Click(TObject *Sender);
        void __fastcall Button37Click(TObject *Sender);
        void __fastcall Button42Click(TObject *Sender);
        void __fastcall Button43Click(TObject *Sender);
        void __fastcall Button46Click(TObject *Sender);
        void __fastcall Button44Click(TObject *Sender);
        void __fastcall signoutClick(TObject *Sender);
        void __fastcall Button48Click(TObject *Sender);
        void __fastcall Button45Click(TObject *Sender);
//!@}
private:	// User declarations
public:		// User declarations
/// konstruktor okna kalendarza
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
