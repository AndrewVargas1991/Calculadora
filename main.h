//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Exibir1;
	TMenuItem *Exibir2;
	TMenuItem *Fechar1;
	TMenuItem *Fechar2;
	TMenuItem *Mudartema1;
	TMenuItem *Mudartema2;
	TMenuItem *Programa1;
	TPanel *Panel1;
	TSpeedButton *SpeedButtonZero;
	TSpeedButton *SpeedButtonUm;
	TSpeedButton *SpeedButtonDois;
	TSpeedButton *SpeedButtonTres;
	TSpeedButton *SpeedButtonQuatro;
	TSpeedButton *SpeedButtonCinco;
	TSpeedButton *SpeedButtonSeis;
	TSpeedButton *SpeedButtonSete;
	TSpeedButton *SpeedButtonOito;
	TSpeedButton *SpeedButtonNove;
	TSpeedButton *SpeedButtonVirgula;
	TSpeedButton *SpeedButtonMais;
	TSpeedButton *SpeedButtonMenos;
	TSpeedButton *SpeedButtonMultiplica;
	TSpeedButton *SpeedButtonDivide;
	TSpeedButton *SpeedButtonIgual;
	TSpeedButton *SpeedButtonLimpar;
	TMenuItem *Normal;
	TMenuItem *AmethystKamri;
	TMenuItem *AquaLightSlate;
	TMenuItem *CyanDusk;
	TMenuItem *Glow;
	TMenuItem *IcebergClassico;
	TMenuItem *OnyxBlue;
	TMenuItem *SapphireKamri;
	TMenuItem *Sky;
	void __fastcall SpeedButtonLimparClick(TObject *Sender);
	void __fastcall Exibir2Click(TObject *Sender);
	void __fastcall Fechar1Click(TObject *Sender);
	void __fastcall Programa1Click(TObject *Sender);
	void __fastcall NormalClick(TObject *Sender);
	void __fastcall AmethystKamriClick(TObject *Sender);
	void __fastcall AquaLightSlateClick(TObject *Sender);
	void __fastcall CyanDuskClick(TObject *Sender);
	void __fastcall GlowClick(TObject *Sender);
	void __fastcall IcebergClassicoClick(TObject *Sender);
	void __fastcall OnyxBlueClick(TObject *Sender);
	void __fastcall SapphireKamriClick(TObject *Sender);
	void __fastcall SkyClick(TObject *Sender);
	void __fastcall SpeedButtonIgualClick(TObject *Sender);
	void __fastcall SpeedButtonZeroClick(TObject *Sender);
	void __fastcall SpeedButtonUmClick(TObject *Sender);
	void __fastcall SpeedButtonDoisClick(TObject *Sender);
	void __fastcall SpeedButtonTresClick(TObject *Sender);
	void __fastcall SpeedButtonQuatroClick(TObject *Sender);
	void __fastcall SpeedButtonCincoClick(TObject *Sender);
	void __fastcall SpeedButtonSeisClick(TObject *Sender);
	void __fastcall SpeedButtonSeteClick(TObject *Sender);
	void __fastcall SpeedButtonOitoClick(TObject *Sender);
	void __fastcall SpeedButtonNoveClick(TObject *Sender);
	void __fastcall SpeedButtonVirgulaClick(TObject *Sender);
	void __fastcall SpeedButtonMaisClick(TObject *Sender);
	void __fastcall SpeedButtonMenosClick(TObject *Sender);
	void __fastcall SpeedButtonMultiplicaClick(TObject *Sender);
	void __fastcall SpeedButtonDivideClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
        void somar();
        void diminuir();
        void multiplicar();
        void dividir();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
