#include "peacock.h"

Peacock::Peacock(int _age, string _name, int _wingspan, string _color_of_plumage) : Bird(_age, _name, _wingspan)
{
	this->color_of_plumage = _color_of_plumage;
}

void Peacock::toString()
{
	Bird::toString();
	cout << "Peafowl's color of plumage: " << this->color_of_plumage << endl;
}

Animal* Peacock::operator+(Animal* parent2)
{
	return new Peacock(parent2->age, parent2->name, Bird::wingspan, this->color_of_plumage);
}