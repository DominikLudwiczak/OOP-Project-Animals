#pragma once
#include "mammal.h"

class Dolphin : public Mammal
{
	int size_of_fin;

public:
	Dolphin(int _age, string _name, string _living_env, int _weight, int size_of_fin);

	void toString() override;

	Animal* operator+(Animal* parent2) override;
};