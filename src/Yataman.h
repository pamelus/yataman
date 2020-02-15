/*
 * yataman.h
 *
 *  Created on: 2009-12-21
 *      Author: patryk
 */

#ifndef YATAMAN_H_
#define YATAMAN_H_

class Yataman;

#include <wx/wx.h>
#include "YatamanWindow.h"

class Yataman : public wxApp {
private:
	YatamanWindow * window;
public:
	Yataman();
	~Yataman();

    bool OnInit();
};

#endif /* YATAMAN_H_ */
