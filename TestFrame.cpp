#include "TestFrame.h"

//(*InternalHeaders(TestFrame)
#include <wx/artprov.h>
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(TestFrame)
const long TestFrame::ID_SEARCHCTRL1 = wxNewId();
const long TestFrame::ID_COMBOBOX1 = wxNewId();
const long TestFrame::ID_LISTCTRL1 = wxNewId();
const long TestFrame::ID_STATICBITMAP1 = wxNewId();
const long TestFrame::ID_STATICTEXT5 = wxNewId();
const long TestFrame::ID_STATICTEXT2 = wxNewId();
const long TestFrame::ID_TEXTCTRL2 = wxNewId();
const long TestFrame::ID_STATICTEXT3 = wxNewId();
const long TestFrame::ID_TEXTCTRL3 = wxNewId();
const long TestFrame::ID_STATICTEXT4 = wxNewId();
const long TestFrame::ID_TEXTCTRL4 = wxNewId();
const long TestFrame::ID_STATICTEXT1 = wxNewId();
const long TestFrame::ID_TEXTCTRL1 = wxNewId();
const long TestFrame::ID_BITMAPBUTTON1 = wxNewId();
const long TestFrame::ID_BITMAPBUTTON2 = wxNewId();
const long TestFrame::ID_PANEL1 = wxNewId();
const long TestFrame::ID_AUINOTEBOOK1 = wxNewId();
const long TestFrame::ID_ADDEMPLOYEE = wxNewId();
const long TestFrame::help = wxNewId();
const long TestFrame::exit = wxNewId();
const long TestFrame::ID_TOOLBAR1 = wxNewId();
const long TestFrame::ID_STATUSBAR1 = wxNewId();
const long TestFrame::ID_MENUITEM1 = wxNewId();
const long TestFrame::ID_MENUITEM3 = wxNewId();
const long TestFrame::ID_MENUITEM4 = wxNewId();
const long TestFrame::ID_MENUITEM5 = wxNewId();
const long TestFrame::ID_MENUITEM2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TestFrame,wxFrame)
	//(*EventTable(TestFrame)
	//*)
END_EVENT_TABLE()

