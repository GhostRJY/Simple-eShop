#pragma once
#include"Device.h"
#include"Display.h"

class Phone final: public Device{
public:
	Phone(int height, int width, int weight, int batteryLife, const std::string& tm, const std::string& color);
	
	Display getDisplay() const;
	std::string getTM() const;
	std::string getColor() const;
	void setDisplay(const Display& display);
	void setTM(const std::string& tm);
	void setColor(const std::string& color);

	void showSpec() const override;

protected:
	Display _disp; //пример композиции классов
	std::string _tm;
	std::string _color;
};

