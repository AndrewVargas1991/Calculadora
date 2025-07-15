//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string>
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
float numero1 = NAN;
float numero2 = NAN;
float resultado = NAN;
char operacao = '0';
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonLimparClick(TObject *Sender)
{
        Form1->Panel1->Caption = "0";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Exibir2Click(TObject *Sender)
{
        Form1->Panel1->Caption = "0";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Fechar1Click(TObject *Sender)
{
        this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Programa1Click(TObject *Sender)
{
        Application->MessageBox(L"Para criar essa calculadora foram utilizadas a IDE C++ Builder da Embarcadero e a biblioteca de componentes visuais VCL.", L"Tecnologias usadas", MB_OK);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NormalClick(TObject *Sender)
{
        Form1->StyleName = "Windows";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AmethystKamriClick(TObject *Sender)
{
        Form1->StyleName = "Amethyst Kamri";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AquaLightSlateClick(TObject *Sender)
{
        Form1->StyleName = "Aqua Light Slate";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CyanDuskClick(TObject *Sender)
{
        Form1->StyleName = "Cyan Dusk";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GlowClick(TObject *Sender)
{
        Form1->StyleName = "Glow";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IcebergClassicoClick(TObject *Sender)
{
        Form1->StyleName = "Iceberg Classico";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OnyxBlueClick(TObject *Sender)
{
        Form1->StyleName = "Onyx Blue";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SapphireKamriClick(TObject *Sender)
{
        Form1->StyleName = "Sapphire Kamri";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SkyClick(TObject *Sender)
{
        Form1->StyleName = "Sky";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonIgualClick(TObject *Sender)
{
        numero2 = StrToFloat(Panel1->Caption);
        switch (operacao) {
                case '+':
	                somar();
                	break;
		case '-':
        	        diminuir();
                	break;
		case 'x':
	                multiplicar();
	                break;
		case '/':
        	        dividir();
                	break;
        }

        if (resultado == (int)resultado) {
            Panel1->Caption = resultado;
        } else {
            Panel1->Caption = FormatFloat("0.00", resultado);
        }

        numero1 = NAN;
        numero2 = NAN;
}
//---------------------------------------------------------------------------
void TForm1::somar() {
    resultado = numero1 + numero2;
    Form1->Panel1->Caption = resultado;
}

void TForm1::diminuir() {
    resultado = numero1 - numero2;
    Form1->Panel1->Caption = resultado;
}

void TForm1::multiplicar() {
    resultado = numero1 * numero2;
        Form1->Panel1->Caption = resultado;
}

void TForm1::dividir() {
    if (numero2 != 0){
        resultado = numero1 / numero2;
        Form1->Panel1->Caption = resultado;
    }
    else{
        ShowMessage("Impossível dividir por zero.");
        numero1 = NAN;
        numero2 = NAN;
        resultado = 0;
    }
}

void __fastcall TForm1::SpeedButtonZeroClick(TObject *Sender)
{
	if(Panel1->Caption != "0")
        	Panel1->Caption = Panel1->Caption + "0";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonUmClick(TObject *Sender)
{
	if(Panel1->Caption == "0")
	        Panel1->Caption = "1";
        else
        	Panel1->Caption = Panel1->Caption + "1";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonDoisClick(TObject *Sender)
{
	if(Panel1->Caption == "0")
	        Panel1->Caption = "2";
        else
        	Panel1->Caption = Panel1->Caption + "2";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonTresClick(TObject *Sender)
{
	if(Panel1->Caption == "0")
	        Panel1->Caption = "3";
        else
        	Panel1->Caption = Panel1->Caption + "3";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonQuatroClick(TObject *Sender)
{
	if(Panel1->Caption == "0")
	        Panel1->Caption = "4";
        else
        	Panel1->Caption = Panel1->Caption + "4";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonCincoClick(TObject *Sender)
{
	if(Panel1->Caption == "0")
	        Panel1->Caption = "5";
        else
        	Panel1->Caption = Panel1->Caption + "5";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonSeisClick(TObject *Sender)
{
	if(Panel1->Caption == "0")
	        Panel1->Caption = "6";
        else
        	Panel1->Caption = Panel1->Caption + "6";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonSeteClick(TObject *Sender)
{
	if(Panel1->Caption == "0")
	        Panel1->Caption = "7";
        else
        	Panel1->Caption = Panel1->Caption + "7";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonOitoClick(TObject *Sender)
{
	if(Panel1->Caption == "0")
	        Panel1->Caption = "8";
        else
        	Panel1->Caption = Panel1->Caption + "8";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonNoveClick(TObject *Sender)
{
	if(Panel1->Caption == "0")
	        Panel1->Caption = "9";
        else
        	Panel1->Caption = Panel1->Caption + "9";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonVirgulaClick(TObject *Sender)
{
        if (!(Panel1->Caption.Pos('.')))
		Panel1->Caption = Panel1->Caption + ",";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonMaisClick(TObject *Sender)
{
        operacao = '+';

        if (std::isnan(numero1)) {
                numero1 = StrToFloat(Panel1->Caption);
	        Panel1->Caption = "0";
	}
        else {
		numero2 = StrToFloat(Panel1->Caption);
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonMenosClick(TObject *Sender)
{
        operacao = '-';

        if (std::isnan(numero1)) {
                numero1 = StrToFloat(Panel1->Caption);
	        Panel1->Caption = "0";
	}
        else {
		numero2 = StrToFloat(Panel1->Caption);
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonMultiplicaClick(TObject *Sender)
{
        operacao = 'x';

        if (std::isnan(numero1)) {
                numero1 = StrToFloat(Panel1->Caption);
	        Panel1->Caption = "0";
	}
        else {
		numero2 = StrToFloat(Panel1->Caption);
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButtonDivideClick(TObject *Sender)
{
        operacao = '/';

        if (std::isnan(numero1)) {
                numero1 = StrToFloat(Panel1->Caption);
	        Panel1->Caption = "0";
	}
        else {
		numero2 = StrToFloat(Panel1->Caption);
	}

}
//---------------------------------------------------------------------------

