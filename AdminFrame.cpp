#include "AdminFrame.h"
#include <wx/wx.h>
#include "icons/item.xpm"
#include "SalesFrame.h"
#include <iostream>
#include "MainFrame.h"
using namespace std;

//(*InternalHeaders(AdminFrame)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(AdminFrame)
const long AdminFrame::ID_SEARCHCTRL1 = wxNewId();
const long AdminFrame::ID_COMBOBOX1 = wxNewId();
const long AdminFrame::ID_LISTCTRL1 = wxNewId();
const long AdminFrame::ID_STATICBITMAP1 = wxNewId();
const long AdminFrame::ID_STATICTEXT5 = wxNewId();
const long AdminFrame::ID_STATICTEXT7 = wxNewId();
const long AdminFrame::ID_STATICTEXT4 = wxNewId();
const long AdminFrame::ID_TEXTCTRL4 = wxNewId();
const long AdminFrame::ID_STATICTEXT8 = wxNewId();
const long AdminFrame::ID_STATICTEXT1 = wxNewId();
const long AdminFrame::ID_TEXTCTRL1 = wxNewId();
const long AdminFrame::ID_BITMAPBUTTON1 = wxNewId();
const long AdminFrame::ID_STATICTEXT9 = wxNewId();
const long AdminFrame::ID_STATICTEXT3 = wxNewId();
const long AdminFrame::ID_TEXTCTRL3 = wxNewId();
const long AdminFrame::ID_STATICTEXT2 = wxNewId();
const long AdminFrame::ID_TEXTCTRL2 = wxNewId();
const long AdminFrame::ID_STATICTEXT6 = wxNewId();
const long AdminFrame::ID_FILEPICKERCTRL1 = wxNewId();
const long AdminFrame::ID_BITMAPBUTTON3 = wxNewId();
const long AdminFrame::ID_STATICTEXT11 = wxNewId();
const long AdminFrame::ID_BITMAPBUTTON2 = wxNewId();
const long AdminFrame::ID_STATICTEXT10 = wxNewId();
const long AdminFrame::ID_STATICTEXT17 = wxNewId();
const long AdminFrame::ID_STATICTEXT21 = wxNewId();
const long AdminFrame::ID_STATICTEXT18 = wxNewId();
const long AdminFrame::ID_STATICTEXT19 = wxNewId();
const long AdminFrame::ID_STATICTEXT22 = wxNewId();
const long AdminFrame::ID_STATICTEXT20 = wxNewId();
const long AdminFrame::ID_STATICTEXT23 = wxNewId();
const long AdminFrame::ID_BUTTON2 = wxNewId();
const long AdminFrame::ID_STATICTEXT12 = wxNewId();
const long AdminFrame::ID_STATICTEXT13 = wxNewId();
const long AdminFrame::ID_TEXTCTRL5 = wxNewId();
const long AdminFrame::ID_STATICTEXT14 = wxNewId();
const long AdminFrame::ID_STATICTEXT15 = wxNewId();
const long AdminFrame::ID_TEXTCTRL6 = wxNewId();
const long AdminFrame::ID_STATICTEXT16 = wxNewId();
const long AdminFrame::ID_TEXTCTRL7 = wxNewId();
const long AdminFrame::ID_BUTTON1 = wxNewId();
const long AdminFrame::ID_MAINPAGE = wxNewId();
const long AdminFrame::help = wxNewId();
const long AdminFrame::ID_SETTINGS = wxNewId();
const long AdminFrame::ID_EXIT = wxNewId();
const long AdminFrame::ID_TOOLBAR1 = wxNewId();
const long AdminFrame::ID_STATUSBAR1 = wxNewId();
const long AdminFrame::ID_MENUITEM1 = wxNewId();
const long AdminFrame::ID_MENUITEM3 = wxNewId();
const long AdminFrame::ID_MENUITEM4 = wxNewId();
const long AdminFrame::ID_MENUITEM5 = wxNewId();
const long AdminFrame::ID_MENUITEM2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AdminFrame,wxFrame)
	//(*EventTable(AdminFrame)
	//*)
