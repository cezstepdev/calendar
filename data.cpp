#include "data.h"

void Data::set_year(TLabel *Year)
{
        Year->Caption=rok;
}

void Data::set_date(String caption,TLabel *year,TLabel *month,TLabel *day)
{
        year->Caption=rok;
        month->Caption=miesiac;
        day->Caption=caption;

}

void Data::which_day(int day,TLabel *label)
{

        switch(day)
        {
                case 1: label->Caption="poniedzia³ek";  break;
                case 2: label->Caption="wtorek";        break;
                case 3: label->Caption="œroda";         break;
                case 4: label->Caption="czwartek";      break;
                case 5: label->Caption="pi¹tek";        break;
                case 6: label->Caption="sobota";        break;
                case 0: label->Caption="niedziela";     break;
        }
}

void Data::prev_year(TLabel *Month,TLabel *Year)
{
        rok--;
        int first=pierwszy(miesiac,rok);
        int days=ostatni(miesiac,rok);
        hide(first,days);
        set_value(first,days);
        set_month(miesiac,Month);
        set_year(Year);
}

void Data::next_year(TLabel *Month,TLabel *Year)
{
        rok++;
        int first=pierwszy(miesiac,rok);
        int days=ostatni(miesiac,rok);
        hide(first,days);
        set_value(first,days);
        set_month(miesiac,Month);
        set_year(Year);
}

void Data::prev_month(TLabel *Month,TLabel *Year)
{
        miesiac--;
        if(miesiac<1)
        {
                rok--;
                miesiac=12;
        }
        int first=pierwszy(miesiac,rok);
        int days=ostatni(miesiac,rok);
        hide(first,days);
        set_value(first,days);
        set_month(miesiac,Month);
        set_year(Year);
}

void Data::next_month(TLabel *Month,TLabel *Year)
{
        miesiac++;
        if(miesiac>12)
        {
                rok++;
                miesiac%=12;
        }
        int first=pierwszy(miesiac,rok);
        int days=ostatni(miesiac,rok);
        hide(first,days);
        set_value(first,days);
        set_month(miesiac,Month);
        set_year(Year);
}

void Data::set_value(int first,int days)
{
        int last=first+days;
        int counter=1;
        for(int i=first;i<last;i++)
        {
                array[i]->Caption=counter;
                counter++;
        }
}

void Data::hide(int first,int days)
{
        for(int i=0;i<37;i++)
        {
                if(array[i]->Visible==false)
                        array[i]->Visible=true;
        }

        int last=first+days;
        for(int i=0;i<first;i++)
        {
                array[i]->Visible=false;
        }

        for(int i=last;i<37;i++)
        {
                array[i]->Visible=false;
        }
}

int Data::calculate_day(int day,int month,int year)
{


        if(day == 0 || month == 0 || year == 0)
                return -1;
        if (month>2)
                month-=2;
        else
        {
                month+=10;
                year--;
        }
        int w=year/100;
        year%=100;
        return (day + (13*month - 1)/5 + year + year/4 + w/4 + 5*w)%7;
}

int Data::ostatni(int miesiac,int rok)
{
        int dni=0;
        if(miesiac==1 || miesiac==3 || miesiac==5 ||miesiac==7
        || miesiac==8 || miesiac==10 || miesiac ==12)
                dni=31;
        else if(miesiac==4 || miesiac==6 || miesiac==9 || miesiac==11)
                dni=30;
        else if((rok%100==0 && rok%400==0 && miesiac%2==0) || (rok%4==0 && rok%100!=0))
                dni=29;
        else
                dni=28;
        return dni;
}

int Data::pierwszy(int miesiac,int rok)
{
    if(miesiac>2)
        miesiac-=2;
    else
    {
        miesiac+=10;
        rok--;
    }
    int w=rok/100;
    rok%=100;
    return((13*miesiac - 1)/5 + rok + rok/4 + w/4 + 5*w)%7;
}

void Data::set_month(int miesiac,TLabel *Month)
{
        switch(miesiac)
        {
                case 1:
                {
                        Month->Caption="Styczeñ";
                        break;
                }
                case 2:
                {
                        Month->Caption="Luty";
                        break;
                }
                case 3:
                {
                        Month->Caption="Marzec";
                        break;
                }
                case 4:
                {
                        Month->Caption="Kwiecieñ";
                        break;
                }
                case 5:
                {
                        Month->Caption="Maj";
                        break;
                }
                case 6:
                {
                        Month->Caption="Czerwiec";
                        break;
                }
                case 7:
                {
                        Month->Caption="Lipiec";
                        break;
                }
                case 8:
                {
                        Month->Caption="Sierpieñ";
                        break;
                }
                case 9:
                {
                        Month->Caption="Wrzesieñ";
                        break;
                }
                case 10:
                {
                        Month->Caption="PaŸdziernik";
                        break;
                }
                case 11:
                {
                        Month->Caption="Listopad";
                        break;
                }
                case 12:
                {
                        Month->Caption="Grudzieñ";
                        break;
                }
        }
}