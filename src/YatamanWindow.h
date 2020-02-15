/*
 * YatamanWindow.h
 *
 *  Created on: 2009-12-21
 *      Author: patryk
 */

#ifndef YATAMANWINDOW_H_
#define YATAMANWINDOW_H_

class YatamanWindow;

#include <wx/wx.h>

class YatamanWindow : public wxFrame {
private:
public:
	YatamanWindow();
	~YatamanWindow();

	void OnQuit(wxCommandEvent & event);
	void OnAbout(wxCommandEvent & event);

	DECLARE_EVENT_TABLE()
};

#endif /* YATAMANWINDOW_H_ */
