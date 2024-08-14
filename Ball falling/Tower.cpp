#include "stdafx.h"

int Tower::seconds = 0;
Tower::Tower(double towerHeightP) : towerHeight(new double(towerHeightP)) {}

Tower::~Tower() {
	delete towerHeight;
}
void Tower::calculateDistanceFallen() {
	double const gravity{ 9.8 };

	double distanceFallen{ gravity * (seconds * seconds) / 2 };
	double currentHeight{ *this->towerHeight - distanceFallen };

	*this->towerHeight = currentHeight;

	if (currentHeight > 0) {
		std::cout << "At " << seconds << " ,seconds the ball is at height: " << currentHeight << " meters. \n";
	}
	else {
		std::cout << "At " << seconds << " ,seconds the ball is on the ground. \n";
	}

	seconds++;
}
double Tower::getHeight() {
	return *this->towerHeight;
}