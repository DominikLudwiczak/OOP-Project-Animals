#include "elephant.h"

Elephant::Elephant(int _age, string _name, string _living_env, int _weigth, int _length_of_trunk) : Mammal(_age, _name, _living_env, _weigth)
{
	this->length_of_trunk = _length_of_trunk;
}

void Elephant::toString()
{
	Mammal::toString();
	cout << "Length of elephant's trunk: " << this->length_of_trunk << endl;
}

Animal* Elephant::operator+(Animal* parent2)
{
	return new Elephant(parent2->age, parent2->name, Mammal::living_env, Mammal::weight, this->length_of_trunk);
}