END_EVENT_TABLE()

AdminFrame::AdminFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
        wxString stringCombo[] = {
        wxT("Search by Item Name"),
        wxT("Search by Item ID"),
        wxT("Search by Stock Date")
        };

	//(*Initialize(AdminFrame)
	wxBoxSizer* BoxSizer4;
	wxStaticBoxSizer* StaticBoxSizer2;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer15;
	wxBoxSizer* BoxSizer19;
	wxBoxSizer* BoxSizer20;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer21;
	wxBoxSizer* BoxSizer13;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer16;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer18;
	wxBoxSizer* BoxSizer14;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer9;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, _("Admin "), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(1144,752));
	SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	SetBackgroundColour(wxColour(47,79,79));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("icons\\logo.png"))));
		SetIcon(FrameIcon);
	}
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer9 = new wxBoxSizer(wxVERTICAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	SearchCtrl1 = new wxSearchCtrl(this, ID_SEARCHCTRL1, wxEmptyString, wxDefaultPosition, wxSize(297,21), wxNO_BORDER, wxDefaultValidator, _T("ID_SEARCHCTRL1"));
	SearchCtrl1->SetForegroundColour(wxColour(255,255,255));
	SearchCtrl1->SetBackgroundColour(wxColour(230,174,0));
	BoxSizer4->Add(SearchCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ComboBox1 = new wxComboBox(this, ID_COMBOBOX1, wxEmptyString, wxDefaultPosition, wxSize(222,21), 0, 0, 0, wxDefaultValidator, _T("ID_COMBOBOX1"));
	BoxSizer4->Add(ComboBox1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer9->Add(BoxSizer4, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 25);
	ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxSize(701,418), wxLC_REPORT|wxNO_BORDER, wxDefaultValidator, _T("ID_LISTCTRL1"));
	ListCtrl1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	ListCtrl1->SetBackgroundColour(wxColour(47,79,79));
	BoxSizer9->Add(ListCtrl1, 1, wxBOTTOM|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 50);
	BoxSizer2->Add(BoxSizer9, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, this, _("Add Item"));
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer3->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Add Item Details"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText5Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	BoxSizer3->Add(StaticText5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("*"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText7->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText7Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	BoxSizer6->Add(StaticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("ITEM"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer6->Add(StaticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	itemField = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxSize(210,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer6->Add(itemField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("*"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	StaticText8->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText8Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText8->SetFont(StaticText8Font);
	BoxSizer5->Add(StaticText8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("ID   "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer5->Add(StaticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	idField = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(163,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer5->Add(idField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_REDO")),wxART_BUTTON), wxDefaultPosition, wxSize(37,23), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	BoxSizer5->Add(BitmapButton1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("*"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	StaticText9->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText9Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText9->SetFont(StaticText9Font);
	BoxSizer7->Add(StaticText9, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("PRICE"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer7->Add(StaticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	priceField = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(205,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer7->Add(priceField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("QTY    "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer8->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	qtyField = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(215,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer8->Add(qtyField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("IMAGE"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticText6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer10->Add(StaticText6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FilePickerCtrl1 = new wxFilePickerCtrl(this, ID_FILEPICKERCTRL1, wxEmptyString, wxEmptyString, wxEmptyString, wxDefaultPosition, wxSize(162,23), wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKERCTRL1"));
	BoxSizer10->Add(FilePickerCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_MISSING_IMAGE")),wxART_BUTTON), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	BoxSizer10->Add(BitmapButton3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("SAVE"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	StaticText11->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer11->Add(StaticText11, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("icons\\add-item-icon_5.png"))), wxDefaultPosition, wxSize(78,36), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	BoxSizer11->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(StaticBoxSizer1, 0, wxLEFT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 50);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 15);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxVERTICAL, this, _("CURRENT DETAILS"));
	BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("*"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	StaticText10->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText10Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText10->SetFont(StaticText10Font);
	BoxSizer19->Add(StaticText10, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText17 = new wxStaticText(this, ID_STATICTEXT17, _("ITEM"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	StaticText17->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer19->Add(StaticText17, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	itemStaticField = new wxStaticText(this, ID_STATICTEXT21, _("Chapati"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
	itemStaticField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer19->Add(itemStaticField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer18->Add(BoxSizer19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	StaticText18 = new wxStaticText(this, ID_STATICTEXT18, _("*"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	StaticText18->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText18Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText18->SetFont(StaticText18Font);
	BoxSizer20->Add(StaticText18, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText19 = new wxStaticText(this, ID_STATICTEXT19, _("PRICE"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	StaticText19->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer20->Add(StaticText19, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	priceStaticField = new wxStaticText(this, ID_STATICTEXT22, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT22"));
	priceStaticField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer20->Add(priceStaticField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer18->Add(BoxSizer20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	StaticText20 = new wxStaticText(this, ID_STATICTEXT20, _("QTY    "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	StaticText20->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer21->Add(StaticText20, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	quantityStaticField = new wxStaticText(this, ID_STATICTEXT23, _("100"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT23"));
	quantityStaticField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer21->Add(quantityStaticField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer18->Add(BoxSizer21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(BoxSizer18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("DELETE ITEM"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->SetForegroundColour(wxColour(255,255,255));
	Button2->SetBackgroundColour(wxColour(225,9,63));
	wxFont Button2Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Consolas"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	StaticBoxSizer3->Add(Button2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer12->Add(StaticBoxSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxVERTICAL, this, _("EDIT DETAILS"));
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	StaticText12 = new wxStaticText(this, ID_STATICTEXT12, _("*"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	StaticText12->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText12Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText12->SetFont(StaticText12Font);
	BoxSizer13->Add(StaticText12, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText13 = new wxStaticText(this, ID_STATICTEXT13, _("ITEM"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	StaticText13->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer13->Add(StaticText13, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	itemUpdateField = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxSize(210,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	BoxSizer13->Add(itemUpdateField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer16->Add(BoxSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	StaticText14 = new wxStaticText(this, ID_STATICTEXT14, _("*"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	StaticText14->SetForegroundColour(wxColour(255,0,0));
	wxFont StaticText14Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText14->SetFont(StaticText14Font);
	BoxSizer14->Add(StaticText14, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText15 = new wxStaticText(this, ID_STATICTEXT15, _("PRICE"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	StaticText15->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer14->Add(StaticText15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	priceUpdateField = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxSize(136,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	BoxSizer14->Add(priceUpdateField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer16->Add(BoxSizer14, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	StaticText16 = new wxStaticText(this, ID_STATICTEXT16, _("QTY    "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	StaticText16->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer15->Add(StaticText16, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	quantityUpdateField = new wxTextCtrl(this, ID_TEXTCTRL7, wxEmptyString, wxDefaultPosition, wxSize(113,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	BoxSizer15->Add(quantityUpdateField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer16->Add(BoxSizer15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(this, ID_BUTTON1, _("UPDATE ITEM"), wxDefaultPosition, wxSize(118,27), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	Button1->SetBackgroundColour(wxColour(94,185,70));
	wxFont Button1Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Consolas"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	BoxSizer16->Add(Button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer12->Add(StaticBoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer12, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_FLAT|wxTB_3DBUTTONS|wxTB_TEXT, _T("ID_TOOLBAR1"));
	ToolBarItem2 = ToolBar1->AddTool(ID_MAINPAGE, _("MainPage"), wxBitmap(wxImage(_T("icons\\logo.png"))), wxNullBitmap, wxITEM_NORMAL, _("Add Employee"), _("Add Employee"));
	ToolBarItem1 = ToolBar1->AddTool(help, _("Help"), wxBitmap(wxImage(_T("icons\\help.png"))), wxNullBitmap, wxITEM_NORMAL, _("Help"), _("Help"));
	ToolBarItem5 = ToolBar1->AddTool(ID_SETTINGS, _("Settings"), wxBitmap(wxImage(_T("icons\\Settings-icon_3.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
	ToolBarItem3 = ToolBar1->AddTool(ID_EXIT, _("Exit"), wxBitmap(wxImage(_T("icons\\Actions-session-exit-icon_5.png"))), wxNullBitmap, wxITEM_NORMAL, _("Exit"), _("Exit"));
	ToolBar1->Realize();
	SetToolBar(ToolBar1);
	StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
	int __wxStatusBarWidths_1[1] = { -10 };
	int __wxStatusBarStyles_1[1] = { wxSB_RAISED };
	StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
	StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
	SetStatusBar(StatusBar1);
	MenuBar1 = new wxMenuBar();
	Menu1 = new wxMenu();
	MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Exit"), wxEmptyString, wxITEM_NORMAL);
	Menu1->Append(MenuItem1);
	MenuBar1->Append(Menu1, _("File"));
	Menu2 = new wxMenu();
	MenuItem3 = new wxMenuItem(Menu2, ID_MENUITEM3, _("Copy"), wxEmptyString, wxITEM_NORMAL);
	Menu2->Append(MenuItem3);
	MenuItem4 = new wxMenuItem(Menu2, ID_MENUITEM4, _("Cut"), wxEmptyString, wxITEM_NORMAL);
	Menu2->Append(MenuItem4);
	MenuItem5 = new wxMenuItem(Menu2, ID_MENUITEM5, _("Paste"), wxEmptyString, wxITEM_NORMAL);
	Menu2->Append(MenuItem5);
	MenuBar1->Append(Menu2, _("Edit"));
	Menu3 = new wxMenu();
	MenuBar1->Append(Menu3, _("Settings"));
	Menu4 = new wxMenu();
	MenuItem2 = new wxMenuItem(Menu4, ID_MENUITEM2, _("About"), wxEmptyString, wxITEM_NORMAL);
	Menu4->Append(MenuItem2);
	MenuBar1->Append(Menu4, _("Help"));
	SetMenuBar(MenuBar1);
	SetSizer(BoxSizer1);
	Layout();

	Connect(ID_SEARCHCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&AdminFrame::OnSearchCtrl1Text);
	Connect(ID_COMBOBOX1,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&AdminFrame::OnComboBox1Selected);
	Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_BEGIN_DRAG,(wxObjectEventFunction)&AdminFrame::OnListCtrl1BeginDrag);
	Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AdminFrame::OnBitmapButton2Click);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AdminFrame::OnButton1Click);
	//*)

	ToolBar1->SetBackgroundColour(wxColour(230,174,0));
	StatusBar1->SetBackgroundColour(wxColour(230,174,0));
	StatusBar1->SetForegroundColour(*wxWHITE);

	    Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_SELECTED,(wxObjectEventFunction)&AdminFrame::OnItemSelected);
		Connect(ID_MAINPAGE,wxEVT_TOOL,(wxObjectEventFunction)&AdminFrame::onMainPage);
        Connect(ID_SETTINGS,wxEVT_TOOL,(wxObjectEventFunction)&AdminFrame::OnSettings);
        Connect(ID_EXIT,wxEVT_TOOL,(wxObjectEventFunction)&AdminFrame::OnExit);
      db = new wxSQLite3Database();
      testDBName = wxGetCwd() + wxT("/sales.db");


	setColumns();

}


void AdminFrame::setColumns(){


        wxImageList* imageList = new wxImageList(16, 16);
        imageList->Add(wxIcon("item"));
        ListCtrl1->AssignImageList(imageList, wxIMAGE_LIST_SMALL);

        wxListItem itemCol;
        itemCol.SetText(wxT("No"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(0, itemCol);
        ListCtrl1->SetColumnWidth(0, 100 );

        itemCol.SetText(wxT("Item"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(1, itemCol);
        ListCtrl1->SetColumnWidth(1, 200 );


        itemCol.SetText(wxT("Price"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(2, itemCol);
        ListCtrl1->SetColumnWidth(2,100 );

        itemCol.SetText(wxT("QTY"));
        itemCol.SetAlign(wxLIST_FORMAT_CENTRE);
        ListCtrl1->InsertColumn(3, itemCol);
        ListCtrl1->SetColumnWidth( 3,100 );

        itemCol.SetText(wxT("Date Added"));
        itemCol.SetAlign(wxLIST_FORMAT_RIGHT);
        ListCtrl1->InsertColumn(4, itemCol);
        ListCtrl1->SetColumnWidth(4, 200 );




       setListData(wxT(""));
}
void AdminFrame::setListData(wxString filterString){
    ListCtrl1->DeleteAllItems();

    db ->Open(testDBName);
    int count = 0;


   wxSQLite3ResultSet rsInsert = db->ExecuteQuery(wxT("SELECT * FROM stockTable "+filterString));


          while(rsInsert.NextRow()){
             item = rsInsert.GetAsString("itemName");
             quantity = rsInsert.GetAsString("quantity");
             price = rsInsert.GetAsString("price");

            wxString buf;
            buf.Printf("%d",count);
            ListCtrl1->InsertItem(count, buf,0);
            ListCtrl1->SetItemData(count, count);

            buf.Printf(wxT("%s"), item);
            ListCtrl1->SetItem(count, 1, buf);

             buf.Printf(wxT("%s"), price);
            ListCtrl1->SetItem(count, 2, buf);

            buf.Printf(wxT("%s"), quantity);
            ListCtrl1->SetItem(count, 3, buf);

            buf.Printf(wxT("Col 4, item %d"), count);
            ListCtrl1->SetItem(count, 4, buf);
            count++;
        }
         rsInsert.Finalize();
        db->Close();



    }
void AdminFrame::addData(wxString itemName,wxString quantity,wxString price){


    db->Open(testDBName);
    wxSQLite3ResultSet rs = db->ExecuteQuery(wxT("SELECT * FROM stockTable WHERE itemName='"+itemName+"'"));


   if(rs.NextRow()){
        wxMessageBox(itemName+wxT(" Already Exist"),wxT("TechBay Co."));
        rs.Finalize();
        db->Close();
    }else{
      wxString buf;
      buf.Printf(wxT("ADD item %s price %s quantity %s ?"),item,price,quantity);
      wxMessageBox(buf,_("TechBay POS"));
      db->ExecuteUpdate(wxT("INSERT INTO stockTable (itemName,quantity,price,dateAdded,lastModified) VALUES('"+itemName+"','"+quantity+"','"+price+"','','')"));
      rs.Finalize();
      db->Close();
     setListData(wxT(""));
    }

}
void AdminFrame::editProduct(wxString itemName,wxString quantity,wxString price){
    db->Open(testDBName);
     wxString buf;
      buf.Printf(wxT("UPDATE item %s price %s quantity %s ?"),selectedItem,price,quantity);

      wxMessageDialog dialog(this,buf,_T("Techbay POS"), wxNO_DEFAULT|wxYES_NO|wxICON_WARNING);

     switch(dialog.ShowModal()){
       case wxID_YES:
       {
        db->ExecuteUpdate(wxT("UPDATE stockTable SET itemName='"+itemName+"',price='"+price+"',quantity='"+quantity+"' WHERE itemName='"+selectedItem+"'"));
        db->Close();
       setListData(wxT(""));

         wxMessageBox(_T("Updated Successfully !!"),_("TechBay POS"));


       }
       break;
       case wxID_NO:
        {

        }
        break;
       default:
        break;
     }

    }

void AdminFrame::OnItemSelected(wxListEvent& event){

    long count = 0;
    long index = event.GetIndex();
    wxString indexString;
    indexString.Printf("%ld",index);
   // wxMessageBox(_T("item Selected ")+indexString);

        wxSQLite3ResultSet rs;
       db->Open(testDBName);

        wxString searchText = SearchCtrl1->GetValue();

        if(SearchCtrl1->IsEmpty()){
          rs = db->ExecuteQuery(wxT("SELECT * FROM stockTable"));
        }else{
            rs = db->ExecuteQuery(wxT("SELECT * FROM stockTable WHERE itemName LIKE '%"+searchText+"%'"));
        }

          while(rs.NextRow()){
                if(count == index){
             item = rs.GetAsString("itemName");
             quantity = rs.GetAsString("quantity");
             price = rs.GetAsString("price");
             selectedItem = item;
                   break;
                }
             count ++;
          }
          itemStaticField->SetLabel(item);
          quantityStaticField->SetLabel(quantity);
          priceStaticField->SetLabel(_("Sh ")+price);
           //wxMessageBox(_T("item ")+item+_(" quantity ")+quantity+_(" price ")+price);
           rs.Finalize();
           db->Close();



}

AdminFrame::~AdminFrame()
{
	//(*Destroy(AdminFrame)
	//*)
	 try{

      wxSQLite3Database::ShutdownSQLite();
  }
  catch (wxSQLite3Exception& e){
    cerr << e.GetErrorCode() << ":" << (const char*)(e.GetMessage().mb_str()) << endl;
  }
}

void AdminFrame::OnButton3Click(wxCommandEvent& event)
{

}
void AdminFrame::OnClose(wxCloseEvent& event)
{
    OnExit();
}
void AdminFrame::onMainPage(){
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
void AdminFrame::OnExit()
{
     wxMessageDialog dialog( NULL, wxT("Are You Sure you want to Exit ?"), wxT("My POS"),
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
void AdminFrame::OnSettings(){
}
void AdminFrame::OnSales(){
     SalesFrame *sales = new SalesFrame(NULL,wxID_ANY,wxDefaultPosition,wxSize(850,500));
    sales->Show();
}

void AdminFrame::OnComboBox1Selected(wxCommandEvent& event)
{
        wxMessageBox(wxT("Chosen "+ComboBox1->GetValue()));

}


void AdminFrame::OnBitmapButton2Click(wxCommandEvent& event)
{

       item = itemField->GetValue();
       price = priceField->GetValue();
       quantity = qtyField->GetValue();


    if(itemField->GetValue().IsEmpty()|| priceField->GetValue().IsEmpty()||qtyField->GetValue().IsEmpty()){
        wxMessageBox(_("Please fill all required fields !"),_("TechBay POS"));
    }else{
      addData(item,quantity,price);
    }

}

void AdminFrame::OnSearchCtrl1Text(wxCommandEvent& event)
{
    wxString searchText = SearchCtrl1->GetValue();
    wxString sql;
    sql = " WHERE itemName LIKE '%"+searchText+"%' ";
    setListData(sql);
}

void AdminFrame::OnListCtrl1BeginDrag(wxListEvent& event)
{

}

void AdminFrame::OnButton1Click(wxCommandEvent& event)
{
    if(selectedItem.IsEmpty()){
        wxMessageBox(_("Please Select Item to Update !")+selectedItem,_("TechBay POS"));
    }else{
        item = itemUpdateField->GetValue();
       price = priceUpdateField->GetValue();
       quantity = quantityUpdateField->GetValue();
       if(itemUpdateField->IsEmpty()||priceUpdateField->IsEmpty()||quantityUpdateField->IsEmpty()){
                wxMessageBox(_("Please Fill Details to Update ")+selectedItem,_("TechBay POS"));
       }else{
        editProduct(item,quantity,price);
       }
    }

}

void AdminFrame::OnButton2Click(wxCommandEvent& event)
{

    if(selectedItem.IsEmpty()){
        wxMessageBox(_("Please Select Item to Delete!")+selectedItem,_("TechBay POS"));
    }else{
         deleteProduct(selectedItem);
    }

}
void AdminFrame::deleteProduct(wxString itemName){
    db->Open(testDBName);
     wxString buf;
      buf.Printf(wxT("DELETE item %s price %s quantity %s ?"),selectedItem,price,quantity);

      wxMessageDialog dialog(this,buf,_T("Techbay POS"), wxNO_DEFAULT|wxYES_NO|wxICON_WARNING);

     switch(dialog.ShowModal()){
       case wxID_YES:
       {
        db->ExecuteUpdate(wxT("DELETE FROM stockTable WHERE itemName='"+selectedItem+"'"));
        db->Close();
        setListData(wxT(""));

         wxMessageBox(_T("DELETED Successfully !!"),_("TechBay POS"));


       }
       break;
       case wxID_NO:
        {

        }
        break;
       default:
        break;
     }

    }
