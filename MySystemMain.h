/***************************************************************
 * Name:      MySystemMain.h
 * Purpose:   Defines Application Frame
 * Author:    Chris Oturpik (chrisadriane.ca@gmail.com)
 * Created:   2016-03-17
 * Copyright: Chris Oturpik (techbay.coolpage.biz)
 * License:
 **************************************************************/

#ifndef MYSYSTEMMAIN_H
#define MYSYSTEMMAIN_H

#include "optionsDialog.h"
//(*Headers(MySystemFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)
#include"wx/wxsqlite3.h"


class MySystemFrame: public wxFrame
{
    public:

        MySystemFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~MySystemFrame();


    private:

        //(*Handlers(MySystemFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnloginButtonClick(wxCommandEvent& event);
        void onPaint(wxPaintEvent& event);
        //*)

        //(*Identifiers(MySystemFrame)
        static const long ID_STATICTEXT3;
        static const long ID_STATICBITMAP1;
        static const long ID_STATICTEXT1;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON1;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(MySystemFrame)
        wxStaticText* StaticText2;
        wxStaticBitmap* StaticBitmap1;
        wxTextCtrl* passwordField;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxStatusBar* StatusBar1;
        wxButton* loginButton;
        wxTextCtrl* usernameField;
        //*)

        wxSQLite3Database *db;
        wxString testDBName;
        wxString getUsername();
        wxString username,password;
        DECLARE_EVENT_TABLE()
};

#endif // MYSYSTEMMAIN_H