TestFrame::TestFrame(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(TestFrame)
	wxBoxSizer* BoxSizer4;
	wxStaticBoxSizer* StaticBoxSizer2;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer9;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(989,597));
	SetBackgroundColour(wxColour(47,79,79));
	AuiNotebook1 = new wxAuiNotebook(this, ID_AUINOTEBOOK1, wxPoint(392,48), wxDefaultSize, wxNO_BORDER);
	AuiNotebook1->SetBackgroundColour(wxColour(47,79,79));
	Panel1 = new wxPanel(AuiNotebook1, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_PANEL1"));
	Panel1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	Panel1->SetBackgroundColour(wxColour(47,79,79));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer9 = new wxBoxSizer(wxVERTICAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	SearchCtrl1 = new wxSearchCtrl(Panel1, ID_SEARCHCTRL1, wxEmptyString, wxDefaultPosition, wxSize(297,21), wxNO_BORDER, wxDefaultValidator, _T("ID_SEARCHCTRL1"));
	SearchCtrl1->SetForegroundColour(wxColour(255,255,255));
	SearchCtrl1->SetBackgroundColour(wxColour(230,174,0));
	BoxSizer4->Add(SearchCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ComboBox1 = new wxComboBox(Panel1, ID_COMBOBOX1, wxEmptyString, wxDefaultPosition, wxSize(222,21), 0, 0, 0, wxDefaultValidator, _T("ID_COMBOBOX1"));
	BoxSizer4->Add(ComboBox1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer9->Add(BoxSizer4, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ListCtrl1 = new wxListCtrl(Panel1, ID_LISTCTRL1, wxDefaultPosition, wxSize(701,400), wxLC_REPORT|wxNO_BORDER, wxDefaultValidator, _T("ID_LISTCTRL1"));
	ListCtrl1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	ListCtrl1->SetBackgroundColour(wxColour(47,79,79));
	BoxSizer9->Add(ListCtrl1, 1, wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 50);
	BoxSizer1->Add(BoxSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Add Item"));
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon.png"))), wxDefaultPosition, wxDefaultSize, wxNO_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer3->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Add Item Details"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	StaticText5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	wxFont StaticText5Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("Century"),wxFONTENCODING_DEFAULT);
	StaticText5->SetFont(StaticText5Font);
	BoxSizer3->Add(StaticText5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("QTY    "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer8->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	qtyField = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(215,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer8->Add(qtyField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("PRICE"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer7->Add(StaticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	priceField = new wxTextCtrl(Panel1, ID_TEXTCTRL3, wxEmptyString, wxDefaultPosition, wxSize(215,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	BoxSizer7->Add(priceField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("ITEM"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer6->Add(StaticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	itemField = new wxTextCtrl(Panel1, ID_TEXTCTRL4, wxEmptyString, wxDefaultPosition, wxSize(210,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	BoxSizer6->Add(itemField, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("ID     "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BoxSizer5->Add(StaticText1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(163,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer5->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON1, wxArtProvider::GetBitmap(wxART_MAKE_ART_ID_FROM_STR(_T("wxART_REDO")),wxART_BUTTON), wxDefaultPosition, wxSize(37,23), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	BoxSizer5->Add(BitmapButton1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer2->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton2 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("D:\\C++ projects\\MySystem\\icons\\add-item-icon_5.png"))), wxDefaultPosition, wxSize(58,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	StaticBoxSizer2->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(StaticBoxSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(BoxSizer1);
	BoxSizer1->Fit(Panel1);
	BoxSizer1->SetSizeHints(Panel1);
	AuiNotebook1->AddPage(Panel1, _("Sales"));
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

//	Connect(ID_COMBOBOX1,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&TestFrame::OnComboBox1Selected);
	//*)

ToolBar1->SetBackgroundColour(wxColour(230,174,0));
	StatusBar1->SetBackgroundColour(wxColour(230,174,0));
	StatusBar1->SetForegroundColour(*wxWHITE);

	setColumns();

}


void TestFrame::setColumns(){


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

        itemCol.SetText(wxT("Price"));
        itemCol.SetAlign(wxLIST_FORMAT_CENTRE);
        ListCtrl1->InsertColumn(3, itemCol);
        ListCtrl1->SetColumnWidth( 3,100 );

        itemCol.SetText(wxT("QTY"));
        itemCol.SetAlign(wxLIST_FORMAT_RIGHT);
        ListCtrl1->InsertColumn(4, itemCol);
        ListCtrl1->SetColumnWidth(4, 100 );

        setListData();
}
void TestFrame::setListData(){
    for ( int i = 0; i < 10; i++ ){

        wxString buf;
        buf.Printf("%d",i);
        ListCtrl1->InsertItem(i, buf,0);
        ListCtrl1->SetItemData(i, i);

        buf.Printf(wxT("Col 1, item %d"), i);
        ListCtrl1->SetItem(i, 1, buf);

         buf.Printf(wxT("Col 2, item %d"), i);
        ListCtrl1->SetItem(i, 2, buf);

        buf.Printf(wxT("Col 3, item %d"), i);
        ListCtrl1->SetItem(i, 3, buf);

        buf.Printf(wxT("Col 4, item %d"), i);
        ListCtrl1->SetItem(i, 4, buf);

    }
    }
void TestFrame::addData(){
    int num = 9;
   num++;
    wxString buf ;
    buf.Printf("%d",num);
   ListCtrl1->InsertItem(num, buf,0);
   ListCtrl1->SetItemData(0, num);

      item.Printf(itemField->GetValue());
      qty.Printf(qtyField->GetValue());
      price.Printf(priceField->GetValue());



         buf.Printf(wxT("Col 1, item %s"), buf);
         ListCtrl1->SetItem(num, 1,buf );

         buf.Printf(wxT("Col 2, item %s"), item);
        ListCtrl1->SetItem(num, 2, item);

        buf.Printf(wxT("Col 3, item %s"), qty);
        ListCtrl1->SetItem(num, 3, qty);

        buf.Printf(wxT("Col 4, item %s"), price);
        ListCtrl1->SetItem(num, 4, price);



}




TestFrame::~TestFrame()
{
	//(*Destroy(TestFrame)
	//*)
}

