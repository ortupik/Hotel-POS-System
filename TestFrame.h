#ifndef TESTFRAME_H
#define TESTFRAME_H

//(*Headers(TestFrame)
#include <wx/listctrl.h>
#include <wx/srchctrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/aui/aui.h>
#include <wx/toolbar.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/frame.h>
#include <wx/combobox.h>
#include <wx/statusbr.h>
//*)

class TestFrame: public wxFrame
{
	public:

		TestFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~TestFrame();

		//(*Declarations(TestFrame)
		wxToolBar* ToolBar1;
		wxListCtrl* ListCtrl1;
		wxToolBarToolBase* ToolBarItem3;
		wxTextCtrl* qtyField;
		wxMenuItem* MenuItem5;
		wxStaticText* StaticText2;
		wxMenuItem* MenuItem2;
		wxMenu* Menu3;
		wxStaticBitmap* StaticBitmap1;
		wxMenuItem* MenuItem1;
		wxMenuItem* MenuItem4;
		wxTextCtrl* itemField;
		wxPanel* Panel1;
		wxBitmapButton* BitmapButton2;
		wxStaticText* StaticText1;
		wxTextCtrl* priceField;
		wxStaticText* StaticText3;
		wxMenu* Menu1;
		wxBitmapButton* BitmapButton1;
		wxToolBarToolBase* ToolBarItem1;
		wxMenuItem* MenuItem3;
		wxStaticText* StaticText5;
		wxStatusBar* StatusBar1;
		wxComboBox* ComboBox1;
		wxAuiNotebook* AuiNotebook1;
		wxTextCtrl* TextCtrl1;
		wxMenuBar* MenuBar1;
		wxMenu* Menu2;
		wxStaticText* StaticText4;
		wxToolBarToolBase* ToolBarItem2;
		wxMenu* Menu4;
		wxSearchCtrl* SearchCtrl1;
		//*)

	protected:

		//(*Identifiers(TestFrame)
		static const long ID_SEARCHCTRL1;
		static const long ID_COMBOBOX1;
		static const long ID_LISTCTRL1;
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BITMAPBUTTON1;
		static const long ID_BITMAPBUTTON2;
		static const long ID_PANEL1;
		static const long ID_AUINOTEBOOK1;
		static const long ID_ADDEMPLOYEE;
		static const long help;
		static const long exit;
		static const long ID_TOOLBAR1;
		static const long ID_STATUSBAR1;
		static const long ID_MENUITEM1;
		static const long ID_MENUITEM3;
		static const long ID_MENUITEM4;
		static const long ID_MENUITEM5;
		static const long ID_MENUITEM2;
		//*)

	private:

		//(*Handlers(TestFrame)
		//*)
		void setColumns();
		void setListData();
		void addData();
        wxString item,qty,price;

		DECLARE_EVENT_TABLE()
};

#endif
