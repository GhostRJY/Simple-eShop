#include<iostream>
#include "Appliances.h"

Appliances::Appliances(int weight) :_weight(weight) {}

void Appliances::setWeight(const int& weight) {
	_weight = weight;
}

double Appliances::getWeight() const {
	return static_cast<double>(_weight);
}

void Appliances::showSpec() const{
	std::cout << "Weight of appliance: " << _weight << std::endl;
}