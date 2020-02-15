/*
 * YatamanWindow.cpp
 *
 *  Created on: 2009-12-21
 *      Author: patryk
 */

#include "YatamanWindow.h"

BEGIN_EVENT_TABLE(YatamanWindow, wxFrame)
	EVT_MENU(2, YatamanWindow::OnQuit)
	EVT_MENU(1, YatamanWindow::OnAbout)
END_EVENT_TABLE()

YatamanWindow::YatamanWindow() :
	wxFrame(NULL, -1, _("Yataman 1.0"), wxPoint(50, 50), wxSize(450, 340)) {
	wxMenu * menuFile = new wxMenu;
	menuFile->Append(1, _("O programie"));
	menuFile->AppendSeparator();
	menuFile->Append(2, _("Zakończ"));

	wxMenuBar * menuBar = new wxMenuBar();
	menuBar->Append(menuFile, _("Plik"));
	SetMenuBar(menuBar);

	CreateStatusBar();
	SetStatusText(_("Brak zdefiniowanych projektów"));
}

YatamanWindow::~YatamanWindow() {

}

void YatamanWindow::OnQuit(wxCommandEvent & event) {
	Close(true);
}
void YatamanWindow::OnAbout(wxCommandEvent & event) {
	 wxMessageBox(_("Yataman 1.0"), _("O programie"), wxOK | wxICON_INFORMATION, this);
}
