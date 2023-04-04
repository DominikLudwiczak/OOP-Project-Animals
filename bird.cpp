#include "bird.h"

Bird::Bird(int _age, string _name, int _wingspan) : Animal(_age, _name)
{
	this->wingspan = _wingspan;
}

void Bird::toString()
{
	Animal::toString();
	cout << "Bird wingspan: " << this->wingspan << endl;
}