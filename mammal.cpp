#include "mammal.h"

Mammal::Mammal(int _age, string _name, string _living_env, int _weight) : Animal(_age, _name)
{
	this->living_env = _living_env;
	this->weight = _weight;
}

void Mammal::toString()
{
	Animal::toString();
	cout << "Living environment of mammal: " << this->living_env << endl;
	cout << "Weight of mammal: " << this->weight << endl;
}