#include "stork.h"

Stork::Stork(int _age, string _name, int _wingspan, string _countr_for_winter) : Bird(_age, _name, _wingspan)
{
	this->country_for_winter = _countr_for_winter;
}

void Stork::toString()
{
	Bird::toString();
	cout << "Stork's country for winter: " << this->country_for_winter << endl;
}

Animal* Stork::operator+(Animal* parent2) {
	return new Stork(parent2->age, parent2->name, Bird::wingspan, this->country_for_winter);
}