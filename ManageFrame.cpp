#include "ManageFrame.h"
#include "MainFrame.h"
#include "AdminEditDialog.h"
#include <wx/wx.h>

//(*InternalHeaders(ManageFrame)
#include <wx/bitmap.h>
#include <wx/icon.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(ManageFrame)
const long ManageFrame::ID_STATICBITMAP1 = wxNewId();
const long ManageFrame::ID_STATICTEXT5 = wxNewId();
const long ManageFrame::ID_STATICTEXT1 = wxNewId();
const long ManageFrame::ID_TEXTCTRL1 = wxNewId();
const long ManageFrame::ID_STATICTEXT4 = wxNewId();
const long ManageFrame::ID_TEXTCTRL4 = wxNewId();
const long ManageFrame::ID_STATICTEXT3 = wxNewId();
const long ManageFrame::ID_TEXTCTRL3 = wxNewId();
const long ManageFrame::ID_STATICTEXT7 = wxNewId();
const long ManageFrame::ID_TEXTCTRL6 = wxNewId();
const long ManageFrame::ID_STATICTEXT6 = wxNewId();
const long ManageFrame::ID_TEXTCTRL5 = wxNewId();
const long ManageFrame::ID_STATICTEXT2 = wxNewId();
const long ManageFrame::ID_TEXTCTRL2 = wxNewId();
const long ManageFrame::ID_BITMAPBUTTON1 = wxNewId();
const long ManageFrame::ID_LISTCTRL1 = wxNewId();
const long ManageFrame::ID_PANEL1 = wxNewId();
const long ManageFrame::ID_AUINOTEBOOK1 = wxNewId();
const long ManageFrame::ID_MAINPAGE = wxNewId();
const long ManageFrame::help = wxNewId();
const long ManageFrame::ID_EXIT = wxNewId();
const long ManageFrame::ID_TOOLBAR1 = wxNewId();
const long ManageFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ManageFrame,wxFrame)
	//(*EventTable(ManageFrame)
	//*)
END_EVENT_TABLE()

