//---------------------------------------------------------------------------
#pragma hdrstop
#include <vcl.h> 

#include "DB.h"
#include "Unit1.h"
#include "Unit2.h"
#include "data.h"

#define HOST "54.38.50.59"
#define USER "www2857_events"
#define PASS "8GJoBGoc3WUzkUA2rAn3"
#define BASE "www2857_events"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

DB conn;
Data data;
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        time_t czas=time(NULL);
	tm* timePtr=localtime(&czas);

        data.miesiac=(timePtr->tm_mon)+1;
        data.rok=(timePtr->tm_year)+1900;

        data.array[0]=Button1;
        data.array[1]=Button2;
        data.array[2]=Button3;
        data.array[3]=Button4;
        data.array[4]=Button5;
        data.array[5]=Button6;
        data.array[6]=Button7;
        data.array[7]=Button8;
        data.array[8]=Button9;
        data.array[9]=Button10;
        data.array[10]=Button11;
        data.array[11]=Button12;
        data.array[12]=Button13;
        data.array[13]=Button14;
        data.array[14]=Button15;
        data.array[15]=Button16;
        data.array[16]=Button17;
        data.array[17]=Button18;
        data.array[18]=Button19;
        data.array[19]=Button20;
        data.array[20]=Button21;
        data.array[21]=Button22;
        data.array[22]=Button23;
        data.array[23]=Button24;
        data.array[24]=Button25;
        data.array[25]=Button26;
        data.array[26]=Button27;
        data.array[27]=Button28;
        data.array[28]=Button29;
        data.array[29]=Button30;
        data.array[30]=Button31;
        data.array[31]=Button32;
        data.array[32]=Button33;
        data.array[33]=Button34;
        data.array[34]=Button35;
        data.array[35]=Button36;
        data.array[36]=Button37;

        int first=data.pierwszy(data.miesiac,data.rok);
        int days=data.ostatni(data.miesiac,data.rok);
        data.hide(first,days);
        data.set_value(first,days);
        data.set_month(data.miesiac,Month);
        data.set_year(Year);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::nextMonthClick(TObject *Sender)
{
        data.next_month(Month,Year);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prevMonthClick(TObject *Sender)
{
        data.prev_month(Month,Year);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Calculate_dateClick(TObject *Sender)
{
        int day=atoi((Dzien->Text).c_str());
        int month=atoi((Miesiac->Text).c_str());
        int year=atoi((Rok->Text).c_str());

// walidacja niepoprawnych dat

        if(day <= 0 || day >31)
                Dzien->Color = clRed;
        else if (day > data.ostatni(month,year))
                Dzien->Color = clRed;
        else
                Dzien->Color=clWhite;


        if(year <= 0)
                Rok->Color = clRed;
        else
                Rok->Color = clWhite;


        if(month <= 0 || month >12){
                Miesiac->Color = clRed;
                CalculatedDzien->Visible = false;
        } else
                Miesiac->Color = clWhite;

        if(month == 2) {
					
                        if(data.ostatni(month,year) < day){
                        Dzien->Color = clRed;
		       	Miesiac->Color = clRed;
                } else {
                        Miesiac->Color = clWhite;
                        CalculatedDzien->Visible = true;
                        }
        }

        if(Dzien->Color == clRed || Miesiac->Color == clRed || Rok->Color == clRed)
                CalculatedDzien->Visible = false;
        else
                CalculatedDzien->Visible = true;

        if(CalculatedDzien->Visible != false) {
        data.which_day(data.calculate_day(day,month,year),CalculatedDzien);
        CalculatedDzien->Visible=true;
        } else
                ShowMessage("\n\nWyst¹pi³ b³¹d podczas wprowadzania daty!\nZwróæ uwagê na pola w kolorze czerwonym.\n\n");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::prevYearClick(TObject *Sender)
{
        data.prev_year(Month,Year);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::nextYearClick(TObject *Sender)
{
        data.next_year(Month,Year);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        String day=Button1->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        String day=Button2->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        String day=Button3->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
        String day=Button4->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
        String day=Button5->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
        String day=Button6->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
        String day=Button7->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
        String day=Button8->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
        String day=Button9->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
        String day=Button10->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button11Click(TObject *Sender)
{
        String day=Button11->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button12Click(TObject *Sender)
{
        String day=Button12->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button13Click(TObject *Sender)
{
        String day=Button13->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button14Click(TObject *Sender)
{
        String day=Button14->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button15Click(TObject *Sender)
{
        String day=Button15->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button16Click(TObject *Sender)
{
        String day=Button16->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button17Click(TObject *Sender)
{
        String day=Button17->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button18Click(TObject *Sender)
{
        String day=Button18->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button19Click(TObject *Sender)
{
        String day=Button19->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button20Click(TObject *Sender)
{
        String day=Button20->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button21Click(TObject *Sender)
{
        String day=Button21->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button22Click(TObject *Sender)
{
        String day=Button22->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button23Click(TObject *Sender)
{
        String day=Button23->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button24Click(TObject *Sender)
{
        String day=Button24->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button25Click(TObject *Sender)
{
        String day=Button25->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button26Click(TObject *Sender)
{
        String day=Button26->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button27Click(TObject *Sender)
{
        String day=Button27->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button28Click(TObject *Sender)
{
        String day=Button28->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button29Click(TObject *Sender)
{
        String day=Button29->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button30Click(TObject *Sender)
{
        String day=Button30->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button31Click(TObject *Sender)
{
        String day=Button31->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button32Click(TObject *Sender)
{
        String day=Button32->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button33Click(TObject *Sender)
{
        String day=Button33->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button34Click(TObject *Sender)
{
        String day=Button34->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button35Click(TObject *Sender)
{
        String day=Button35->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button36Click(TObject *Sender)
{
        String day=Button36->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button37Click(TObject *Sender)
{
        String day=Button37->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);
        data.set_date(day,Label13,Label14,Label15);
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button42Click(TObject *Sender)
{
        if(Button42->Caption=="Dodaj wydarzenie")
        {
                conn.add_event(user->Caption,Edit1->Text,Label13->Caption,Label14->Caption,Label15->Caption, Edit2->Text, Edit3->Text);
        }

        if(Button42->Caption=="Usun wydarzenie")
        {
                conn.delete_event(user->Caption,Edit1->Text,data.rok,data.miesiac,Label15->Caption);
        }

        if(Button42->Caption=="Edytuj wydarzenie")
        {
                conn.update_event(user->Caption, Edit1->Text, Label13->Caption, Label14->Caption, Label15->Caption, Edit2->Text, Edit3->Text, id->Caption);
        }

        String day=Label15->Caption;
        conn.get_event(user->Caption,data.rok,data.miesiac,day,Label12);

        Label19->Caption="";
        Edit1->Text="";
        Edit2->Text="";
        Edit3->Text="";

        Button42->Visible=false;
        Button46->Visible=false;
        Button48->Visible=false;
        
        Label16->Visible=false;
        Label17->Visible=false;
        Label18->Visible=false;

        Edit1->Visible=false;
        Edit2->Visible=false;
        Edit3->Visible=false;

        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button43Click(TObject *Sender)
{
        Button43->Visible=false;
        Button44->Visible=false;
        Button45->Visible=false;

        Button42->Visible=true;
                Button42->Caption="Dodaj wydarzenie";
        Button46->Visible=true;
        Label17->Visible=true;
                Label17->Caption="Opis";
        Edit1->Visible=true;
        Button48->Visible=true;
        Button48->Caption="Dodaj godzine";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button46Click(TObject *Sender)
{
        Button43->Visible=true;
        Button44->Visible=true;
        Button45->Visible=true;

        Button42->Visible=false;
        Button46->Visible=false;
        Button48->Visible=false;

        Label16->Visible=false;
        Label17->Visible=false;
        Label18->Visible=false;

        Edit1->Visible=false;
        Edit2->Visible=false;
        Edit3->Visible=false;

        Edit1->Text="";
        Edit2->Text="";
        Edit3->Text="";

        Label19->Caption="";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button44Click(TObject *Sender)
{
        Button43->Visible=false;
        Button44->Visible=false;
        Button45->Visible=false;

        String day=Label15->Caption;
        conn.get_event_id(user->Caption,data.rok,data.miesiac,day,Label19);

        Button42->Visible=true;
                Button42->Caption="Usun wydarzenie";
        Button46->Visible=true;


        Label17->Visible=true;
                Label17->Caption="Numer";

        Edit1->Visible=true;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::signoutClick(TObject *Sender)
{
        Form2->Show();
        Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button48Click(TObject *Sender)
{
        if(Button42->Caption=="Dodaj wydarzenie")
        {
                Button48->Visible=false;
                Label16->Visible=true;
                        Label16->Caption="Godzina";

                Label18->Visible=true;
                        Label18->Caption="Minuta";


                Edit2->Visible=true;
                Edit3->Visible=true;


                Edit2->Text="";
                Edit3->Text="";
        }

        if(Button42->Caption=="Edytuj wydarzenie")
        {
                String iden=Edit1->Text;
                String day=Label15->Caption;

                if(conn.check_id(user->Caption, data.rok, data.miesiac, day, iden)==1) {
                Button48->Visible=false;

                Label17->Visible=true;
                        Label17->Caption="Opis";
                        id->Caption = Edit1->Text;
                        Edit1->Text="";


                Label16->Visible=true;
                        Label16->Caption="Godzina";
                        Edit2->Visible=true;
                        Edit2->Text="";

                Label18->Visible=true;
                        Label18->Caption="Minuta";
                        Edit3->Visible=true;
                        Edit3->Text="";


                conn.edit_event(user->Caption, iden, Edit1, Edit2);
                conn.edit_event2(user->Caption, iden, Edit3);





                } else {

                        Edit1->Text="";
                        ShowMessage("Podano zly numer zadania!");

                }

        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button45Click(TObject *Sender)
{
        Button42->Caption="Edytuj wydarzenie";

        Button42->Visible=true;
        Button46->Visible=true;
        Button48->Visible=true;
        Button48->Caption="Sprawdz wydarzenie";

        Label17->Caption="Numer";
        Label17->Visible=true;

        String day=Label15->Caption;
        conn.get_event_id(user->Caption,data.rok,data.miesiac,day,Label19);


        Button43->Visible=false;
        Button44->Visible=false;
        Button45->Visible=false;

        Edit1->Visible=true;



}
//---------------------------------------------------------------------------

