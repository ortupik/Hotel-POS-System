#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

//(*Headers(optionsDialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/dialog.h>
//*)

class optionsDialog: public wxDialog
{
	public:

		optionsDialog(wxWindow* parent,wxString usernameString);
		virtual ~optionsDialog();

		//(*Declarations(optionsDialog)
		wxStaticText* StaticText2;
		wxStaticBitmap* StaticBitmap1;
		wxBitmapButton* BitmapButton2;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxBitmapButton* BitmapButton1;
		wxBitmapButton* BitmapButton4;
		wxBitmapButton* BitmapButton3;
		wxStaticText* StaticText4;
		//*)

	protected:

		//(*Identifiers(optionsDialog)
		static const long ID_STATICBITMAP1;
		static const long ID_BITMAPBUTTON3;
		static const long ID_STATICTEXT3;
		static const long ID_BITMAPBUTTON4;
		static const long ID_STATICTEXT4;
		static const long ID_BITMAPBUTTON2;
		static const long ID_STATICTEXT2;
		static const long ID_BITMAPBUTTON1;
		static const long ID_STATICTEXT1;
		//*)

	private:

		//(*Handlers(optionsDialog)
		void OnListBox1Select(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnBitmapButton2Click(wxCommandEvent& event);
		void OnBitmapButton3Click(wxCommandEvent& event);
		void OnBitmapButton4Click(wxCommandEvent& event);
		void OnBitmapButton4Click1(wxCommandEvent& event);
		void OnBitmapButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
