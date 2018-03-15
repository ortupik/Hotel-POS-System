#ifndef ADMINEDITDIALOG_H
#define ADMINEDITDIALOG_H

//(*Headers(AdminEditDialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/dialog.h>
//*)
#include"wx/wxsqlite3.h"

class AdminEditDialog: public wxDialog
{
	public:

		AdminEditDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AdminEditDialog();

		//(*Declarations(AdminEditDialog)
		wxStaticText* StaticText10;
		wxStaticText* StaticText9;
		wxStaticBitmap* StaticBitmap2;
		wxStaticText* StaticText20;
		wxTextCtrl* firstNamefield;
		wxStaticText* StaticText13;
		wxStaticText* StaticText2;
		wxTextCtrl* idNoField;
		wxStaticText* StaticText14;
		wxStaticText* StaticText6;
		wxTextCtrl* passwordField;
		wxStaticText* StaticText19;
		wxStaticText* StaticText8;
		wxStaticText* StaticText11;
		wxStaticText* StaticText18;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxTextCtrl* ConfirmPasswordField;
		wxBitmapButton* BitmapButton1;
		wxStaticText* StaticText21;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxTextCtrl* lastNameField;
		wxTextCtrl* phoneNoField;
		wxStaticText* StaticText15;
		wxStaticText* StaticText12;
		wxTextCtrl* usernameField;
		wxStaticText* StaticText4;
		wxStaticText* StaticText17;
		wxStaticText* StaticText16;
		//*)

	protected:

		//(*Identifiers(AdminEditDialog)
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT12;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT13;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT19;
		static const long ID_STATICTEXT20;
		static const long ID_STATICTEXT17;
		static const long ID_STATICTEXT18;
		static const long ID_STATICTEXT14;
		static const long ID_STATICTEXT10;
		static const long ID_STATICBITMAP2;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT16;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT15;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT21;
		static const long ID_TEXTCTRL7;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BITMAPBUTTON1;
		//*)

	private:

		//(*Handlers(AdminEditDialog)
		void OnBitmapButton1Click(wxCommandEvent& event);
		//*)

        wxString testDBName;
        wxSQLite3Database *db;
		wxString firstName,lastName,idNo,phoneNo,username,password;
		void editUser(wxString firstName,wxString lastName,wxString idNo,wxString phoneNo,wxString username,wxString password);
		DECLARE_EVENT_TABLE()
};

#endif
