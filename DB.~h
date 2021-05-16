#include <windows.h>
#include <mysql.h>
/**
\def1 adres bazy danych
\def2 nazwa uzytkownika bazy danych
\def3 haslo uzytkownika bazy danych
\def4 nazwa tabeli w bazie danych
*/
#define HOST "54.38.50.59"
#define USER "www2857_events"
#define PASS "8GJoBGoc3WUzkUA2rAn3"
#define BASE "www2857_events"
/**
*klasa DB zawiera funkcje odpowiadajace za komunikacje z baza danych
*/
class DB
{
public:
//!funkcja odpowiedzialna za polaczaenie z baza
//! \return funkcja zwraca wskaznik na polaczenie z baza
        MYSQL *connect_db();
/**
*funkcja logowania 
\param1 login podany przez uzytkownika
\param2 haslo padane przez uzytkownika 
\return funkcja zwraca czy mozna sie zalogowac na podane dane
*/
        bool logining(String,String);
/**
*funkcja rejestracji 
\param1 login podany przez uzytkownika
\param2 haslo padane przez uzytkownika 
\return funkcja zwraca 0 jesli rejestracja sie nie powiodla lub 1 jesli zarejestrowano poprawnie uzytkownika
*/  
		bool signup(String,String);
/**
*funkcja sprawdza czy istnieje uzytkownik o podanym loginie 
\param1 login podany przez uzytkownika
\return funkcja zwraca 0 jesli podany login nie wystepuje w bazie lub 1 jesli wystepuje
*/		
        bool check_login(String);
/**
*funkcja sprawdza czy hasla 2 hasla sa identyczne 
\param1 haslo podane przez uzytkownika
\param2 potwierdzenie hasla
\return funkcja zwraca 0 jesli hasla sa rozne lub 1 jesli hasla sa identyczne
*/		
        bool check_pass(String,String);
/**
*funkcja pobiera event z bazy danych 
\param1 login uzytkowika ktory probuje pobrac swoje wydarzenie
\param2 rok w ktorym wydarzenie ma wystepowac
\param3 miesiac w ktorym wydarzenie ma wystepowac
\param4 dzien w ktorym wydarzenie ma wystepowac
\param5 wskaznik miejsce w ktorym zostana wypisane zdarzenia z danego dnia
*/		
        void get_event(String,String,String,String,TLabel *);
/**
*funkcja pobiera id wydarzen z danego dnia ktore sa wyswietlone uzytkownikowi 
\param1 rok w ktorym wystepuje dane wydarzenie
\param2 miesiac w ktorym wystepuje dane wydarzenie
\param3 dzien w ktorym wystepuje dane wydarzenie
\param4 wskaznik na miejsce w ktorym wypisane sa wydarzenia z danego dnia
\see delete_event()
*/		
        void get_event_id(String,String,String,String,TLabel *);
/**
*funkcja dodaje wydarzenie uzytkownikowi  
\param1 login uzytkownika ktory dodaje wydarzenie
\param2 nazwa wydarzenia
\param3 rok wydarzenia
\param4 miesiac wydarzenia
\param5 dzien wydarzenia
\param6 godzina wydarzenia
\param7 minuta wydarzenia
*/		
        void add_event(String,String,String,String,String,String,String);
/**
*funkcja usuwa wydarzenie o podanym id 
\param1 login uzytkownika ktory usuwa wydarzenie
\param2 id wydarzenia ktore ma zostac usuniete
\see get_event_id()
\param3	rok wydarzenia
\param4	miesiac wydarzenia
\param5	dzien wydarzenia
*/
        void delete_event(String,String,String,String,String);
/**
*funkcja pozwalajaca na edytowanie wydarzenia
\param1 login uzykownika edytowanego wydarzenia
\param2 id wydarzenia do edytowania
\see get_event_id()
\param3 wskaznik na pole tekstowe w ktorym bedziemy edytowac opis
\param4 wskaznik na pole w ktorym bedziemy edytowac godzine
*/
        void edit_event(String,String,TEdit *,TEdit *);
/**
*funkcja pozwalajaca na edytowanie wydarzenia
\param1 login uzykownika edytowanego wydarzenia
\param2 id wydarzenia do edytowania
\see get_event_id()
\param4 wskaznik na pole w ktorym bedziemy edytowac minute
*/
        void edit_event2(String,String,TEdit *);
/**
*funkcja pozwalajaca na aktualizacje wydarzenia
\param1 login uzykownika edytowanego wydarzenia
\param2 id wydarzenia do edytowania
\param3 rok aktualizowanego wydarzenia
\param4 miesiac aktualizowanego wydarzenia
\param5 dzien aktualizowanego wydarzenia
\param6 godzina aktualizowanego wydarzenia
\param7 min aktualizowanego wydarzenia
*/
        void update_event(String,String,String,String,String,String,String,String);
/**
*funkcja sprawdzajaca czy podany uzytkownik ma wydazenie o podanym id
\param1 login uzykownika edytowanego wydarzenia
\param2 rok wydarzenia
\param3 miesiac wydarzenia
\param5 id wydarzenia 
\see get_event_id()
*/
        int check_id(String,String,String,String,String);
};
