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
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0192";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0193";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0194";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0195";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0196";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0197";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0198";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0199";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0200";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0201";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0202";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0203";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0204";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0205";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0206";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0207";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0208";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0209";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0210";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0211";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0212";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0213";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0214";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0215";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0216";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0217";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0218";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0219";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0220";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0221";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
						Form1->StringGrid1->Cells[1][i]="0222";
					}
				if(Read[i]=='�' || Read[i]=='�')
					{
						Form1->StringGrid1->Cells[0][i]="�";
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
	StringGrid1->Cells[0][0]="���";
	StringGrid1->Cells[1][0]="���";
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
	if(Edit1->Text=="���..")
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

