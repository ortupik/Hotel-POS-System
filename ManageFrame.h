#ifndef MANAGEFRAME_H
#define MANAGEFRAME_H

//(*Headers(ManageFrame)
#include <wx/listctrl.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/aui/aui.h>
#include <wx/toolbar.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)
#include "wx/wxsqlite3.h"
class ManageFrame: public wxFrame
{
	public:

		ManageFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~ManageFrame();

		//(*Declarations(ManageFrame)
		wxToolBar* ToolBar1;
		wxListCtrl* ListCtrl1;
		wxToolBarToolBase* ToolBarItem3;
		wxStaticText* StaticText2;
		wxTextCtrl* idNoField;
		wxTextCtrl* firstNameField;
		wxStaticText* StaticText6;
		wxStaticBitmap* StaticBitmap1;
		wxTextCtrl* passwordField;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxBitmapButton* BitmapButton1;
		wxToolBarToolBase* ToolBarItem1;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxTextCtrl* lastNameField;
		wxStatusBar* StatusBar1;
		wxTextCtrl* phoneNoField;
		wxAuiNotebook* AuiNotebook1;
		wxTextCtrl* usernameField;
		wxStaticText* StaticText4;
		wxToolBarToolBase* ToolBarItem2;
		//*)

	protected:

		//(*Identifiers(ManageFrame)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT7;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BITMAPBUTTON1;
		static const long ID_LISTCTRL1;
		static const long ID_PANEL1;
		static const long ID_AUINOTEBOOK1;
		static const long ID_MAINPAGE;
		static const long help;
		static const long ID_EXIT;
		static const long ID_TOOLBAR1;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(ManageFrame)
		void OnBitmapButton1Click(wxCommandEvent& event);
		//*)
        wxString testDBName;
		wxString firstName,lastName,idNo,phoneNo,lastLogin,username,password;
        wxSQLite3Database *db;
        void setColumns();
		void setListData();
		void addData();
		void onMainPage();
		void onItemClicked(wxListEvent& event);
		DECLARE_EVENT_TABLE()
};

#endif
