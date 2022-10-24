#pragma once
#include<iostream>
#include"IElectroncs.h"

class Device: virtual public IElectroncs
{
public:
	Device(int);
	virtual void showSpec() const override;
	void setBatteryLife(const int& batLife);
	int getBatteryLife() const;
protected:
	int _batteryLife;

};

