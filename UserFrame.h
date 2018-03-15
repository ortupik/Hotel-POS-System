#ifndef USERFRAME_H
#define USERFRAME_H

//(*Headers(UserFrame)
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

class UserFrame: public wxFrame
{
	public:

		UserFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~UserFrame();

		//(*Declarations(UserFrame)
		wxStaticText* StaticText10;
		wxStaticText* StaticText22;
		wxStaticText* StaticText9;
		wxBitmapButton* BitmapButton35;
		wxBitmapButton* BitmapButton36;
		wxStaticText* StaticText20;
		wxBitmapButton* BitmapButton34;
		wxBitmapButton* BitmapButton31;
		wxBitmapButton* BitmapButton30;
		wxToolBar* ToolBar1;
		wxListCtrl* ListCtrl1;
		wxBitmapButton* BitmapButton24;
		wxStaticText* StaticText29;
		wxBitmapButton* BitmapButton22;
		wxBitmapButton* BitmapButton5;
		wxToolBarToolBase* ToolBarItem3;
		wxStaticText* StaticText37;
		wxStaticText* StaticText33;
		wxStaticText* StaticText13;
		wxStaticText* StaticText2;
		wxPanel* Panel4;
		wxBitmapButton* BitmapButton17;
		wxStaticText* StaticText30;
		wxStaticText* StaticText14;
		wxBitmapButton* BitmapButton19;
		wxButton* Button1;
		wxStaticText* StaticText26;
		wxStaticText* StaticText6;
		wxStaticBitmap* StaticBitmap1;
		wxBitmapButton* BitmapButton9;
		wxStaticText* StaticText40;
		wxStaticText* StaticText32;
		wxStaticText* StaticText19;
		wxStaticText* StaticText38;
		wxStaticText* StaticText8;
		wxStaticText* StaticText11;
		wxBitmapButton* BitmapButton26;
		wxBitmapButton* BitmapButton20;
		wxStaticText* StaticText18;
		wxBitmapButton* BitmapButton14;
		wxStaticText* StaticText31;
		wxBitmapButton* BitmapButton2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText27;
		wxBitmapButton* BitmapButton8;
		wxBitmapButton* BitmapButton13;
		wxStaticText* StaticText3;
		wxBitmapButton* BitmapButton1;
		wxBitmapButton* BitmapButton28;
		wxStaticText* StaticText44;
		wxPanel* Panel3;
		wxStaticText* StaticText39;
		wxStaticText* StaticText21;
		wxBitmapButton* BitmapButton21;
		wxBitmapButton* BitmapButton12;
		wxStaticText* StaticText23;
		wxBitmapButton* BitmapButton38;
		wxStaticText* StaticText24;
		wxBitmapButton* BitmapButton37;
		wxToolBarToolBase* ToolBarItem1;
		wxStaticText* StaticText34;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxStatusBar* StatusBar1;
		wxBitmapButton* BitmapButton6;
		wxBitmapButton* BitmapButton23;
		wxBitmapButton* BitmapButton29;
		wxBitmapButton* BitmapButton7;
		wxAuiNotebook* AuiNotebook1;
		wxBitmapButton* BitmapButton4;
		wxStaticText* StaticText28;
		wxStaticText* StaticText41;
		wxStaticText* StaticText43;
		wxStaticText* StaticText15;
		wxBitmapButton* BitmapButton3;
		wxStaticText* StaticText35;
		wxPanel* Panel2;
		wxStaticText* StaticText25;
		wxBitmapButton* BitmapButton32;
		wxStaticText* StaticText17;
		wxStaticText* StaticText36;
		wxBitmapButton* BitmapButton39;
		wxStaticText* StaticText4;
		wxBitmapButton* BitmapButton27;
		wxBitmapButton* BitmapButton11;
		wxToolBarToolBase* ToolBarItem2;
		wxBitmapButton* BitmapButton33;
		wxStaticText* StaticText16;
		wxBitmapButton* BitmapButton25;
		//*)

	protected:

