#pragma once
#include <string>
#include "animal.h"

class Bird : public Animal
{
	int wingspan;

public:
	Bird(int _age, string _name, int _wingspan);

	virtual void toString() override;

	friend class Stork;
	friend class Peacock;
};