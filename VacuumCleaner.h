#pragma once
#include "Appliances.h"

class VacuumCleaner final: public Appliances{
public:
	VacuumCleaner(int weight, int power, const std::string& tm);

	std::string getTM() const;
	int getPower() const;
	void setTM(const std::string& tm);
	void setPower(const int& power);

	void showSpec() const override;

protected:
	std::string _tm;
	int _power;
};

