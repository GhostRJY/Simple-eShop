#pragma once
#include "IElectroncs.h"

class Appliances: virtual public IElectroncs{
public:
	Appliances(int weight);
	void setWeight(const int&);
	double getWeight() const;
	void showSpec() const override;
	
protected:
	int _weight;
};

