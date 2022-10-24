#include "Player.h"
#include <iostream>

Player::Player(int tracks, int batteryLife, int weight, const std::string &tm):_totalTracks(tracks), _tm(tm), Device(batteryLife), Appliances(weight) {}

std::string Player::getTM() const {
	return _tm;
}

int Player::getTotalTracks() const {
	return _totalTracks;
}

void Player::setTM(const std::string newTM) {
	_tm = newTM;
}

void Player::setTotalTracks(const int& tracks) {
	_totalTracks = tracks;
}

void Player::ShowTotalTracks() const{

	std::cout<< _tm << " player can play " << _totalTracks << "tracks"<<std::endl;
}

void Player::showSpec() const {
	std::cout << "PLAYER" << std::endl << _tm << " player can play: " << _totalTracks << " tracks" << std::endl;
	std::cout << "Battery Life: " << _batteryLife << std::endl;
	std::cout << "Weight of player: " << _weight << std::endl << std::endl;
}