ManageFrame::ManageFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(ManageFrame)
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer2;
	wxGridSizer* GridSizer1;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer9;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxBoxSizer* BoxSizer3;

	Create(parent, id, _("Manage - Admin Techbay POS"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
	SetClientSize(wxSize(1200,676));
	Move(wxDefaultPosition);
	SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	SetBackgroundColour(wxColour(47,79,79));
	{
		wxIcon FrameIcon;
		FrameIcon.CopyFromBitmap(wxBitmap(wxImage(_T("icons\\logo.png"))));
		SetIcon(FrameIcon);
	}
	AuiNotebook1 = new wxAuiNotebook(this, ID_AUINOTEBOOK1, wxPoint(112,432), wxSize(1032,545), wxAUI_NB_TAB_FIXED_WIDTH|wxAUI_NB_BOTTOM|wxNO_BORDER);
	AuiNotebook1->SetForegroundColour(wxColour(255,255,255));
	AuiNotebook1->SetBackgroundColour(wxColour(47,79,79));
	Panel1 = new wxPanel(AuiNotebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxColour(255,255,255));
	Panel1->SetBackgroundColour(wxColour(47,79,79));
	GridSizer1 = new wxGridSizer(0, 1, 0, 0);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Add ADMIN"));
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("icons\\Actions-contact-new-icon.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer6->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Add New ADMIN"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText5Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	BoxSizer6->Add(StaticText5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("First Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer4->Add(StaticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	firstNameField = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(210,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer4->Add(firstNameField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Last Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer5->Add(StaticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	lastNameField = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxSize(211,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer5->Add(lastNameField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("ID No       "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer7->Add(StaticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	idNoField = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(215,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer7->Add(idNoField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT7, _("Phone No  "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	StaticText7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer10->Add(StaticText7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	phoneNoField = new wxTextCtrl(Panel1, ID_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxSize(215,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	BoxSizer10->Add(phoneNoField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Username"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticText6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer9->Add(StaticText6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	usernameField = new wxTextCtrl(Panel1, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxSize(215,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	BoxSizer9->Add(usernameField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer8->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	passwordField = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(215,21), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer8->Add(passwordField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("icons\\Actions-contact-new-icon_4.png"))), wxDefaultPosition, wxSize(70,39), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	BitmapButton1->SetMinSize(wxSize(70,20));
	StaticBoxSizer1->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(StaticBoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	ListCtrl1 = new wxListCtrl(Panel1, ID_LISTCTRL1, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxNO_BORDER, wxDefaultValidator, _T("ID_LISTCTRL1"));
	ListCtrl1->SetForegroundColour(wxColour(255,255,255));
	ListCtrl1->SetBackgroundColour(wxColour(47,79,79));
	BoxSizer3->Add(ListCtrl1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 2, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(GridSizer1);
	GridSizer1->Fit(Panel1);
	GridSizer1->SetSizeHints(Panel1);
	AuiNotebook1->AddPage(Panel1, _("ADMIN"));
	ToolBar1 = new wxToolBar(this, ID_TOOLBAR1, wxDefaultPosition, wxDefaultSize, wxTB_FLAT|wxTB_3DBUTTONS|wxTB_TEXT|wxTB_LEFT, _T("ID_TOOLBAR1"));
	ToolBarItem2 = ToolBar1->AddTool(ID_MAINPAGE, _("Main Page"), wxBitmap(wxImage(_T("icons\\logo.png"))), wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString);
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
	Center();

	Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ManageFrame::OnBitmapButton1Click);
	//*)
      db = new wxSQLite3Database();
      testDBName = wxGetCwd() + wxT("/sales.db");
	   setColumns();
	   Connect(ID_MAINPAGE,wxEVT_TOOL,(wxObjectEventFunction)&ManageFrame::onMainPage);
      Connect(ID_LISTCTRL1,wxEVT_COMMAND_LIST_ITEM_ACTIVATED,(wxObjectEventFunction)&ManageFrame::onItemClicked);

}
void ManageFrame::setColumns(){


        wxImageList* imageList = new wxImageList(16, 16);
        imageList->Add(wxIcon("item"));
        ListCtrl1->AssignImageList(imageList, wxIMAGE_LIST_SMALL);

        wxListItem itemCol;
        itemCol.SetText(wxT("No"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(0, itemCol);
        ListCtrl1->SetColumnWidth(0, 100 );

        itemCol.SetText(wxT("First Name"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(1, itemCol);
        ListCtrl1->SetColumnWidth(1, 100 );

        itemCol.SetText(wxT("Last Name"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(2, itemCol);
        ListCtrl1->SetColumnWidth(2, 100 );


        itemCol.SetText(wxT("ID No"));
        itemCol.SetImage(-1);
        ListCtrl1->InsertColumn(3, itemCol);
        ListCtrl1->SetColumnWidth(3,100 );

        itemCol.SetText(wxT("Phone No"));
        itemCol.SetAlign(wxLIST_FORMAT_CENTRE);
        ListCtrl1->InsertColumn(4, itemCol);
        ListCtrl1->SetColumnWidth( 4,100 );

        itemCol.SetText(wxT("Last Login"));
        itemCol.SetAlign(wxLIST_FORMAT_RIGHT);
        ListCtrl1->InsertColumn(5, itemCol);
        ListCtrl1->SetColumnWidth(5, 100 );




      setListData();
}
void ManageFrame::setListData(){
    ListCtrl1->DeleteAllItems();

    db ->Open(testDBName);
    int count = 0;


   wxSQLite3ResultSet rsInsert = db->ExecuteQuery(wxT("SELECT * FROM adminTable"));


          while(rsInsert.NextRow()){
             firstName = rsInsert.GetAsString("firstName");
             lastName = rsInsert.GetAsString("lastName");
             idNo = rsInsert.GetAsString("idNo");
             phoneNo = rsInsert.GetAsString("phoneNo");
             lastLogin = rsInsert.GetAsString("lastLogin");


            wxString buf;
            buf.Printf("%d",count);
            ListCtrl1->InsertItem(count, buf,0);
            ListCtrl1->SetItemData(count, count);

            buf.Printf(wxT("%s"), firstName);
            ListCtrl1->SetItem(count, 1, buf);

             buf.Printf(wxT("%s"), lastName);
            ListCtrl1->SetItem(count, 2, buf);

            buf.Printf(wxT("%s"), idNo);
            ListCtrl1->SetItem(count, 3, buf);

            buf.Printf(wxT("%s"), phoneNo);
            ListCtrl1->SetItem(count, 4, buf);

             buf.Printf(wxT("%s"), lastLogin);
            ListCtrl1->SetItem(count, 5, buf);

            count++;
        }
         rsInsert.Finalize();
        db->Close();



    }
void ManageFrame::addData(){


    db->Open(testDBName);
  /*  wxSQLite3ResultSet rs = db->ExecuteQuery(wxT("SELECT * FROM staffTable WHERE itemName='"+itemName+"'"));


   if(rs.NextRow()){
        wxMessageBox(itemName+wxT(" Already Exist"),wxT("TechBay Co."));
        rs.Finalize();
        db->Close();
    }else{
      wxString buf;
      buf.Printf(wxT("ADD item %s price %s quantity %s ?"),item,price,quantity);
      wxMessageBox(buf,_("TechBay POS"));*/

      firstName = firstNameField->GetValue();
      lastName = lastNameField->GetValue();
      idNo = idNoField->GetValue();
      phoneNo= phoneNoField->GetValue();
      password = passwordField->GetValue();
      username = usernameField->GetValue();

      db->ExecuteUpdate(wxT("INSERT INTO adminTable (firstName,lastName,username,password,idNo,phoneNo,lastLogin) VALUES('"+firstName+"','"+lastName+"','"+username+"','"+password+"','"+idNo+"','"+phoneNo+"','')"));
      //rs.Finalize();
      db->Close();
     setListData();
    }
    void ManageFrame::onItemClicked(wxListEvent& event){
    AdminEditDialog* adialog = new AdminEditDialog(this);
    adialog->ShowModal();
 }
    void ManageFrame::onMainPage(){
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
ManageFrame::~ManageFrame()
{
	//(*Destroy(ManageFrame)
	//*)
}


void ManageFrame::OnBitmapButton1Click(wxCommandEvent& event)
{
    addData();
}
