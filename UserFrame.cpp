#include "UserFrame.h"
#include "icons/item.xpm"


//(*InternalHeaders(UserFrame)
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(UserFrame)
const long UserFrame::ID_BITMAPBUTTON14 = wxNewId();
const long UserFrame::ID_STATICTEXT16 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON13 = wxNewId();
const long UserFrame::ID_STATICTEXT15 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON12 = wxNewId();
const long UserFrame::ID_STATICTEXT14 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON11 = wxNewId();
const long UserFrame::ID_STATICTEXT13 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON9 = wxNewId();
const long UserFrame::ID_STATICTEXT11 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON8 = wxNewId();
const long UserFrame::ID_STATICTEXT10 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON7 = wxNewId();
const long UserFrame::ID_STATICTEXT9 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON6 = wxNewId();
const long UserFrame::ID_STATICTEXT8 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON5 = wxNewId();
const long UserFrame::ID_STATICTEXT7 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON4 = wxNewId();
const long UserFrame::ID_STATICTEXT6 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON3 = wxNewId();
const long UserFrame::ID_STATICTEXT5 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON2 = wxNewId();
const long UserFrame::ID_STATICTEXT4 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON1 = wxNewId();
const long UserFrame::ID_STATICTEXT3 = wxNewId();
const long UserFrame::ID_PANEL2 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON32 = wxNewId();
const long UserFrame::ID_STATICTEXT22 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON31 = wxNewId();
const long UserFrame::ID_STATICTEXT21 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON30 = wxNewId();
const long UserFrame::ID_STATICTEXT20 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON25 = wxNewId();
const long UserFrame::ID_STATICTEXT19 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON21 = wxNewId();
const long UserFrame::ID_STATICTEXT18 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON24 = wxNewId();
const long UserFrame::ID_STATICTEXT29 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON23 = wxNewId();
const long UserFrame::ID_STATICTEXT28 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON22 = wxNewId();
const long UserFrame::ID_STATICTEXT27 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON20 = wxNewId();
const long UserFrame::ID_STATICTEXT26 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON19 = wxNewId();
const long UserFrame::ID_STATICTEXT24 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON39 = wxNewId();
const long UserFrame::ID_STATICTEXT40 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON38 = wxNewId();
const long UserFrame::ID_STATICTEXT39 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON37 = wxNewId();
const long UserFrame::ID_STATICTEXT38 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON36 = wxNewId();
const long UserFrame::ID_STATICTEXT37 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON35 = wxNewId();
const long UserFrame::ID_STATICTEXT36 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON34 = wxNewId();
const long UserFrame::ID_STATICTEXT35 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON33 = wxNewId();
const long UserFrame::ID_STATICTEXT34 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON29 = wxNewId();
const long UserFrame::ID_STATICTEXT33 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON28 = wxNewId();
const long UserFrame::ID_STATICTEXT32 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON27 = wxNewId();
const long UserFrame::ID_STATICTEXT31 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON26 = wxNewId();
const long UserFrame::ID_STATICTEXT30 = wxNewId();
const long UserFrame::ID_BITMAPBUTTON17 = wxNewId();
const long UserFrame::ID_STATICTEXT25 = wxNewId();
const long UserFrame::ID_PANEL3 = wxNewId();
const long UserFrame::ID_PANEL4 = wxNewId();
const long UserFrame::ID_AUINOTEBOOK1 = wxNewId();
const long UserFrame::ID_STATICBITMAP1 = wxNewId();
const long UserFrame::ID_STATICTEXT2 = wxNewId();
const long UserFrame::ID_LISTCTRL1 = wxNewId();
const long UserFrame::ID_STATICTEXT43 = wxNewId();
const long UserFrame::ID_STATICTEXT44 = wxNewId();
const long UserFrame::ID_BUTTON1 = wxNewId();
const long UserFrame::ID_STATICTEXT1 = wxNewId();
const long UserFrame::ID_STATICTEXT23 = wxNewId();
const long UserFrame::ID_STATICTEXT17 = wxNewId();
const long UserFrame::ID_STATICTEXT41 = wxNewId();
const long UserFrame::ID_ADDEMPLOYEE = wxNewId();
const long UserFrame::help = wxNewId();
const long UserFrame::exit = wxNewId();
const long UserFrame::ID_TOOLBAR1 = wxNewId();
const long UserFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(UserFrame,wxFrame)
	//(*EventTable(UserFrame)
	//*)
END_EVENT_TABLE()

