#pragma once
#include "Device.h"
#include "Display.h"

class Notepad final: public Device{
public:
	Notepad(int battery, int height, int width, int weight);
	
	Display getDisplay() const;
	void setDisplay(const Display& display);

	void showSpec() const override;

protected:
	Display _disp;
};

