#pragma once
#include "bird.h"

class Stork : public Bird
{
	string country_for_winter;

public:
	Stork(int _age, string _name, int _wingspan, string country_for_winter);

	void toString() override;

	Animal* operator+(Animal* parent2) override;
};
