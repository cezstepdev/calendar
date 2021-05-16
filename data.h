#include <vcl>
/**
*klasa klasa Data to klasa ktora w ktorej metody odpowiadaja za zadania zwiazane z podstawowym dzialaniem terminarza
*/
class Data
{
public:
///tablica wskaznikow array to tablica ktora zawiera wszystkie kartki z kalendarza
        TButton *array[37];
///zmienna miesiac to globalna zmienna klasy Data ktora jest miesiacem w postaci liczbowej 1-styczen, 2-luty..
        int miesiac;
///zmienna rok to globalna zmienna klasy Data ktora wyznacza aktualny rok w programie		
        int rok;
/**
*funkcja zamienia miesiac z liczby na slowo i wypisuje je
\param1 miesiac w postaci liczby
\param2 wskaznik na znacznik w ktorym zostanie wypisany slowny miesiac
*/
        void set_month(int,TLabel *);
/**
*funkcja oblicza pierwszy dzien miesiaca 1-pon, 2-wt...
\param1 miesiac ktorego pierwszy dzien chcemy obliczyc
\param1 rok miesiaca ktorego pierwszy dzien chcemy obliczyc
\return pierwszy dzien miesiaca 1-pon, 2-wt...
*/
        int pierwszy(int,int);
/**
*funkcja zwraca ilosc dni w miesiacu
\param1 numer miesiaca ktorego ilosc dni nas interesuje
\param2 rok w ktorym interesujacy nas miesiac wystepuje
\return ilosc dni w miesiacu danego roku
*/
        int ostatni(int,int);
/**
*funkcja odpowiedzialna za wyznaczenie dnia tygodnia
\param1 dzien z daty ktora nas interesuje
\param2 miesiac z daty ktora nas interesuje
\param3 rok daty ktora nas interesuje 
\return obliczony dzien w postaci liczby 1-pon, 2-wt...
*/		
		int calculate_day(int,int,int);
/**
*funkcja ukrywa kartki kalendarza ktore nie wystepuja w danym miesiacu
\param1 pierwszy dzien miesiaca 1-pon, 2-wt... 
\param2 liczba dni w danym miesiacu
\see ostatni()   
*/
        void hide(int,int);
/**
*funkcja ustawia napisy na kartkach kalendarza
\param1 pierwszy dzien miesiaca 1-pon, 2-wt... 
\param2 liczba dni w danym miesiacu
\see ostatni()  
*/			
        void set_value(int,int);
/**
*funkcja zwieksza miesiac o 1  
\param1 wskaznik na znacznik ktory wyswietla rok 
\param2 wskaznik na znacznik ktory wyswietla miesiac  
*/		
        void next_month(TLabel *,TLabel *);
/**
*funkcja zmniejsza miesiac o 1  
\param1 wskaznik na znacznik ktory wyswietla rok 
\param2 wskaznik na znacznik ktory wyswietla miesiac  
*/		
        void prev_month(TLabel *,TLabel *);
/**
*funkcja zwieksza rok o 1  
\param1 wskaznik na znacznik ktory wyswietla rok 
\param2 wskaznik na znacznik ktory wyswietla miesiac  
*/		
        void next_year(TLabel *,TLabel *);
/**
*funkcja zmniejsza rok o 1  
\param1 wskaznik na znacznik ktory wyswietla rok 
\param2 wskaznik na znacznik ktory wyswietla miesiac  
*/    
		void prev_year(TLabel *,TLabel *);
		
/**
*funkcja zamieniajaca liczbe w dzien miesiaca tzn. 1-poniedzialek, 2-wtorek...
\param1	numer dnia   
\param2 wskaznik na znacznik ktory wyswietla dzien w postaci slownej 
*/		
        void which_day(int,TLabel *);
/**
*funkcja wyswietla date wydarzenia
\param1	numer dnia miesiaca w ktorym wystepuje wydarzenie  
\param2 wskaznik na znacznik ktory wyswietla rok wydarzenia 
\param3 wskaznik na znacznik ktory wyswietla miesiac wydarzenia 
\param4 wskaznik na znacznik ktory wyswietla dzien wydarzenia
\warning parametr pierwszy musi miec wartosc String 
*/	
        void set_date(String,TLabel *,TLabel *,TLabel *);
/**
*funkcja ktora zmienia napis na znaczniku rok podany jako parametr
\param1 wskaznik na znacznik okreslajacy rok
*/
        void set_year(TLabel *);
};
