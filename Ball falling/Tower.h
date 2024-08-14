#pragma once
#include "stdafx.h"


#include "stdafx.h"

class Tower {
public:
	Tower(double towerHeightP = 0);
	~Tower();

	void calculateDistanceFallen();
	double getHeight();

private:
	double* towerHeight;
	static int seconds;
};
