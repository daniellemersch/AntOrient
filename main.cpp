/*
 *
 *  Copyright Danielle Mersch. All rights reserved.
 *
 */

#include <iostream>

#include <wx/wx.h>
#include <wx/sysopt.h>

#include "mainwin.h"

using namespace std;

class AntOrientApp: public wxApp
{
public:
  virtual bool OnInit();
};

DECLARE_APP(AntOrientApp)

IMPLEMENT_APP(AntOrientApp)

bool AntOrientApp::OnInit()
{
cout << "Je suis AntOrient" << endl;
wxSystemOptions::SetOption(wxT("mac.listctrl.always_use_generic"), true);
MainWin* mw = new MainWin((wxWindow*) NULL);
mw->Show();
SetTopWindow(mw);
return true;
}

