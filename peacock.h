#pragma once
#include "bird.h"

class Peacock : public Bird
{
	string color_of_plumage;

public:
	Peacock(int _age, string _name, int _wingspan, string color_of_plumage);

	void toString() override;

	Animal* operator+(Animal* parent2) override;
};
