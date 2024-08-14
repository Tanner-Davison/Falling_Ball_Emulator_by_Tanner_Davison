#include "stdafx.h"

int main()
{
	Tower* tower1 = nullptr;

	std::cout << "Input tower height: ";
	double height;
	std::cin >> height;

	tower1 = new Tower{ height };

	do {
		tower1->calculateDistanceFallen();
	} while (tower1->getHeight() > 0);

	delete tower1;

	return 0;
}