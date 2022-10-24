#include "Device.h"

Device::Device(int batteryLife) :_batteryLife(batteryLife) {}

void Device::setBatteryLife(const int& batLife) {
	_batteryLife = batLife;
}

int Device::getBatteryLife() const {
	return _batteryLife;
}

void Device::showSpec() const {

	std::cout << "Battery life: " << _batteryLife << std::endl;
}
