#include "SalesFrame.h"
#include <wx/wx.h>
#include "icons/item.xpm"
#include "MainFrame.h"



//(*InternalHeaders(SalesFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(SalesFrame)
const long SalesFrame::ID_BITMAPBUTTON7 = wxNewId();
const long SalesFrame::ID_STATICTEXT8 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON5 = wxNewId();
const long SalesFrame::ID_STATICTEXT6 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON14 = wxNewId();
const long SalesFrame::ID_STATICTEXT15 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON13 = wxNewId();
const long SalesFrame::ID_STATICTEXT14 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON12 = wxNewId();
const long SalesFrame::ID_STATICTEXT13 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON4 = wxNewId();
const long SalesFrame::ID_STATICTEXT5 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON3 = wxNewId();
const long SalesFrame::ID_STATICTEXT4 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON11 = wxNewId();
const long SalesFrame::ID_STATICTEXT12 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON10 = wxNewId();
const long SalesFrame::ID_STATICTEXT11 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON9 = wxNewId();
const long SalesFrame::ID_STATICTEXT10 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON8 = wxNewId();
const long SalesFrame::ID_STATICTEXT9 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON6 = wxNewId();
const long SalesFrame::ID_STATICTEXT7 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON2 = wxNewId();
const long SalesFrame::ID_STATICTEXT3 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON16 = wxNewId();
const long SalesFrame::ID_STATICTEXT17 = wxNewId();
const long SalesFrame::ID_PANEL2 = wxNewId();
const long SalesFrame::ID_PANEL3 = wxNewId();
const long SalesFrame::ID_BITMAPBUTTON1 = wxNewId();
const long SalesFrame::ID_STATICTEXT1 = wxNewId();
const long SalesFrame::ID_PANEL4 = wxNewId();
const long SalesFrame::ID_PANEL1 = wxNewId();
const long SalesFrame::ID_AUINOTEBOOK1 = wxNewId();
const long SalesFrame::ID_STATICBITMAP1 = wxNewId();
const long SalesFrame::ID_STATICTEXT2 = wxNewId();
const long SalesFrame::ID_LISTCTRL1 = wxNewId();
const long SalesFrame::ID_STATICTEXT42 = wxNewId();
const long SalesFrame::ID_STATICTEXT43 = wxNewId();
const long SalesFrame::ID_STATICTEXT40 = wxNewId();
const long SalesFrame::ID_STATICTEXT41 = wxNewId();
const long SalesFrame::ID_STATICTEXT38 = wxNewId();
const long SalesFrame::ID_STATICTEXT39 = wxNewId();
const long SalesFrame::ID_BUTTON1 = wxNewId();
const long SalesFrame::ID_MAINPAGE = wxNewId();
const long SalesFrame::help = wxNewId();
const long SalesFrame::ID_EXIT = wxNewId();
const long SalesFrame::ID_TOOLBAR1 = wxNewId();
const long SalesFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(SalesFrame,wxFrame)
	//(*EventTable(SalesFrame)
	//*)
END_EVENT_TABLE()

