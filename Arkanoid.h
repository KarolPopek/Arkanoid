//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TArcanoid : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TImage *b;
        TTimer *Timer_pilka;
        TImage *P;
        TTimer *Lewo;
        TTimer *Prawo;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image6;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        TImage *Image11;
        TImage *Image12;
        TButton *Button1;
        void __fastcall Timer_pilkaTimer(TObject *Sender);
        void __fastcall LewoTimer(TObject *Sender);
        void __fastcall PrawoTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TArcanoid(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TArcanoid *Arcanoid;
//---------------------------------------------------------------------------
#endif
