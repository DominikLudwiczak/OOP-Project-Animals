#include "dolphin.h"

Dolphin::Dolphin(int _age, string _name, string _living_env, int _weigth, int _size_of_fin) : Mammal(_age, _name, _living_env, _weigth)
{
	this->size_of_fin = _size_of_fin;
}

void Dolphin::toString()
{
	Mammal::toString();
	cout << "Size of dolphin's fin: " << this->size_of_fin << endl;
}

Animal* Dolphin::operator+(Animal* parent2)
{
	return new Dolphin(parent2->age, parent2->name, Mammal::living_env, Mammal::weight, this->size_of_fin);
}