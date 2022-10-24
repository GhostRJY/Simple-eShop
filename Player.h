#pragma once
#include <string>
#include "Device.h"
#include "Appliances.h"

class Player final: public Device, public Appliances //����� ������������ ������������
{
public:
	Player(int, int, int, const std::string&);
	std::string getTM() const;
	int getTotalTracks() const;
	void setTM(const std::string newTM);
	void setTotalTracks(const int& tracks);
	void ShowTotalTracks() const; 
	void showSpec() const override;//���������������� ����� �������� ������
	
private:
	int _totalTracks;
	std::string _tm;
};