UserFrame::UserFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(UserFrame)
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer29;
	wxBoxSizer* BoxSizer19;
	wxBoxSizer* BoxSizer20;
	wxBoxSizer* BoxSizer50;
	wxBoxSizer* BoxSizer46;
	wxBoxSizer* BoxSizer43;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer39;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer21;
	wxBoxSizer* BoxSizer13;
	wxBoxSizer* BoxSizer36;
	wxBoxSizer* BoxSizer41;
	wxBoxSizer* BoxSizer37;
	wxBoxSizer* BoxSizer42;
	wxBoxSizer* BoxSizer49;
	wxBoxSizer* BoxSizer48;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer16;
	wxBoxSizer* BoxSizer44;
	wxBoxSizer* BoxSizer30;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer18;
	wxBoxSizer* BoxSizer28;
	wxBoxSizer* BoxSizer38;
	wxBoxSizer* BoxSizer45;
	wxBoxSizer* BoxSizer14;
	wxGridSizer* GridSizer1;
	wxBoxSizer* BoxSizer31;
	wxBoxSizer* BoxSizer17;
	wxBoxSizer* BoxSizer32;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer9;
	wxBoxSizer* BoxSizer47;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxBoxSizer* BoxSizer22;
	wxBoxSizer* BoxSizer33;
	wxBoxSizer* BoxSizer35;
	wxBoxSizer* BoxSizer3;
	wxGridSizer* GridSizer2;
	wxBoxSizer* BoxSizer40;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(1200,900));
	SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	SetBackgroundColour(wxColour(47,79,79));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	AuiNotebook1 = new wxAuiNotebook(this, ID_AUINOTEBOOK1, wxDefaultPosition, wxDefaultSize, wxNO_BORDER);
	AuiNotebook1->SetBackgroundColour(wxColour(47,79,79));
	Panel2 = new wxPanel(AuiNotebook1, ID_PANEL2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	GridSizer2 = new wxGridSizer(0, 6, 0, 0);
	BoxSizer19 = new wxBoxSizer(wxVERTICAL);
	BitmapButton14 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON14, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\beefstew.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
	BoxSizer19->Add(BitmapButton14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText16 = new wxStaticText(Panel2, ID_STATICTEXT16, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	StaticText16->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText16->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText16Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText16->SetFont(StaticText16Font);
	BoxSizer19->Add(StaticText16, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer18 = new wxBoxSizer(wxVERTICAL);
	BitmapButton13 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON13, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\chapati.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
	BoxSizer18->Add(BitmapButton13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText15 = new wxStaticText(Panel2, ID_STATICTEXT15, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	StaticText15->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText15->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText15Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText15->SetFont(StaticText15Font);
	BoxSizer18->Add(StaticText15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer17 = new wxBoxSizer(wxVERTICAL);
	BitmapButton12 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON12, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\chickenrice.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
	BoxSizer17->Add(BitmapButton12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText14 = new wxStaticText(Panel2, ID_STATICTEXT14, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	StaticText14->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText14->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText14Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText14->SetFont(StaticText14Font);
	BoxSizer17->Add(StaticText14, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer16 = new wxBoxSizer(wxVERTICAL);
	BitmapButton11 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON11, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\fishrice.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
	BoxSizer16->Add(BitmapButton11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText13 = new wxStaticText(Panel2, ID_STATICTEXT13, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	StaticText13->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText13->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText13Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText13->SetFont(StaticText13Font);
	BoxSizer16->Add(StaticText13, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer14 = new wxBoxSizer(wxVERTICAL);
	BitmapButton9 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON9, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\njahi.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
	BoxSizer14->Add(BitmapButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText11 = new wxStaticText(Panel2, ID_STATICTEXT11, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	StaticText11->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText11->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText11Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText11->SetFont(StaticText11Font);
	BoxSizer14->Add(StaticText11, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer13 = new wxBoxSizer(wxVERTICAL);
	BitmapButton8 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON8, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\micirikienyeji.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
	BoxSizer13->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText10 = new wxStaticText(Panel2, ID_STATICTEXT10, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	StaticText10->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText10->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText10Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText10->SetFont(StaticText10Font);
	BoxSizer13->Add(StaticText10, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer12 = new wxBoxSizer(wxVERTICAL);
	BitmapButton7 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON7, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\toastplain.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
	BoxSizer12->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText9 = new wxStaticText(Panel2, ID_STATICTEXT9, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	StaticText9->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText9->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText9Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText9->SetFont(StaticText9Font);
	BoxSizer12->Add(StaticText9, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer11 = new wxBoxSizer(wxVERTICAL);
	BitmapButton6 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON6, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\ndazi.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
	BoxSizer11->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText8 = new wxStaticText(Panel2, ID_STATICTEXT8, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	StaticText8->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText8->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText8Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	BoxSizer11->Add(StaticText8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer10 = new wxBoxSizer(wxVERTICAL);
	BitmapButton5 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON5, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\beansugali.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
	BoxSizer10->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT7, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText7->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText7Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	BoxSizer10->Add(StaticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer9 = new wxBoxSizer(wxVERTICAL);
	BitmapButton4 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	BoxSizer9->Add(BitmapButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT6, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticText6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText6->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText6Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	BoxSizer9->Add(StaticText6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8 = new wxBoxSizer(wxVERTICAL);
	BitmapButton3 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	BoxSizer8->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText5->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText5Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	BoxSizer8->Add(StaticText5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7 = new wxBoxSizer(wxVERTICAL);
	BitmapButton2 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	BoxSizer7->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText4->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText4Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	BoxSizer7->Add(StaticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxVERTICAL);
	BitmapButton1 = new wxBitmapButton(Panel2, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	BoxSizer4->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("   Banana   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	StaticText3->SetBackgroundColour(wxColour(58,200,55));
	wxFont StaticText3Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer4->Add(StaticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel2->SetSizer(GridSizer2);
	GridSizer2->Fit(Panel2);
	GridSizer2->SetSizeHints(Panel2);
	Panel3 = new wxPanel(AuiNotebook1, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	GridSizer1 = new wxGridSizer(0, 6, 0, 0);
	BoxSizer33 = new wxBoxSizer(wxVERTICAL);
	BitmapButton32 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON32, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON32"));
	BoxSizer33->Add(BitmapButton32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText22 = new wxStaticText(Panel3, ID_STATICTEXT22, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT22"));
	StaticText22->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer33->Add(StaticText22, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	BoxSizer32 = new wxBoxSizer(wxVERTICAL);
	BitmapButton31 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON31, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON31"));
	BoxSizer32->Add(BitmapButton31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText21 = new wxStaticText(Panel3, ID_STATICTEXT21, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
	StaticText21->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer32->Add(StaticText21, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer32, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
	BoxSizer31 = new wxBoxSizer(wxVERTICAL);
	BitmapButton30 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON30, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON30"));
	BoxSizer31->Add(BitmapButton30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText20 = new wxStaticText(Panel3, ID_STATICTEXT20, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	StaticText20->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer31->Add(StaticText20, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer31, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer30 = new wxBoxSizer(wxVERTICAL);
	BitmapButton25 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON25, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON25"));
	BoxSizer30->Add(BitmapButton25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText19 = new wxStaticText(Panel3, ID_STATICTEXT19, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	StaticText19->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer30->Add(StaticText19, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer30, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer29 = new wxBoxSizer(wxVERTICAL);
	BitmapButton21 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON21, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON21"));
	BoxSizer29->Add(BitmapButton21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText18 = new wxStaticText(Panel3, ID_STATICTEXT18, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	StaticText18->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer29->Add(StaticText18, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer39 = new wxBoxSizer(wxVERTICAL);
	BitmapButton24 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON24, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON24"));
	BoxSizer39->Add(BitmapButton24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText29 = new wxStaticText(Panel3, ID_STATICTEXT29, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT29"));
	StaticText29->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer39->Add(StaticText29, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer38 = new wxBoxSizer(wxVERTICAL);
	BitmapButton23 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON23, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON23"));
	BoxSizer38->Add(BitmapButton23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText28 = new wxStaticText(Panel3, ID_STATICTEXT28, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT28"));
	StaticText28->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer38->Add(StaticText28, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer37 = new wxBoxSizer(wxVERTICAL);
	BitmapButton22 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON22, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON22"));
	BoxSizer37->Add(BitmapButton22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText27 = new wxStaticText(Panel3, ID_STATICTEXT27, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT27"));
	StaticText27->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer37->Add(StaticText27, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer36 = new wxBoxSizer(wxVERTICAL);
	BitmapButton20 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON20, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON20"));
	BoxSizer36->Add(BitmapButton20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText26 = new wxStaticText(Panel3, ID_STATICTEXT26, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT26"));
	StaticText26->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer36->Add(StaticText26, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer35 = new wxBoxSizer(wxVERTICAL);
	BitmapButton19 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON19, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON19"));
	BoxSizer35->Add(BitmapButton19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText24 = new wxStaticText(Panel3, ID_STATICTEXT24, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT24"));
	StaticText24->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer35->Add(StaticText24, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer50 = new wxBoxSizer(wxVERTICAL);
	BitmapButton39 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON39, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON39"));
	BoxSizer50->Add(BitmapButton39, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText40 = new wxStaticText(Panel3, ID_STATICTEXT40, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT40"));
	StaticText40->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer50->Add(StaticText40, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer50, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer49 = new wxBoxSizer(wxVERTICAL);
	BitmapButton38 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON38, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON38"));
	BoxSizer49->Add(BitmapButton38, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText39 = new wxStaticText(Panel3, ID_STATICTEXT39, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT39"));
	StaticText39->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer49->Add(StaticText39, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer49, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer48 = new wxBoxSizer(wxVERTICAL);
	BitmapButton37 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON37, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON37"));
	BoxSizer48->Add(BitmapButton37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText38 = new wxStaticText(Panel3, ID_STATICTEXT38, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT38"));
	StaticText38->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer48->Add(StaticText38, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer48, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer47 = new wxBoxSizer(wxVERTICAL);
	BitmapButton36 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON36, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON36"));
	BoxSizer47->Add(BitmapButton36, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText37 = new wxStaticText(Panel3, ID_STATICTEXT37, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT37"));
	StaticText37->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer47->Add(StaticText37, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer47, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer46 = new wxBoxSizer(wxVERTICAL);
	BitmapButton35 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON35, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON35"));
	BoxSizer46->Add(BitmapButton35, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText36 = new wxStaticText(Panel3, ID_STATICTEXT36, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT36"));
	StaticText36->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer46->Add(StaticText36, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer46, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer45 = new wxBoxSizer(wxVERTICAL);
	BitmapButton34 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON34, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON34"));
	BoxSizer45->Add(BitmapButton34, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText35 = new wxStaticText(Panel3, ID_STATICTEXT35, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT35"));
	StaticText35->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer45->Add(StaticText35, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer45, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer44 = new wxBoxSizer(wxVERTICAL);
	BitmapButton33 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON33, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON33"));
	BoxSizer44->Add(BitmapButton33, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText34 = new wxStaticText(Panel3, ID_STATICTEXT34, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT34"));
	StaticText34->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer44->Add(StaticText34, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer44, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer43 = new wxBoxSizer(wxVERTICAL);
	BitmapButton29 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON29, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON29"));
	BoxSizer43->Add(BitmapButton29, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText33 = new wxStaticText(Panel3, ID_STATICTEXT33, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT33"));
	StaticText33->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer43->Add(StaticText33, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer43, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer42 = new wxBoxSizer(wxVERTICAL);
	BitmapButton28 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON28, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON28"));
	BoxSizer42->Add(BitmapButton28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText32 = new wxStaticText(Panel3, ID_STATICTEXT32, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT32"));
	StaticText32->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer42->Add(StaticText32, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer42, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer41 = new wxBoxSizer(wxVERTICAL);
	BitmapButton27 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON27, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON27"));
	BoxSizer41->Add(BitmapButton27, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText31 = new wxStaticText(Panel3, ID_STATICTEXT31, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT31"));
	StaticText31->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer41->Add(StaticText31, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer41, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer40 = new wxBoxSizer(wxVERTICAL);
	BitmapButton26 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON26, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON26"));
	BoxSizer40->Add(BitmapButton26, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText30 = new wxStaticText(Panel3, ID_STATICTEXT30, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT30"));
	StaticText30->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer40->Add(StaticText30, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer40, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer28 = new wxBoxSizer(wxVERTICAL);
	BitmapButton17 = new wxBitmapButton(Panel3, ID_BITMAPBUTTON17, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON17"));
	BoxSizer28->Add(BitmapButton17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText25 = new wxStaticText(Panel3, ID_STATICTEXT25, _("Banana"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT25"));
	StaticText25->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer28->Add(StaticText25, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel3->SetSizer(GridSizer1);
	GridSizer1->Fit(Panel3);
	GridSizer1->SetSizeHints(Panel3);
	Panel4 = new wxPanel(AuiNotebook1, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	AuiNotebook1->AddPage(Panel2, _("MAIN DISH"), false, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))));
	AuiNotebook1->AddPage(Panel3, _("BEVERAGES"), false, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))));
	AuiNotebook1->AddPage(Panel4, _("FRUITS"), false, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\res\\micirikienyeji.jpg"))));
	BoxSizer2->Add(AuiNotebook1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 2, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, this, _("Payment"));
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer5->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("PAYMENT"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText2Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer5->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxSize(315,248), wxLC_REPORT|wxLC_NO_HEADER|wxNO_BORDER, wxDefaultValidator, _T("ID_LISTCTRL1"));
	ListCtrl1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	ListCtrl1->SetBackgroundColour(wxColour(47,79,79));
	StaticBoxSizer1->Add(ListCtrl1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
	StaticText43 = new wxStaticText(this, ID_STATICTEXT43, _("Total"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT43"));
	StaticText43->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText43Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText43->SetFont(StaticText43Font);
	BoxSizer22->Add(StaticText43, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText44 = new wxStaticText(this, ID_STATICTEXT44, _("Sh 450"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT44"));
	StaticText44->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText44Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText44->SetFont(StaticText44Font);
	BoxSizer22->Add(StaticText44, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer22, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("PAY"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetDefault();
	Button1->SetForegroundColour(wxColour(255,255,255));
	Button1->SetBackgroundColour(wxColour(58,200,55));
	wxFont Button1Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	BoxSizer6->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Discount"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText1Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer21->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText23 = new wxStaticText(this, ID_STATICTEXT23, _("0.00"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT23"));
	StaticText23->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText23Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText23->SetFont(StaticText23Font);
	BoxSizer21->Add(StaticText23, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	StaticText17 = new wxStaticText(this, ID_STATICTEXT17, _("Tax"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	StaticText17->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText17Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText17->SetFont(StaticText17Font);
	BoxSizer20->Add(StaticText17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText41 = new wxStaticText(this, ID_STATICTEXT41, _("0.00"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT41"));
	StaticText41->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText41Font(16,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText41->SetFont(StaticText41Font);
	BoxSizer20->Add(StaticText41, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer21->Add(BoxSizer20, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticBoxSizer1->Add(BoxSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 1, wxALL|wxSHAPED|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_FLAT|wxTB_3DBUTTONS|wxTB_TEXT, _T("ID_TOOLBAR1"));
	ToolBarItem2 = ToolBar1->AddTool(ID_ADDEMPLOYEE, _("Add employee"), wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\Actions-contact-new-icon_6.png"))), wxNullBitmap, wxITEM_NORMAL, _("Add Employee"), _("Add Employee"));
	ToolBarItem1 = ToolBar1->AddTool(help, _("Help"), wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\help.png"))), wxNullBitmap, wxITEM_NORMAL, _("Help"), _("Help"));
	ToolBarItem3 = ToolBar1->AddTool(exit, _("Exit"), wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\Actions-session-exit-icon_5.png"))), wxNullBitmap, wxITEM_NORMAL, _("Exit"), _("Exit"));
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

	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_BEGIN_DRAG,(wxObjectEventFunction)&UserFrame::OnListCtrl1BeginDrag);
	//*)
	ToolBar1->SetBackgroundColour(wxColour(230,174,0));
	StatusBar1->SetBackgroundColour(wxColour(230,174,0));
	setColumns();
}

UserFrame::~UserFrame()
{
	//(*Destroy(UserFrame)
	//*)
}
void UserFrame::setColumns(){


        wxImageList* imageList = new wxImageList(16, 16);
        imageList->Add(wxIcon("item"));
        ListCtrl1->AssignImageList(imageList, wxIMAGE_LIST_SMALL);

        wxListItem itemCol;
        itemCol.SetText(wxT("No"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(0, itemCol);
        ListCtrl1->SetColumnWidth(0, 100 );

        itemCol.SetText(wxT("ID"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(1, itemCol);
        ListCtrl1->SetColumnWidth(1, 100 );


        itemCol.SetText(wxT("Item"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(2, itemCol);
        ListCtrl1->SetColumnWidth(2,100 );


        setListData();
}
void UserFrame::setListData(){
    for ( int i = 0; i < 10; i++ ){

        wxString buf;
        buf.Printf("%d",i);
        ListCtrl1->InsertItem(i, buf,0);
        ListCtrl1->SetItemData(i, i);

        buf.Printf(wxT("Col 1, item %d"), i);
        ListCtrl1->SetItem(i, 1, buf);

         buf.Printf(wxT("Col 2, item %d"), i);
        ListCtrl1->SetItem(i, 2, buf);


    }
    }

void UserFrame::OnPanel1Paint(wxPaintEvent& event)
{
}

void UserFrame::OnBitmapButton8Click(wxCommandEvent& event)
{
}

void UserFrame::OnListCtrl1BeginDrag(wxListEvent& event)
{
}
