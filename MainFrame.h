#ifndef MAINFRAME_H
#define MAINFRAME_H

//(*Headers(MainFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
//*)
#include "wx/wxsqlite3.h"

class MainFrame: public wxFrame
{
	public:

		MainFrame(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~MainFrame();

		//(*Declarations(MainFrame)
		wxButton* Button1;
		wxStaticBitmap* StaticBitmap1;
		wxStaticText* StaticText3;
		wxButton* Button2;
		//*)

	protected:

		//(*Identifiers(MainFrame)
		static const long ID_STATICTEXT3;
		static const long ID_STATICBITMAP1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(MainFrame)
		void OnButton2Click(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		//*)

        wxSQLite3Database *db;
        wxString testDBName;
        void setupDb();
		DECLARE_EVENT_TABLE()
};

#endif
