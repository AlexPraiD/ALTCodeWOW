//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int sec=3,n_Say,i,j,k=0;
AnsiString Say;

int Sr(AnsiString Read,int n)
    {
		for(i=1;i<=n;i++)
			{
				if(Read[i]=='а' || Read[i]=='А')
					{
						Form1->StringGrid1->Cells[0][i]="а";
						Form1->StringGrid1->Cells[1][i]="0192";
					}
				if(Read[i]=='б' || Read[i]=='Б')
					{
						Form1->StringGrid1->Cells[0][i]="б";
						Form1->StringGrid1->Cells[1][i]="0193";
					}
				if(Read[i]=='в' || Read[i]=='В')
					{
						Form1->StringGrid1->Cells[0][i]="в";
						Form1->StringGrid1->Cells[1][i]="0194";
					}
				if(Read[i]=='г' || Read[i]=='Г')
					{
						Form1->StringGrid1->Cells[0][i]="г";
						Form1->StringGrid1->Cells[1][i]="0195";
					}
				if(Read[i]=='д' || Read[i]=='Д')
					{
						Form1->StringGrid1->Cells[0][i]="д";
						Form1->StringGrid1->Cells[1][i]="0196";
					}
				if(Read[i]=='е' || Read[i]=='Е')
					{
						Form1->StringGrid1->Cells[0][i]="е";
						Form1->StringGrid1->Cells[1][i]="0197";
					}
				if(Read[i]=='ж' || Read[i]=='Ж')
					{
						Form1->StringGrid1->Cells[0][i]="ж";
						Form1->StringGrid1->Cells[1][i]="0198";
					}
				if(Read[i]=='з' || Read[i]=='З')
					{
						Form1->StringGrid1->Cells[0][i]="з";
						Form1->StringGrid1->Cells[1][i]="0199";
					}
				if(Read[i]=='и' || Read[i]=='И')
					{
						Form1->StringGrid1->Cells[0][i]="и";
						Form1->StringGrid1->Cells[1][i]="0200";
					}
				if(Read[i]=='й' || Read[i]=='Й')
					{
						Form1->StringGrid1->Cells[0][i]="й";
						Form1->StringGrid1->Cells[1][i]="0201";
					}
				if(Read[i]=='к' || Read[i]=='К')
					{
						Form1->StringGrid1->Cells[0][i]="к";
						Form1->StringGrid1->Cells[1][i]="0202";
					}
				if(Read[i]=='л' || Read[i]=='Л')
					{
						Form1->StringGrid1->Cells[0][i]="л";
						Form1->StringGrid1->Cells[1][i]="0203";
					}
				if(Read[i]=='м' || Read[i]=='М')
					{
						Form1->StringGrid1->Cells[0][i]="м";
						Form1->StringGrid1->Cells[1][i]="0204";
					}
				if(Read[i]=='н' || Read[i]=='Н')
					{
						Form1->StringGrid1->Cells[0][i]="н";
						Form1->StringGrid1->Cells[1][i]="0205";
					}
				if(Read[i]=='о' || Read[i]=='О')
					{
						Form1->StringGrid1->Cells[0][i]="о";
						Form1->StringGrid1->Cells[1][i]="0206";
					}
				if(Read[i]=='п' || Read[i]=='П')
					{
						Form1->StringGrid1->Cells[0][i]="п";
						Form1->StringGrid1->Cells[1][i]="0207";
					}
				if(Read[i]=='р' || Read[i]=='р')
					{
						Form1->StringGrid1->Cells[0][i]="р";
						Form1->StringGrid1->Cells[1][i]="0208";
					}
				if(Read[i]=='с' || Read[i]=='С')
					{
						Form1->StringGrid1->Cells[0][i]="с";
						Form1->StringGrid1->Cells[1][i]="0209";
					}
				if(Read[i]=='т' || Read[i]=='Т')
					{
						Form1->StringGrid1->Cells[0][i]="т";
						Form1->StringGrid1->Cells[1][i]="0210";
					}
				if(Read[i]=='у' || Read[i]=='у')
					{
						Form1->StringGrid1->Cells[0][i]="у";
						Form1->StringGrid1->Cells[1][i]="0211";
					}
				if(Read[i]=='ф' || Read[i]=='Ф')
					{
						Form1->StringGrid1->Cells[0][i]="ф";
						Form1->StringGrid1->Cells[1][i]="0212";
					}
				if(Read[i]=='х' || Read[i]=='Х')
					{
						Form1->StringGrid1->Cells[0][i]="х";
						Form1->StringGrid1->Cells[1][i]="0213";
					}
				if(Read[i]=='ц' || Read[i]=='Ц')
					{
						Form1->StringGrid1->Cells[0][i]="ц";
						Form1->StringGrid1->Cells[1][i]="0214";
					}
				if(Read[i]=='ч' || Read[i]=='Ч')
					{
						Form1->StringGrid1->Cells[0][i]="ч";
						Form1->StringGrid1->Cells[1][i]="0215";
					}
				if(Read[i]=='ш' || Read[i]=='Ш')
					{
						Form1->StringGrid1->Cells[0][i]="ш";
						Form1->StringGrid1->Cells[1][i]="0216";
					}
				if(Read[i]=='Щ' || Read[i]=='Щ')
					{
						Form1->StringGrid1->Cells[0][i]="щ";
						Form1->StringGrid1->Cells[1][i]="0217";
					}
				if(Read[i]=='ъ' || Read[i]=='Ъ')
					{
						Form1->StringGrid1->Cells[0][i]="ъ";
						Form1->StringGrid1->Cells[1][i]="0218";
					}
				if(Read[i]=='ы' || Read[i]=='Ы')
					{
						Form1->StringGrid1->Cells[0][i]="ы";
						Form1->StringGrid1->Cells[1][i]="0219";
					}
				if(Read[i]=='ь' || Read[i]=='ь')
					{
						Form1->StringGrid1->Cells[0][i]="ь";
						Form1->StringGrid1->Cells[1][i]="0220";
					}
				if(Read[i]=='э' || Read[i]=='Э')
					{
						Form1->StringGrid1->Cells[0][i]="э";
						Form1->StringGrid1->Cells[1][i]="0221";
					}
				if(Read[i]=='ю' || Read[i]=='Ю')
					{
						Form1->StringGrid1->Cells[0][i]="ю";
						Form1->StringGrid1->Cells[1][i]="0222";
					}
				if(Read[i]=='я' || Read[i]=='Я')
					{
						Form1->StringGrid1->Cells[0][i]="я";
						Form1->StringGrid1->Cells[1][i]="0223";
					}

			}

	}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[0][0]="Ник";
	StringGrid1->Cells[1][0]="Код";
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	if(Key==13)
		{
			Say=Edit1->Text;
			n_Say=Say.Length();
			Sr(Say,n_Say);
		}
	if(Key==VK_ESCAPE)
		{
			Edit1->Clear();
			for(j=1;j<=12;j++)
				{
					Form1->StringGrid1->Cells[0][j]="";
					Form1->StringGrid1->Cells[1][j]="";
				}
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Change(TObject *Sender)
{
	Say=Edit1->Text;
	n_Say=Say.Length();
	for(j=n_Say+1;j<=12;j++)
		{
			Form1->StringGrid1->Cells[0][j]="";
			Form1->StringGrid1->Cells[1][j]="";
		}

	Sr(Say,n_Say);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	if(Edit1->Text=="Ник..")
		Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid1KeyPress(TObject *Sender, System::WideChar &Key)

{
	if(Key==VK_ESCAPE)
		{
			Edit1->Clear();
			for(j=1;j<=12;j++)
				{
					Form1->StringGrid1->Cells[0][j]="";
					Form1->StringGrid1->Cells[1][j]="";
				}
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	sec-=1;
	if(sec<=0)
		{
			//keybd_event(VK_MENU, 0,0,0);  //Ctrl


			keybd_event(VK_NUMPAD0, 0,0,0);  //V
			keybd_event(VK_NUMPAD0, 0,KEYEVENTF_KEYUP,0);

			keybd_event(VK_NUMPAD1, 0,0,0);  //V
			keybd_event(VK_NUMPAD1, 0,KEYEVENTF_KEYUP,0);

			keybd_event(VK_NUMPAD9, 0,0,0);  //V
			keybd_event(VK_NUMPAD9, 0,KEYEVENTF_KEYUP,0);

			keybd_event(VK_NUMPAD2, 0,0,0);  //V
			keybd_event(VK_NUMPAD2, 0,KEYEVENTF_KEYUP,0);


			//keybd_event(VK_MENU, 0,KEYEVENTF_KEYUP,0);
			Timer1->Enabled=false;
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyPress(TObject *Sender, System::WideChar &Key)
{
	if(Key==VK_ESCAPE)
		{
			Edit1->Clear();
			for(j=1;j<=12;j++)
				{
					Form1->StringGrid1->Cells[0][j]="";
					Form1->StringGrid1->Cells[1][j]="";
				}
		}
}
//---------------------------------------------------------------------------

