#pragma once
#include "Appliances.h"

class Display: public Appliances{
public:
	Display();
	Display(int height, int width, int weight);
	
	int getHeight() const;
	int getWidth() const;
	void setHeight(const int& height);
	void setWidth(const int& width);

	void showSpec() const override;

protected:
	int _height;
	int _width;
};

