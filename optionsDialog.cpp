#include "optionsDialog.h"
#include "MySystemMain.h"
#include "SalesFrame.h"
#include "AdminFrame.h"
#include "UserFrame.h"
#include "TestFrame.h"
#include "EmployeeFrame.h"
#include "ManageFrame.h"

//(*InternalHeaders(optionsDialog)
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(optionsDialog)
const long optionsDialog::ID_STATICBITMAP1 = wxNewId();
const long optionsDialog::ID_BITMAPBUTTON3 = wxNewId();
const long optionsDialog::ID_STATICTEXT3 = wxNewId();
const long optionsDialog::ID_BITMAPBUTTON4 = wxNewId();
const long optionsDialog::ID_STATICTEXT4 = wxNewId();
const long optionsDialog::ID_BITMAPBUTTON2 = wxNewId();
const long optionsDialog::ID_STATICTEXT2 = wxNewId();
const long optionsDialog::ID_BITMAPBUTTON1 = wxNewId();
const long optionsDialog::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(optionsDialog,wxDialog)
	//(*EventTable(optionsDialog)
	//*)
END_EVENT_TABLE()

optionsDialog::optionsDialog(wxWindow* parent,wxString usernameString)
{
	//(*Initialize(optionsDialog)
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer9;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, _("Techbay"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetBackgroundColour(wxColour(47,79,79));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("icons\\techbay.png")).Rescale(wxSize(692,211).GetWidth(),wxSize(692,211).GetHeight())), wxDefaultPosition, wxSize(692,211), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(StaticBitmap1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	BoxSizer8->Add(BitmapButton3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("STOCKS"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText3Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer8->Add(StaticText3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("icons\\Actions-contact-new-icon_2.png"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	BoxSizer9->Add(BitmapButton4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("PERSONELL"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText4Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText4->SetFont(StaticText4Font);
	BoxSizer9->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("icons\\shop-cart-apply-icon_3.png"))), wxDefaultPosition, wxSize(114,92), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	BoxSizer6->Add(BitmapButton2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("SALES"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText2Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer6->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("icons\\Settings-icon_2.png"))), wxDefaultPosition, wxSize(101,93), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	BoxSizer5->Add(BitmapButton1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("ADMIN"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText1Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer5->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	Center();

	Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&optionsDialog::OnBitmapButton3Click);
	Connect(ID_BITMAPBUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&optionsDialog::OnBitmapButton4Click1);
	Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&optionsDialog::OnBitmapButton2Click);
	Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&optionsDialog::OnBitmapButton1Click);
	//*)


	//username->SetLabel(usernameString);
}

optionsDialog::~optionsDialog()
{
	//(*Destroy(optionsDialog)
	//*)
}


void optionsDialog::OnListBox1Select(wxCommandEvent& event)
{
}

void optionsDialog::OnButton1Click(wxCommandEvent& event)
{
 Close(true);
    SalesFrame *sales = new SalesFrame(this,wxID_ANY,wxDefaultPosition,wxSize(850,500));
    sales->Show();
}

void optionsDialog::OnButton2Click(wxCommandEvent& event)
{

}

void optionsDialog::OnBitmapButton2Click(wxCommandEvent& event)
{
     Close(true);
    SalesFrame *sales = new SalesFrame(this,wxID_ANY,wxDefaultPosition,wxSize(850,500));
    sales->Show();
}

void optionsDialog::OnBitmapButton3Click(wxCommandEvent& event)
{
     Close(true);
     AdminFrame *sales = new AdminFrame(this,wxID_ANY,wxDefaultPosition,wxSize(1144,752));
    sales->Show();

}

void optionsDialog::OnBitmapButton4Click(wxCommandEvent& event)
{

}

void optionsDialog::OnBitmapButton4Click1(wxCommandEvent& event)
{
    Close(true);
    EmployeeFrame *employee = new EmployeeFrame(this,wxID_ANY,wxDefaultPosition,wxSize(1000,676));
    employee->Show();
}

void optionsDialog::OnBitmapButton1Click(wxCommandEvent& event)
{
    Close(true);
    ManageFrame *manage = new ManageFrame(this,wxID_ANY,wxDefaultPosition,wxSize(1000,676));
    manage->Show();
}
