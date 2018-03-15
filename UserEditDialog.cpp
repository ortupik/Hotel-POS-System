#include "UserEditDialog.h"
#include <wx/wx.h>
#include "EmployeeFrame.h"
//(*InternalHeaders(UserEditDialog)
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(UserEditDialog)
const long UserEditDialog::ID_STATICTEXT6 = wxNewId();
const long UserEditDialog::ID_STATICTEXT11 = wxNewId();
const long UserEditDialog::ID_STATICTEXT7 = wxNewId();
const long UserEditDialog::ID_STATICTEXT12 = wxNewId();
const long UserEditDialog::ID_STATICTEXT8 = wxNewId();
const long UserEditDialog::ID_STATICTEXT13 = wxNewId();
const long UserEditDialog::ID_STATICTEXT9 = wxNewId();
const long UserEditDialog::ID_STATICTEXT19 = wxNewId();
const long UserEditDialog::ID_STATICTEXT20 = wxNewId();
const long UserEditDialog::ID_STATICTEXT17 = wxNewId();
const long UserEditDialog::ID_STATICTEXT18 = wxNewId();
const long UserEditDialog::ID_STATICTEXT14 = wxNewId();
const long UserEditDialog::ID_STATICTEXT10 = wxNewId();
const long UserEditDialog::ID_STATICBITMAP2 = wxNewId();
const long UserEditDialog::ID_STATICTEXT5 = wxNewId();
const long UserEditDialog::ID_STATICTEXT1 = wxNewId();
const long UserEditDialog::ID_TEXTCTRL1 = wxNewId();
const long UserEditDialog::ID_STATICTEXT4 = wxNewId();
const long UserEditDialog::ID_TEXTCTRL4 = wxNewId();
const long UserEditDialog::ID_STATICTEXT3 = wxNewId();
const long UserEditDialog::ID_TEXTCTRL3 = wxNewId();
const long UserEditDialog::ID_STATICTEXT16 = wxNewId();
const long UserEditDialog::ID_TEXTCTRL6 = wxNewId();
const long UserEditDialog::ID_STATICTEXT15 = wxNewId();
const long UserEditDialog::ID_TEXTCTRL5 = wxNewId();
const long UserEditDialog::ID_STATICTEXT21 = wxNewId();
const long UserEditDialog::ID_TEXTCTRL7 = wxNewId();
const long UserEditDialog::ID_STATICTEXT2 = wxNewId();
const long UserEditDialog::ID_TEXTCTRL2 = wxNewId();
const long UserEditDialog::ID_BITMAPBUTTON1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(UserEditDialog,wxDialog)
	//(*EventTable(UserEditDialog)
	//*)
END_EVENT_TABLE()

