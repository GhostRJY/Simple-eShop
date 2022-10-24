
#include "Phone.h"

Phone::Phone(int height, int width, int weight, int batteryLife, const std::string& tm, const std::string& color):_disp(height, width, weight), _tm(tm), _color(color), Device(batteryLife) {}

Display Phone::getDisplay() const {
	return _disp;
}

std::string Phone::getTM() const {
	return _tm;
}

std::string Phone::getColor() const {
	return _color;
}

void Phone::setDisplay(const Display& display) {
	_disp = display;
}

void Phone::setTM(const std::string& tm) {
	_tm = tm;
}

void Phone::setColor(const std::string& color) {
	_color = color;
}

void Phone::showSpec() const {
	std::cout << "PHONE" << std::endl << "Phone: " << _tm << " have color " << _color << " and display" << std::endl;
	_disp.showSpec();
	std::cout << std::endl;
}