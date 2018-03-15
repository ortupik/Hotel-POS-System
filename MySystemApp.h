/***************************************************************
 * Name:      MySystemApp.h
 * Purpose:   Defines Application Class
 * Author:    Chris Oturpik (chrisadriane.ca@gmail.com)
 * Created:   2016-03-17
 * Copyright: Chris Oturpik (techbay.coolpage.biz)
 * License:
 **************************************************************/

#ifndef MYSYSTEMAPP_H
#define MYSYSTEMAPP_H
#include "MySystemMain.h"
#include <wx/app.h>

class MySystemApp : public wxApp
{
    public:
        virtual bool OnInit();
        int OnExit(wxCloseEvent& event);
    private:
        MySystemFrame *Frame;
};

#endif // MYSYSTEMAPP_H