		//(*Identifiers(UserFrame)
		static const long ID_BITMAPBUTTON14;
		static const long ID_STATICTEXT16;
		static const long ID_BITMAPBUTTON13;
		static const long ID_STATICTEXT15;
		static const long ID_BITMAPBUTTON12;
		static const long ID_STATICTEXT14;
		static const long ID_BITMAPBUTTON11;
		static const long ID_STATICTEXT13;
		static const long ID_BITMAPBUTTON9;
		static const long ID_STATICTEXT11;
		static const long ID_BITMAPBUTTON8;
		static const long ID_STATICTEXT10;
		static const long ID_BITMAPBUTTON7;
		static const long ID_STATICTEXT9;
		static const long ID_BITMAPBUTTON6;
		static const long ID_STATICTEXT8;
		static const long ID_BITMAPBUTTON5;
		static const long ID_STATICTEXT7;
		static const long ID_BITMAPBUTTON4;
		static const long ID_STATICTEXT6;
		static const long ID_BITMAPBUTTON3;
		static const long ID_STATICTEXT5;
		static const long ID_BITMAPBUTTON2;
		static const long ID_STATICTEXT4;
		static const long ID_BITMAPBUTTON1;
		static const long ID_STATICTEXT3;
		static const long ID_PANEL2;
		static const long ID_BITMAPBUTTON32;
		static const long ID_STATICTEXT22;
		static const long ID_BITMAPBUTTON31;
		static const long ID_STATICTEXT21;
		static const long ID_BITMAPBUTTON30;
		static const long ID_STATICTEXT20;
		static const long ID_BITMAPBUTTON25;
		static const long ID_STATICTEXT19;
		static const long ID_BITMAPBUTTON21;
		static const long ID_STATICTEXT18;
		static const long ID_BITMAPBUTTON24;
		static const long ID_STATICTEXT29;
		static const long ID_BITMAPBUTTON23;
		static const long ID_STATICTEXT28;
		static const long ID_BITMAPBUTTON22;
		static const long ID_STATICTEXT27;
		static const long ID_BITMAPBUTTON20;
		static const long ID_STATICTEXT26;
		static const long ID_BITMAPBUTTON19;
		static const long ID_STATICTEXT24;
		static const long ID_BITMAPBUTTON39;
		static const long ID_STATICTEXT40;
		static const long ID_BITMAPBUTTON38;
		static const long ID_STATICTEXT39;
		static const long ID_BITMAPBUTTON37;
		static const long ID_STATICTEXT38;
		static const long ID_BITMAPBUTTON36;
		static const long ID_STATICTEXT37;
		static const long ID_BITMAPBUTTON35;
		static const long ID_STATICTEXT36;
		static const long ID_BITMAPBUTTON34;
		static const long ID_STATICTEXT35;
		static const long ID_BITMAPBUTTON33;
		static const long ID_STATICTEXT34;
		static const long ID_BITMAPBUTTON29;
		static const long ID_STATICTEXT33;
		static const long ID_BITMAPBUTTON28;
		static const long ID_STATICTEXT32;
		static const long ID_BITMAPBUTTON27;
		static const long ID_STATICTEXT31;
		static const long ID_BITMAPBUTTON26;
		static const long ID_STATICTEXT30;
		static const long ID_BITMAPBUTTON17;
		static const long ID_STATICTEXT25;
		static const long ID_PANEL3;
		static const long ID_PANEL4;
		static const long ID_AUINOTEBOOK1;
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT2;
		static const long ID_LISTCTRL1;
		static const long ID_STATICTEXT43;
		static const long ID_STATICTEXT44;
		static const long ID_BUTTON1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT23;
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT41;
		static const long ID_ADDEMPLOYEE;
		static const long help;
		static const long exit;
		static const long ID_TOOLBAR1;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(UserFrame)
		void OnPanel1Paint(wxPaintEvent& event);
		void OnBitmapButton8Click(wxCommandEvent& event);
		void OnListCtrl1BeginDrag(wxListEvent& event);
		//*)

        void setColumns();
        void setListData();
		DECLARE_EVENT_TABLE()
};

#endif
