#include "animal.h"

Animal::Animal(int _age, string _name)
{
	this->age = _age;
	this->name = _name;
}

void Animal::toString()
{
	cout << "Age of animal: " << this->age << endl;
	cout << "Name of animal: " << this->name << endl;
}

Animal* Animal::operator+(Animal* parent2)
{
	return new Animal(parent2->age, parent2->name);
}