#pragma once
#include "Appliances.h"

class WashingMachine final: public Appliances{
public:
	WashingMachine(int rpm, int weight, const std::string& tm);

	std::string getTM() const;
	int getRPM() const;
	void setTM(const std::string& tm);
	void setRPM(const int& rpm);

	void showSpec() const override;
protected:
	std::string _tm;
	int _rpm;
};

