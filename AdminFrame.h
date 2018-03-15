#ifndef ADMINFRAME_H
#define ADMINFRAME_H

//(*Headers(AdminFrame)
#include <wx/listctrl.h>
#include <wx/srchctrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/filepicker.h>
#include <wx/toolbar.h>
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/combobox.h>
#include <wx/statusbr.h>
//*)
#include"wx/wxsqlite3.h"

class AdminFrame: public wxFrame
{
	public:

		AdminFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AdminFrame();


		//(*Declarations(AdminFrame)
		wxStaticText* StaticText10;
		wxStaticText* StaticText9;
		wxStaticText* StaticText20;
		wxToolBar* ToolBar1;
		wxListCtrl* ListCtrl1;
		wxStaticText* quantityStaticField;
		wxStaticText* itemStaticField;
		wxToolBarToolBase* ToolBarItem3;
		wxTextCtrl* qtyField;
		wxFilePickerCtrl* FilePickerCtrl1;
		wxMenuItem* MenuItem5;
		wxStaticText* StaticText13;
		wxStaticText* StaticText2;
		wxMenuItem* MenuItem2;
		wxStaticText* StaticText14;
		wxMenu* Menu3;
		wxButton* Button1;
		wxStaticText* StaticText6;
		wxStaticBitmap* StaticBitmap1;
		wxMenuItem* MenuItem1;
		wxMenuItem* MenuItem4;
		wxStaticText* StaticText19;
		wxStaticText* StaticText8;
		wxStaticText* StaticText11;
		wxTextCtrl* itemField;
		wxStaticText* StaticText18;
		wxBitmapButton* BitmapButton2;
		wxStaticText* StaticText1;
		wxTextCtrl* priceField;
		wxStaticText* StaticText3;
		wxMenu* Menu1;
		wxBitmapButton* BitmapButton1;
		wxTextCtrl* itemUpdateField;
		wxButton* Button2;
		wxTextCtrl* quantityUpdateField;
		wxTextCtrl* priceUpdateField;
		wxToolBarToolBase* ToolBarItem1;
		wxMenuItem* MenuItem3;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxStatusBar* StatusBar1;
		wxComboBox* ComboBox1;
		wxToolBarToolBase* ToolBarItem5;
		wxStaticText* priceStaticField;
		wxStaticText* StaticText15;
		wxStaticText* StaticText12;
		wxBitmapButton* BitmapButton3;
		wxMenuBar* MenuBar1;
		wxMenu* Menu2;
		wxStaticText* StaticText17;
		wxStaticText* StaticText4;
		wxToolBarToolBase* ToolBarItem2;
		wxTextCtrl* idField;
		wxStaticText* StaticText16;
		wxMenu* Menu4;
		wxSearchCtrl* SearchCtrl1;
		//*)

	protected:

		//(*Identifiers(AdminFrame)
		static const long ID_SEARCHCTRL1;
		static const long ID_COMBOBOX1;
		static const long ID_LISTCTRL1;
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BITMAPBUTTON1;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT6;
		static const long ID_FILEPICKERCTRL1;
		static const long ID_BITMAPBUTTON3;
		static const long ID_STATICTEXT11;
		static const long ID_BITMAPBUTTON2;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT21;
		static const long ID_STATICTEXT18;
		static const long ID_STATICTEXT19;
		static const long ID_STATICTEXT22;
		static const long ID_STATICTEXT20;
		static const long ID_STATICTEXT23;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT12;
		static const long ID_STATICTEXT13;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT15;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT16;
		static const long ID_TEXTCTRL7;
		static const long ID_BUTTON1;
		static const long ID_MAINPAGE;
		static const long help;
		static const long ID_SETTINGS;
		static const long ID_EXIT;
		static const long ID_TOOLBAR1;
		static const long ID_STATUSBAR1;
		static const long ID_MENUITEM1;
		static const long ID_MENUITEM3;
		static const long ID_MENUITEM4;
		static const long ID_MENUITEM5;
		static const long ID_MENUITEM2;
		//*)

	private:

		//(*Handlers(AdminFrame)
		void OnButton3Click(wxCommandEvent& event);
		void OnChoice1Select(wxCommandEvent& event);
		void OnComboBox1Selected(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnBitmapButton2Click(wxCommandEvent& event);
		void OnSearchCtrl1Text(wxCommandEvent& event);
		void OnListCtrl1BeginDrag(wxListEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		//*)


		wxString item,selectedItem;
		wxString quantity;
		wxString price;
		wxString testDBName;
        wxSQLite3Database *db;
        void setColumns();
		void setListData(wxString filterString);
		void addData(wxString itemName,wxString quantity,wxString price);
		void OnExit();
		void OnSales();
		void OnSettings();
		void editProduct(wxString itemName,wxString quantity,wxString price);
		void deleteProduct(wxString itemName);
		void onMainPage();
		void OnItemSelected(wxListEvent& event);


		DECLARE_EVENT_TABLE()
};

#endif
