#ifndef SALESFRAME_H
#define SALESFRAME_H

//(*Headers(SalesFrame)
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/aui/aui.h>
#include <wx/toolbar.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)
#include "wx/wxsqlite3.h"
#include <wx/printdlg.h>
#include <wx/print.h>

class SalesFrame: public wxFrame
{
	public:

		SalesFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~SalesFrame();


		//(*Declarations(SalesFrame)
		wxStaticText* StaticText10;
		wxStaticText* StaticText9;
		wxToolBar* ToolBar1;
		wxListCtrl* ListCtrl1;
		wxBitmapButton* BitmapButton5;
		wxToolBarToolBase* ToolBarItem3;
		wxBitmapButton* BitmapButton16;
		wxStaticText* StaticText13;
		wxStaticText* StaticText2;
		wxPanel* Panel4;
		wxStaticText* StaticText14;
		wxButton* Button1;
		wxStaticText* StaticText6;
		wxStaticBitmap* StaticBitmap1;
		wxBitmapButton* BitmapButton9;
		wxStaticText* StaticText40;
		wxBitmapButton* BitmapButton10;
		wxStaticText* StaticText42;
		wxStaticText* StaticText38;
		wxStaticText* StaticText8;
		wxStaticText* StaticText11;
		wxPanel* Panel1;
		wxBitmapButton* BitmapButton2;
		wxStaticText* StaticText1;
		wxBitmapButton* BitmapButton8;
		wxBitmapButton* BitmapButton13;
		wxStaticText* StaticText3;
		wxBitmapButton* BitmapButton1;
		wxStaticText* StaticText39;
		wxPanel* Panel3;
		wxBitmapButton* BitmapButton12;
		wxToolBarToolBase* ToolBarItem1;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxBitmapButton* BitmapButtonL;
		wxStatusBar* StatusBar1;
		wxStaticText* totalField;
		wxBitmapButton* BitmapButton6;
		wxBitmapButton* BitmapButton7;
		wxAuiNotebook* AuiNotebook1;
		wxBitmapButton* BitmapButton4;
		wxStaticText* StaticText41;
		wxStaticText* StaticText15;
		wxStaticText* StaticText12;
		wxBitmapButton* BitmapButton3;
		wxPanel* Panel2;
		wxStaticText* StaticText17;
		wxStaticText* StaticText4;
		wxBitmapButton* BitmapButton11;
		wxToolBarToolBase* ToolBarItem2;
		//*)

	protected:

		//(*Identifiers(SalesFrame)
		static const long ID_BITMAPBUTTON7;
		static const long ID_STATICTEXT8;
		static const long ID_BITMAPBUTTON5;
		static const long ID_STATICTEXT6;
		static const long ID_BITMAPBUTTON14;
		static const long ID_STATICTEXT15;
		static const long ID_BITMAPBUTTON13;
		static const long ID_STATICTEXT14;
		static const long ID_BITMAPBUTTON12;
		static const long ID_STATICTEXT13;
		static const long ID_BITMAPBUTTON4;
		static const long ID_STATICTEXT5;
		static const long ID_BITMAPBUTTON3;
		static const long ID_STATICTEXT4;
		static const long ID_BITMAPBUTTON11;
		static const long ID_STATICTEXT12;
		static const long ID_BITMAPBUTTON10;
		static const long ID_STATICTEXT11;
		static const long ID_BITMAPBUTTON9;
		static const long ID_STATICTEXT10;
		static const long ID_BITMAPBUTTON8;
		static const long ID_STATICTEXT9;
		static const long ID_BITMAPBUTTON6;
		static const long ID_STATICTEXT7;
		static const long ID_BITMAPBUTTON2;
		static const long ID_STATICTEXT3;
		static const long ID_BITMAPBUTTON16;
		static const long ID_STATICTEXT17;
		static const long ID_PANEL2;
		static const long ID_PANEL3;
		static const long ID_BITMAPBUTTON1;
		static const long ID_STATICTEXT1;
		static const long ID_PANEL4;
		static const long ID_PANEL1;
		static const long ID_AUINOTEBOOK1;
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT2;
		static const long ID_LISTCTRL1;
		static const long ID_STATICTEXT42;
		static const long ID_STATICTEXT43;
		static const long ID_STATICTEXT40;
		static const long ID_STATICTEXT41;
		static const long ID_STATICTEXT38;
		static const long ID_STATICTEXT39;
		static const long ID_BUTTON1;
		static const long ID_MAINPAGE;
		static const long help;
		static const long ID_EXIT;
		static const long ID_TOOLBAR1;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(SalesFrame)
		void OnBitmapButton23Click(wxCommandEvent& event);
		void OnBitmapButton6Click(wxCommandEvent& event);
		void OnBitmapButton6Click1(wxCommandEvent& event);
		void OnBitmapButton4Click(wxCommandEvent& event);
		void OnBitmapButton6Click2(wxCommandEvent& event);
		void OnBitmapButton12Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnBitmapButton2Click(wxCommandEvent& event);
		//*)

		wxPrintDialogData printDialogData;
		void setColumns();
		void setListData(wxString filterString);
        void setAddData(wxString selectionItem);
        void onExit();
        void onMainPage();
        void printReceipt();

        wxString item;
		wxString quantity;
		wxString price;
        wxString testDBName;
        wxSQLite3Database* db;
		DECLARE_EVENT_TABLE()
};

#endif
