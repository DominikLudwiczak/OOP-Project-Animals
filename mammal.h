#pragma once
#include <string>
#include "animal.h"

class Mammal : public Animal
{
	string living_env;
	int weight;

public:
	Mammal(int _age, string _name, string _living_end, int _weight);

	virtual void toString() override;

	friend class Elephant;
	friend class Dolphin;
};