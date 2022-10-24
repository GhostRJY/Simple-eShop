#include<iostream>
#include "Display.h"

Display::Display(): _height(1080), _width(1920), Appliances(1) {}
Display::Display(int height, int width, int weight): _height(height), _width(width), Appliances(weight) {}

int Display::getHeight() const {
	return _height;
}

int Display::getWidth() const {
	return _width;
}

void Display::setHeight(const int& height) {
	_height = height;
}

void Display::setWidth(const int& width) {
	_width = width;
}

void Display::showSpec() const {
	std::cout << "DISPLAY" << std::endl << "Resolution of display: " << _width << "x" << _height << std::endl << std::endl;
}