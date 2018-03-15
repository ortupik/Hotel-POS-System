/***************************************************************
 * Name:      MySystemApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Chris Oturpik (chrisadriane.ca@gmail.com)
 * Created:   2016-03-17
 * Copyright: Chris Oturpik (techbay.coolpage.biz)
 * License:
 **************************************************************/

#include "MySystemApp.h"
#include <wx/wx.h>
#include <wx/wxprec.h>
//(*AppHeaders
#include <wx/image.h>
//*)
#include "MainFrame.h"

IMPLEMENT_APP(MySystemApp);

bool MySystemApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	 MainFrame *main = new MainFrame(NULL,wxID_ANY,wxDefaultPosition,wxSize(811,650));
         main->Show();
    }
    //*)
    return wxsOK;

}
int MySystemApp::OnExit(wxCloseEvent& event){
   //  Close();
    return 0;
}