SalesFrame::SalesFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(SalesFrame)
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer15;
	wxBoxSizer* BoxSizer19;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer21;
	wxBoxSizer* BoxSizer13;
	wxBoxSizer* BoxSizer41;
	wxBoxSizer* BoxSizer42;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer16;
	wxBoxSizer* BoxSizer18;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer14;
	wxGridSizer* GridSizer1;
	wxBoxSizer* BoxSizer17;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer9;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxBoxSizer* BoxSizer3;
	wxGridSizer* GridSizer2;
	wxBoxSizer* BoxSizer40;

	Create(parent, wxID_ANY, _("Techbay"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(1200,850));
	SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	SetBackgroundColour(wxColour(47,79,79));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("icons\\logo.png"))));
		SetIcon(FrameIcon);
	}
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	AuiNotebook1 = new wxAuiNotebook(this, ID_AUINOTEBOOK1, wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	AuiNotebook1->SetBackgroundColour(wxColour(47,79,79));
	Panel2 = new wxPanel(AuiNotebook1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	GridSizer2 = new wxGridSizer(0, 6, 0, 0);
	BoxSizer12 = new wxBoxSizer(wxVERTICAL);
	BitmapButton6 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON7, wxBitmap(wxImage(_T("res\\chapati.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
	BoxSizer12->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText8 = new wxStaticText(Panel2, ID_STATICTEXT8, _(" Chapati "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	StaticText8->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText8->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText8Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	BoxSizer12->Add(StaticText8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer10 = new wxBoxSizer(wxVERTICAL);
	BitmapButton4 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON5, wxBitmap(wxImage(_T("res\\chips.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
	BoxSizer10->Add(BitmapButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT6, _(" Chips "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticText6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText6->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText6Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	BoxSizer10->Add(StaticText6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer19 = new wxBoxSizer(wxVERTICAL);
	BitmapButton13 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON14, wxBitmap(wxImage(_T("res\\samosa.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
	BoxSizer19->Add(BitmapButton13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText15 = new wxStaticText(Panel2, ID_STATICTEXT15, _(" Samosa "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	StaticText15->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText15->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText15Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText15->SetFont(StaticText15Font);
	BoxSizer19->Add(StaticText15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer18 = new wxBoxSizer(wxVERTICAL);
	BitmapButton12 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON13, wxBitmap(wxImage(_T("res\\samosa.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
	BoxSizer18->Add(BitmapButton12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText14 = new wxStaticText(Panel2, ID_STATICTEXT14, _(" Samosa "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	StaticText14->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText14->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText14Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText14->SetFont(StaticText14Font);
	BoxSizer18->Add(StaticText14, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer17 = new wxBoxSizer(wxVERTICAL);
	BitmapButton11 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON12, wxBitmap(wxImage(_T("res\\samosa.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
	BoxSizer17->Add(BitmapButton11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText13 = new wxStaticText(Panel2, ID_STATICTEXT13, _(" Samosa "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	StaticText13->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText13->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText13Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText13->SetFont(StaticText13Font);
	BoxSizer17->Add(StaticText13, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer9 = new wxBoxSizer(wxVERTICAL);
	BitmapButton3 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("res\\samosa.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	BoxSizer9->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _(" Samosa "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText5->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText5Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	BoxSizer9->Add(StaticText5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8 = new wxBoxSizer(wxVERTICAL);
	BitmapButton2 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("res\\ndazi.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	BoxSizer8->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _(" Ndazi "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText4Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	BoxSizer8->Add(StaticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer16 = new wxBoxSizer(wxVERTICAL);
	BitmapButton10 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON11, wxBitmap(wxImage(_T("res\\toastplain.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
	BoxSizer16->Add(BitmapButton10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText12 = new wxStaticText(Panel2, ID_STATICTEXT12, _(" Toast Plain "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	StaticText12->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText12->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText12Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText12->SetFont(StaticText12Font);
	BoxSizer16->Add(StaticText12, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer15 = new wxBoxSizer(wxVERTICAL);
	BitmapButton9 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON10, wxBitmap(wxImage(_T("res\\toastplain.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
	BoxSizer15->Add(BitmapButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText11 = new wxStaticText(Panel2, ID_STATICTEXT11, _(" Toast Plain "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	StaticText11->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText11->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText11Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText11->SetFont(StaticText11Font);
	BoxSizer15->Add(StaticText11, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer14 = new wxBoxSizer(wxVERTICAL);
	BitmapButton8 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON9, wxBitmap(wxImage(_T("res\\toastplain.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
	BoxSizer14->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText10 = new wxStaticText(Panel2, ID_STATICTEXT10, _(" Toast Plain "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	StaticText10->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText10->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText10Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText10->SetFont(StaticText10Font);
	BoxSizer14->Add(StaticText10, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer13 = new wxBoxSizer(wxVERTICAL);
	BitmapButton7 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON8, wxBitmap(wxImage(_T("res\\toastplain.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
	BoxSizer13->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText9 = new wxStaticText(Panel2, ID_STATICTEXT9, _(" Toast Plain "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	StaticText9->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText9->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText9Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText9->SetFont(StaticText9Font);
	BoxSizer13->Add(StaticText9, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer11 = new wxBoxSizer(wxVERTICAL);
	BitmapButton5 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON6, wxBitmap(wxImage(_T("res\\toastplain.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
	BoxSizer11->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT7, _(" Toast Plain "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText7->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText7Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	BoxSizer11->Add(StaticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7 = new wxBoxSizer(wxVERTICAL);
	BitmapButton1 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("res\\toastplain.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	BoxSizer7->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _(" Toast Plain "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText3Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer7->Add(StaticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer21 = new wxBoxSizer(wxVERTICAL);
	BitmapButton16 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON16, wxBitmap(wxImage(_T("res\\chapati.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
	BoxSizer21->Add(BitmapButton16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText17 = new wxStaticText(Panel2, ID_STATICTEXT17, _(" Chapati "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	StaticText17->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText17->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));
	wxFont StaticText17Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText17->SetFont(StaticText17Font);
	BoxSizer21->Add(StaticText17, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel2->SetSizer(GridSizer2);
	GridSizer2->Fit(Panel2);
	GridSizer2->SetSizeHints(Panel2);
	Panel3 = new wxPanel(AuiNotebook1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	Panel4 = new wxPanel(AuiNotebook1, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	GridSizer1 = new wxGridSizer(0, 3, 0, 0);
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	BitmapButtonL = new wxBitmapButton(Panel4, ID_BITMAPBUTTON1, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	BoxSizer6->Add(BitmapButtonL, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(Panel4, ID_STATICTEXT1, _("Beef"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText1Font(13,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer6->Add(StaticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel4->SetSizer(GridSizer1);
	GridSizer1->Fit(Panel4);
	GridSizer1->SetSizeHints(Panel4);
	Panel1 = new wxPanel(AuiNotebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	AuiNotebook1->AddPage(Panel2, _("SNACKS"), false, wxBitmap(wxImage(_T("res\\cabbagechips.jpg"))));
	AuiNotebook1->AddPage(Panel3, _("BEVERAGES"), false, wxBitmap(wxImage(_T("res\\chocolate.jpg"))));
	AuiNotebook1->AddPage(Panel4, _("FRUITS"), false, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\micirikienyeji.jpg"))));
	AuiNotebook1->AddPage(Panel1, _("Main Dish"), false, wxBitmap(wxImage(_T("res\\beefstewugali.jpg"))));
	BoxSizer2->Add(AuiNotebook1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 2, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, this, _("Payment"));
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer3->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("PAYMENT"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText2Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer3->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxSize(331,246), wxLC_REPORT|wxNO_BORDER, wxDefaultValidator, _T("ID_LISTCTRL1"));
	ListCtrl1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	ListCtrl1->SetBackgroundColour(wxColour(47,79,79));
	wxFont ListCtrl1Font(11,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century"),wxFONTENCODING_DEFAULT);
	ListCtrl1->SetFont(ListCtrl1Font);
	StaticBoxSizer1->Add(ListCtrl1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer42 = new wxBoxSizer(wxHORIZONTAL);
	StaticText42 = new wxStaticText(this, ID_STATICTEXT42, _("Total"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT42"));
	StaticText42->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText42Font(22,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText42->SetFont(StaticText42Font);
	BoxSizer42->Add(StaticText42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	totalField = new wxStaticText(this, ID_STATICTEXT43, _("Sh 0.00"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT43"));
	totalField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont totalFieldFont(22,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	totalField->SetFont(totalFieldFont);
	BoxSizer42->Add(totalField, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer42, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer41 = new wxBoxSizer(wxHORIZONTAL);
	StaticText40 = new wxStaticText(this, ID_STATICTEXT40, _("Discount"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT40"));
	StaticText40->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText40Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText40->SetFont(StaticText40Font);
	BoxSizer41->Add(StaticText40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText41 = new wxStaticText(this, ID_STATICTEXT41, _("0.00"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT41"));
	StaticText41->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText41Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText41->SetFont(StaticText41Font);
	BoxSizer41->Add(StaticText41, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer40 = new wxBoxSizer(wxHORIZONTAL);
	StaticText38 = new wxStaticText(this, ID_STATICTEXT38, _("Tax"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT38"));
	StaticText38->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText38Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText38->SetFont(StaticText38Font);
	BoxSizer40->Add(StaticText38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText39 = new wxStaticText(this, ID_STATICTEXT39, _("0.00"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT39"));
	StaticText39->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText39Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText39->SetFont(StaticText39Font);
	BoxSizer40->Add(StaticText39, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer41->Add(BoxSizer40, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer41, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("PAY"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetForegroundColour(wxColour(255,255,255));
	Button1->SetBackgroundColour(wxColour(58,200,55));
	wxFont Button1Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	BoxSizer5->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(StaticBoxSizer1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 25);
	BoxSizer1->Add(BoxSizer4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 25);
	SetSizer(BoxSizer1);
	ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_FLAT|wxTB_3DBUTTONS|wxTB_TEXT, _T("ID_TOOLBAR1"));
	ToolBarItem2 = ToolBar1->AddTool(ID_MAINPAGE, _("MainPage"), wxBitmap(wxImage(_T("icons\\logo.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
	ToolBarItem1 = ToolBar1->AddTool(help, _("Help"), wxBitmap(wxImage(_T("icons\\help.png"))), wxNullBitmap, wxITEM_NORMAL, _("Help"), _("Help"));
	ToolBarItem3 = ToolBar1->AddTool(ID_EXIT, _("Exit"), wxBitmap(wxImage(_T("icons\\Actions-session-exit-icon_5.png"))), wxNullBitmap, wxITEM_NORMAL, _("Exit"), _("Exit"));
	ToolBar1->Realize();
	SetToolBar(ToolBar1);
	StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
	int __wxStatusBarWidths_1[1] = { -10 };
	int __wxStatusBarStyles_1[1] = { wxSB_RAISED };
	StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
	StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
	SetStatusBar(StatusBar1);
	SetSizer(BoxSizer1);
	Layout();

	Connect(ID_BITMAPBUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SalesFrame::OnBitmapButton6Click2);
	Connect(ID_BITMAPBUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SalesFrame::OnBitmapButton4Click);
	Connect(ID_BITMAPBUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SalesFrame::OnBitmapButton12Click);
	Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SalesFrame::OnBitmapButton2Click);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&SalesFrame::OnButton1Click);
	//*)
    Connect(ID_EXIT,wxEVT_TOOL,(wxObjectEventFunction)&SalesFrame::onExit);
    Connect(ID_MAINPAGE,wxEVT_TOOL,(wxObjectEventFunction)&SalesFrame::onMainPage);
	ToolBar1->SetBackgroundColour(wxColour(230,174,0));
	StatusBar1->SetBackgroundColour(wxColour(230,174,0));
    db = new wxSQLite3Database();
    testDBName = wxGetCwd() + wxT("/sales.db");
	setColumns();

}




void SalesFrame::setColumns(){



        wxImageList* imageList = new wxImageList(16,16);
        imageList->Add(wxIcon("item"));
        ListCtrl1->AssignImageList(imageList, wxIMAGE_LIST_SMALL);

        wxListItem itemCol;
        itemCol.SetText(wxT("Qty"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(0, itemCol);
       // ListCtrl1->SetColumnWidth(0, 50 );

        itemCol.SetText(wxT("Item"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(1, itemCol);
        //ListCtrl1->SetColumnWidth(1, 100 );


        itemCol.SetText(wxT("Price"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(2, itemCol);
      // ListCtrl1->SetColumnWidth(2,30 );

        itemCol.SetText(wxT("Total"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(3, itemCol);
      //  ListCtrl1->SetColumnWidth(2,30 );


        setListData(wxT(""));
}

void SalesFrame::setListData(wxString filterString){
   ListCtrl1->DeleteAllItems();

    db ->Open(testDBName);
    int count = 0;
    long tempTotalSum= 0;
    long tempQuant =0 ;
    long sum =0;
    long tempPrice = 0;

   wxSQLite3ResultSet rs= db->ExecuteQuery(wxT("SELECT * FROM salesTable"+filterString));


          while(rs.NextRow()){
             item = rs.GetAsString("itemName");
             quantity = rs.GetAsString("quantity");
             price = rs.GetAsString("price");

             price.ToLong(&tempPrice);
             quantity.ToLong(&tempQuant);

             sum = tempPrice * tempQuant;
             tempTotalSum = tempTotalSum + sum;

            wxString buf;
            buf.Printf("%s",quantity);
            ListCtrl1->InsertItem(count, buf,0);
            ListCtrl1->SetItemData(count, count);

            buf.Printf(wxT("%s"), item);
            ListCtrl1->SetItem(count, 1, buf);

             buf.Printf(wxT("%s"), price);
            ListCtrl1->SetItem(count, 2, buf);

            buf.Printf(wxT("%ld"), sum);
            ListCtrl1->SetItem(count, 3, buf);


           count++;
     }

     wxString mytotal;
     mytotal.Printf("Sh %ld",tempTotalSum);
     totalField->SetLabel(mytotal);

    rs.Finalize();
    db->Close();
    }

     void SalesFrame::onMainPage(){
         wxMessageDialog dialog1( this, wxT("Logout and go to Main Page ?"), wxT("TechBay POS"),
        wxNO_DEFAULT|wxYES_NO|wxICON_WARNING);
        switch ( dialog1.ShowModal() ){

            case wxID_YES:
                {
                Close(true);
                 MainFrame *mainFrame = new MainFrame(NULL,wxID_ANY,wxDefaultPosition,wxSize(811,650));
                mainFrame->Show();
                }

            break;
            case wxID_NO:
            wxLogStatus(wxT("You pressed \"No\""));
            break;

        default:
        wxLogError(wxT("Unexpected wxMessageDialog return code!"));
        break;
    }

}
void SalesFrame::onExit(){
      wxMessageDialog dialog( this, wxT("Are You Sure you want to Exit ?"), wxT("TechBay POS"),
        wxNO_DEFAULT|wxYES_NO|wxICON_WARNING);
        switch ( dialog.ShowModal() ){

            case wxID_YES:
             Close(true);
            break;
            case wxID_NO:
            wxLogStatus(wxT("You pressed \"No\""));
            break;

        default:
        wxLogError(wxT("Unexpected wxMessageDialog return code!"));
        break;
}
}

void SalesFrame::setAddData(wxString selectionItem){

        db->Open(testDBName);
        wxSQLite3ResultSet rsCheck = db->ExecuteQuery(wxT("SELECT * FROM stockTable WHERE itemName='"+selectionItem+"'"));
          if(rsCheck.NextRow()){
             item = rsCheck.GetAsString("itemName");
             quantity = rsCheck.GetAsString("quantity");
             price = rsCheck.GetAsString("price");

            wxSQLite3ResultSet rsInsert = db->ExecuteQuery(wxT("SELECT * FROM salesTable WHERE itemName='"+item+"'"));

              if(rsInsert.NextRow()){
                wxString salesQuant = rsInsert.GetAsString("quantity");

                  long tempQuant;
                  salesQuant.ToLong(&tempQuant);
                  tempQuant++;
                  wxString newQuant;
                  newQuant.Printf("%ld",tempQuant);

               db->ExecuteUpdate(wxT("UPDATE salesTable SET quantity='"+newQuant+"' WHERE itemName='"+item+"'"));
               rsCheck.Finalize();
               rsInsert.Finalize();
               db->Close();
               setListData(wxT(""));

           }else{
               db->ExecuteUpdate(wxT("INSERT INTO salesTable (itemName,quantity,price) VALUES('"+item+"',1,'"+price+"')"));
               rsCheck.Finalize();
               rsInsert.Finalize();
               db->Close();
               setListData(wxT(""));

          }
    }else{
        wxMessageBox(wxT("Invalid Item - The Item Might Have Been Deleted!"));
        rsCheck.Finalize();
        db->Close();

    }

    }


void SalesFrame::OnBitmapButton23Click(wxCommandEvent& event)
{

}

void SalesFrame::OnBitmapButton6Click(wxCommandEvent& event)
{

}
void SalesFrame::printReceipt(){

}
SalesFrame::~SalesFrame()
{
	//(*Destroy(SalesFrame)
	//*)
}

void SalesFrame::OnBitmapButton6Click1(wxCommandEvent& event)
{

}

void SalesFrame::OnBitmapButton4Click(wxCommandEvent& event)
{
    setAddData(wxT("chips"));
}

void SalesFrame::OnBitmapButton6Click2(wxCommandEvent& event)
{
    setAddData(wxT("Chapati"));
}

void SalesFrame::OnBitmapButton12Click(wxCommandEvent& event)
{
    setAddData(wxT("Samosa"));
}

void SalesFrame::OnButton1Click(wxCommandEvent& event)
{
    printReceipt();
    db->Open(testDBName);
    db->ExecuteUpdate(wxT("DELETE FROM salesTable"));
    db->Close();
    setListData(wxT(""));
}

void SalesFrame::OnBitmapButton2Click(wxCommandEvent& event)
{
}
