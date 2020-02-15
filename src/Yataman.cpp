/*
 * yataman.cpp
 *
 *  Created on: 2009-12-21
 *      Author: patryk
 */

#include "Yataman.h"

Yataman::Yataman() {
	window = NULL;
}

Yataman::~Yataman() {
	if(window) {
		delete window;
		window = NULL;
	}
}

bool Yataman::OnInit() {
	window = new YatamanWindow();
	window->Show();
	SetTopWindow(window);
	return true;
}

IMPLEMENT_APP(Yataman)
