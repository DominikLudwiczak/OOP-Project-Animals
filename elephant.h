#pragma once
#include "mammal.h"

class Elephant : public Mammal
{
	int length_of_trunk;

public:
	Elephant(int _age, string _name, string _living_env, int _weight,  int _length_of_trunk);

	void toString() override;

	Animal* operator+(Animal* parent2) override;
};