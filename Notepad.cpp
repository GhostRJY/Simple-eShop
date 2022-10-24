#include "Notepad.h"

Notepad::Notepad(int battery, int height, int width, int weight): Device(battery), _disp(height, width, weight) {}

Display Notepad::getDisplay() const {
	return _disp;
}

void Notepad::setDisplay(const Display& display) {
	_disp = display;
}

void Notepad::showSpec() const{
	std::cout << "NOTEPAD" << std::endl << "Notepad have a display" << std::endl;
	_disp.showSpec();
	std::cout << std::endl;
}