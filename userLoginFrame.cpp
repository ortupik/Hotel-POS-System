#include "userLoginFrame.h"
#include <wx/wx.h>
#include "optionsDialog.h"
#include "SalesFrame.h"

//(*InternalHeaders(userLoginFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(userLoginFrame)
const long userLoginFrame::ID_STATICTEXT3 = wxNewId();
const long userLoginFrame::ID_STATICBITMAP1 = wxNewId();
const long userLoginFrame::ID_STATICTEXT1 = wxNewId();
const long userLoginFrame::ID_TEXTCTRL1 = wxNewId();
const long userLoginFrame::ID_STATICTEXT2 = wxNewId();
const long userLoginFrame::ID_TEXTCTRL2 = wxNewId();
const long userLoginFrame::ID_BUTTON1 = wxNewId();
const long userLoginFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(userLoginFrame,wxFrame)
	//(*EventTable(userLoginFrame)
	//*)
END_EVENT_TABLE()

userLoginFrame::userLoginFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(userLoginFrame)
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, _("User Login -- TechBay"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(672,559));
	SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("icons\\logo.png"))));
		SetIcon(FrameIcon);
	}
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("USER  LOGIN"), wxDefaultPosition, wxSize(264,29), wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
	StaticText3->SetMaxSize(wxSize(-1,40));
	StaticText3->SetForegroundColour(wxColour(255,255,255));
	StaticText3->SetBackgroundColour(wxColour(31,172,28));
	wxFont StaticText3Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer1->Add(StaticText3, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("icons\\tecbay-large.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	BoxSizer2->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Username"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	wxFont StaticText1Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer3->Add(StaticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	usernameField = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(192,25), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer3->Add(usernameField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	wxFont StaticText2Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText2->SetFont(StaticText2Font);
	BoxSizer4->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	passwordField = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(191,25), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer4->Add(passwordField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	loginButton = new wxButton(this, ID_BUTTON1, _("LOGIN"), wxDefaultPosition, wxSize(92,24), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer5->Add(loginButton, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 25);
	SetSizer(BoxSizer1);
	StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
	int __wxStatusBarWidths_1[1] = { -1 };
	int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
	StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
	StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
	SetStatusBar(StatusBar1);
	SetSizer(BoxSizer1);
	Layout();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&userLoginFrame::OnloginButtonClick);
	//*)
	StatusBar1->SetBackgroundColour(wxColour(47,79,79));
	 db = new wxSQLite3Database();
    testDBName = wxGetCwd() + wxT("/sales.db");
}

userLoginFrame::~userLoginFrame()
{
	//(*Destroy(userLoginFrame)
	//*)
}


void userLoginFrame::OnloginButtonClick(wxCommandEvent& event)
{
     username = usernameField->GetValue();
    password = passwordField->GetValue();

    if(usernameField->IsEmpty()||passwordField->IsEmpty()){
          wxMessageBox(wxT("please fill all required Fields"),wxT("Techbay POS"));
    }else{
          db ->Open(testDBName);

          wxSQLite3ResultSet rsCheck = db->ExecuteQuery(wxT("SELECT * FROM staffTable WHERE username = '"+username+"' AND password = '"+password+"'"));
          if(rsCheck.NextRow()){
               rsCheck.Finalize();
               db->Close();
               Close(true);
            SalesFrame *sales = new SalesFrame(NULL,wxID_ANY,wxDefaultPosition,wxSize(850,500));
            sales->Show();
          }else{

              rsCheck.Finalize();
              db->Close();
              wxMessageBox(wxT("Invalid Username or Password"),wxT("Techbay POS"));
          }
    }
}
