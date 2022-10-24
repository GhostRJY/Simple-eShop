#include "WashingMachine.h"

WashingMachine::WashingMachine(int rpm, int weight, const std::string& tm): Appliances(weight), _tm(tm), _rpm(rpm) {}

std::string WashingMachine::getTM() const {
	return _tm;
}

int WashingMachine::getRPM() const {
	return _rpm;
}

void WashingMachine::setTM(const std::string& tm) {
	_tm = tm;
}

void WashingMachine::setRPM(const int& rpm) {
	_rpm = rpm;
}

void WashingMachine::showSpec() const{
	std::cout << "WASHING MACHINE" << std::endl << _tm << " have " << _rpm << " rpm and weighs " << getWeight() / 1000 << " kg" << std::endl << std::endl;;
}