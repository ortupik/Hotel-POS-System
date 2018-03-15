#ifndef USERLOGINFRAME_H
#define USERLOGINFRAME_H

//(*Headers(userLoginFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)
#include "wx/wxsqlite3.h"

class userLoginFrame: public wxFrame
{
	public:

		userLoginFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~userLoginFrame();

		//(*Declarations(userLoginFrame)
		wxStaticText* StaticText2;
		wxStaticBitmap* StaticBitmap1;
		wxTextCtrl* passwordField;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxStatusBar* StatusBar1;
		wxButton* loginButton;
		wxTextCtrl* usernameField;
		//*)

	protected:

		//(*Identifiers(userLoginFrame)
		static const long ID_STATICTEXT3;
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON1;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(userLoginFrame)
		void OnloginButtonClick(wxCommandEvent& event);
		//*)

        wxSQLite3Database *db;
        wxString testDBName;
        wxString getUsername();
        wxString username,password;

		DECLARE_EVENT_TABLE()
};

#endif