UserEditDialog::UserEditDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(UserEditDialog)
	wxBoxSizer* BoxSizer4;
	wxStaticBoxSizer* StaticBoxSizer2;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer15;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer13;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer11;
	wxBoxSizer* BoxSizer16;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer14;
	wxStaticBoxSizer* StaticBoxSizer3;
	wxBoxSizer* BoxSizer17;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer9;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, _("EDIT USER DETAILS"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(700,660));
	SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	SetBackgroundColour(wxColour(128,64,64));
	StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, this, _("EDIT USER DETAILS"));
	BoxSizer8 = new wxBoxSizer(wxVERTICAL);
	BoxSizer9 = new wxBoxSizer(wxVERTICAL);
	StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Current Details"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	StaticText6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText6Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText6->SetFont(StaticText6Font);
	BoxSizer9->Add(StaticText6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8->Add(BoxSizer9, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3 = new wxStaticBoxSizer(wxVERTICAL, this, wxEmptyString);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("First Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	StaticText11->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer10->Add(StaticText11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	firstnameStaticField = new wxStaticText(this, ID_STATICTEXT7, _("First Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	firstnameStaticField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer10->Add(firstnameStaticField, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(BoxSizer10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	StaticText12 = new wxStaticText(this, ID_STATICTEXT12, _("Last Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	StaticText12->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer11->Add(StaticText12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	lastnameStaticField = new wxStaticText(this, ID_STATICTEXT8, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	lastnameStaticField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer11->Add(lastnameStaticField, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(BoxSizer11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	StaticText13 = new wxStaticText(this, ID_STATICTEXT13, _("ID No"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	StaticText13->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer12->Add(StaticText13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	idnoStaticField = new wxStaticText(this, ID_STATICTEXT9, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	idnoStaticField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer12->Add(idnoStaticField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(BoxSizer12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	StaticText19 = new wxStaticText(this, ID_STATICTEXT19, _("Phone No"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	StaticText19->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer16->Add(StaticText19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	phonenoStaticField = new wxStaticText(this, ID_STATICTEXT20, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	phonenoStaticField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer16->Add(phonenoStaticField, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(BoxSizer16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	StaticText17 = new wxStaticText(this, ID_STATICTEXT17, _("Username"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	StaticText17->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer15->Add(StaticText17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	usernameStaticField = new wxStaticText(this, ID_STATICTEXT18, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	usernameStaticField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer15->Add(usernameStaticField, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(BoxSizer15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	StaticText14 = new wxStaticText(this, ID_STATICTEXT14, _("Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	StaticText14->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer13->Add(StaticText14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	passwordStaticField = new wxStaticText(this, ID_STATICTEXT10, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	passwordStaticField->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer13->Add(passwordStaticField, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer3->Add(BoxSizer13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8->Add(StaticBoxSizer3, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 25);
	StaticBoxSizer1->Add(BoxSizer8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxVERTICAL, this, wxEmptyString);
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	StaticBitmap2 = new wxStaticBitmap(this, ID_STATICBITMAP2, wxBitmap(wxImage(_T("icons\\Actions-contact-new-icon.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP2"));
	BoxSizer6->Add(StaticBitmap2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Edit Employee Details"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText5Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	BoxSizer6->Add(StaticText5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("First Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer3->Add(StaticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	firstNamefield = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(210,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer3->Add(firstNamefield, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Last Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer5->Add(StaticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	lastNameField = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxSize(211,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer5->Add(lastNameField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("ID No       "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer4->Add(StaticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	idNoField = new wxTextCtrl(this, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(215,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer4->Add(idNoField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	StaticText16 = new wxStaticText(this, ID_STATICTEXT16, _("Phone No  "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	StaticText16->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer14->Add(StaticText16, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	phoneNoField = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxDefaultPosition, wxSize(215,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	BoxSizer14->Add(phoneNoField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	StaticText15 = new wxStaticText(this, ID_STATICTEXT15, _("Username"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	StaticText15->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer1->Add(StaticText15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	usernameField = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxDefaultPosition, wxSize(215,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	BoxSizer1->Add(usernameField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	StaticText21 = new wxStaticText(this, ID_STATICTEXT21, _("Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
	StaticText21->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer17->Add(StaticText21, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	passwordField = new wxTextCtrl(this, ID_TEXTCTRL7, wxEmptyString, wxDefaultPosition, wxSize(215,21), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	BoxSizer17->Add(passwordField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer17, 1, wxALL|wxALI WHERE `username` = '"+indexString+"'));GN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Confirm Password"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer7->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ConfirmPasswordField = new wxTextCtrl(this, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(176,21), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer7->Add(ConfirmPasswordField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("icons\\Actions-contact-new-icon_4.png"))), wxDefaultPosition, wxSize(74,32), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	BitmapButton1->SetMinSize(wxSize(70,20));
	StaticBoxSizer2->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(StaticBoxSizer2, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 25);
	StaticBoxSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(StaticBoxSizer1);
	SetSizer(StaticBoxSizer1);
	Layout();
	Center();

	Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&UserEditDialog::OnBitmapButton1Click);
	//*)
	db = new wxSQLite3Database();
      testDBName = wxGetCwd() + wxT("/sales.db");
}
void UserEditDialog::editUser(wxString firstName,wxString lastName,wxString idNo,wxString phoneNo,wxString username,wxString password){
    db->Open(testDBName);
     wxString buf;
      buf.Printf(wxT("UPDATE first name %s last name %s ID No %s \nphone No %s username %s password %s ?"),firstName,lastName,idNo,phoneNo,username,password);

      wxMessageDialog dialog(this,buf,_T("Techbay POS"), wxNO_DEFAULT|wxYES_NO|wxICON_WARNING);

     switch(dialog.ShowModal()){
       case wxID_YES:
       {
        db->ExecuteUpdate(wxT("UPDATE staffTable SET firstName='"+firstName+"',lastName='"+lastName+"',idNo='"+idNo+"',phoneNo='"+phoneNo+"',username='"+username+"',password='"+password+"' WHERE username='"+username+"'"));
        wxMessageBox(_T("Updated Successfully !!"),_("TechBay POS"));

      db->Close();
      // setListData(wxT(""));
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
UserEditDialog::~UserEditDialog()
{
	//(*Destroy(UserEditDialog)
	//*)
}

void UserEditDialog::getValues(wxString currentDetails []){

          firstnameStaticField->SetLabel(firstName);
          lastnameStaticField->SetLabel(lastName);
          idnoStaticField->SetLabel(idNo);
          phoneNoField->SetLabel(phoneNo);
          usernameStaticField->SetLabel(username);
          passwordStaticField->SetLabel(password);


}

void UserEditDialog::OnBitmapButton1Click(wxCommandEvent& event)
{
    if(firstNamefield->IsEmpty()||lastNameField->IsEmpty()||idNoField->IsEmpty()|| phoneNoField->IsEmpty()
       ||usernameField->IsEmpty()||passwordField->IsEmpty()){

        wxMessageBox(_T("Please fill all required fields !"),_T("Techbay POS"));
       }else{

        firstName = firstNamefield->GetValue();
         lastName = lastNameField->GetValue();
         idNo = idNoField->GetValue();
         phoneNo = phoneNoField->GetValue();
         username = usernameField->GetValue();
         password = passwordField->GetValue();
         wxString cPassword = ConfirmPasswordField->GetValue();

          if(cPassword.IsSameAs(password)){
             editUser(firstName,lastName,idNo,phoneNo,username,password);
          }else{
             wxMessageBox(_T("Passwords Do NOT match !"),_T("Techbay POS"));
          }


       }
}
