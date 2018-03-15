#include "MainFrame.h"
#include "userLoginFrame.h"
#include "MySystemMain.h"
#include <wx/wx.h>

//(*InternalHeaders(MainFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(MainFrame)
const long MainFrame::ID_STATICTEXT3 = wxNewId();
const long MainFrame::ID_STATICBITMAP1 = wxNewId();
const long MainFrame::ID_BUTTON1 = wxNewId();
const long MainFrame::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(MainFrame,wxFrame)
	//(*EventTable(MainFrame)
	//*)
END_EVENT_TABLE()

MainFrame::MainFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(MainFrame)
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, _("TECHBAY POS"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(711,550));
	SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("icons\\logo.png"))));
		SetIcon(FrameIcon);
	}
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("HOTEL  POS"), wxDefaultPosition, wxSize(264,29), wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
	StaticText3->SetMaxSize(wxSize(-1,40));
	StaticText3->SetForegroundColour(wxColour(255,255,255));
	StaticText3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWFRAME));
	wxFont StaticText3Font(18,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century Gothic"),wxFONTENCODING_DEFAULT);
	StaticText3->SetFont(StaticText3Font);
	BoxSizer1->Add(StaticText3, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("icons\\tecbay-large.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
	BoxSizer2->Add(StaticBitmap1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 15);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("USER"), wxDefaultPosition, wxSize(187,59), 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->SetForegroundColour(wxColour(255,255,255));
	Button1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOWFRAME));
	wxFont Button1Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Consolas"),wxFONTENCODING_DEFAULT);
	Button1->SetFont(Button1Font);
	BoxSizer3->Add(Button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 20);
	Button2 = new wxButton(this, ID_BUTTON2, _("ADMIN"), wxDefaultPosition, wxSize(184,57), 0, wxDefaultValidator, _T("ID_BUTTON2"));
	Button2->SetForegroundColour(wxColour(255,255,255));
	Button2->SetBackgroundColour(wxColour(66,149,45));
	wxFont Button2Font(14,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Consolas"),wxFONTENCODING_DEFAULT);
	Button2->SetFont(Button2Font);
	BoxSizer3->Add(Button2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 20);
	BoxSizer1->Add(BoxSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 25);
	SetSizer(BoxSizer1);
	SetSizer(BoxSizer1);
	Layout();
	Center();

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MainFrame::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&MainFrame::OnButton2Click);
	//*)
	 db = new wxSQLite3Database();
    testDBName = wxGetCwd() + wxT("/sales.db");

	setupDb();
}

MainFrame::~MainFrame()
{
	//(*Destroy(MainFrame)
	//*)
}
void MainFrame::setupDb(){
	if (wxFileExists(testDBName)){

       //wxMessageBox(wxT("Db Already Exists"));
         // wxRemoveFile(testDBName);
	}else{

        db->Open(testDBName);
        db->ExecuteUpdate(wxT("CREATE TABLE IF NOT EXISTS adminTable (firstName TEXT NOT NULL,lastName TEXT NOT NULL,username TEXT PRIMARY KEY,password TEXT NOT NULL,idNo DEFAULT NULL,phoneNo DEFAULT NULL,lastLogin TEXT DEFAULT NULL)"));
        db->ExecuteUpdate(wxT("CREATE TABLE IF NOT EXISTS staffTable (firstName TEXT NOT NULL,lastName TEXT NOT NULL,username TEXT PRIMARY KEY,password TEXT NOT NULL,idNo DEFAULT NULL,phoneNo DEFAULT NULL,lastLogin TEXT DEFAULT NULL)"));
        db->ExecuteUpdate(wxT("CREATE TABLE IF NOT EXISTS stockTable (itemId INTEGER PRIMARY KEY AUTOINCREMENT,itemName TEXT NOT NULL, quantity TEXT DEFAULT NULL, price TEXT NOT NULL,dateAdded TEXT DEFAULT NULL,lastModified TEXT DEFAULT NULL)"));
        db->ExecuteUpdate(wxT("CREATE TABLE IF NOT EXISTS salesTable (itemId INTEGER PRIMARY KEY AUTOINCREMENT,itemName TEXT NOT NULL, quantity TEXT DEFAULT NULL, price TEXT NOT NULL)"));
        db->ExecuteUpdate(wxT("INSERT INTO adminTable (firstName,lastName,username,password,idNo,phoneNo,lastLogin) VALUES('admin','admin','admin','admin','admin','admin','admin')"));
        db->Close();
        wxMessageBox(wxT("Db Created"),wxT("MY POS - T-Bay Company"));

	}


}


void MainFrame::OnButton2Click(wxCommandEvent& event)
{
     Close(true);
     MySystemFrame *main = new MySystemFrame(NULL,wxID_ANY);
     main->Show();
}

void MainFrame::OnButton1Click(wxCommandEvent& event)
{
     Close(true);
    userLoginFrame *userLogin = new userLoginFrame(NULL,wxID_ANY,wxDefaultPosition,wxSize(850,500));
    userLogin->Show();

}
