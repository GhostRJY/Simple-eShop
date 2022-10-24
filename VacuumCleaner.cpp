#include "VacuumCleaner.h"

VacuumCleaner::VacuumCleaner(int weight, int power, const std::string& tm):Appliances(weight), _power(power), _tm(tm) {}

std::string VacuumCleaner::getTM() const {
	return _tm;
}

int VacuumCleaner::getPower() const {
	return _power;
}

void VacuumCleaner::setTM(const std::string& tm) {
	_tm = tm;
}

void VacuumCleaner::setPower(const int& power) {
	_power = power;
}

void VacuumCleaner::showSpec() const{
	std::cout << "VACUUM CLEANER" << std::endl << "Vac : " << _tm << " has a power of " << _power << " and weighs " << getWeight() / 1000 <<" kg" << std::endl << std::endl;;
}