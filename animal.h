#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class Animal
{
	int age;
	string name;

public:
	Animal(int _age, string _name);

	virtual void toString();

	virtual Animal* operator+(Animal* parent2);

	friend class Stork;
	friend class Peacock;
	friend class Elephant;
	friend class Dolphin;
};