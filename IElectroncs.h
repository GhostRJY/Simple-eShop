#pragma once
#include<iostream>
#include<string>

class IElectroncs{
public:
	virtual void showSpec() const = 0;
	virtual ~IElectroncs() = default;
};

