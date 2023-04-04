#include "zoo.h"

template<class T>
Zoo<T>::Zoo(double _pBreed, double _pExtinct)
{
	if (_pBreed > 1 || _pExtinct > 1)
		cout << "probability can not be greater than 1" << endl;
	else
	{
		this->pBreed = _pBreed;
		this->pExtinct = _pExtinct;
	}
}

template<class T>
Zoo<T>& Zoo<T>::operator+=(T* animal)
{
	this->animals.push_back(animal);
	return *this;
}

template<class T>
Zoo<T>& Zoo<T>::operator-=(T* animal)
{
	this->animals.erase(remove(this->animals.begin(), this->animals.end(), animal), this->animals.end());
	return *this;
}

template<class T>
int Zoo<T>::getZooSize()
{
	return this->animals.size();
}

template<class T>
void Zoo<T>::breed()
{
	float random;
	int rand_elem;
	Animal* rand_animal;

	for (int i=0; i < this->animals.size(); i++)
	{
		random = rand() / (double)RAND_MAX;

		if (random <= this->pBreed)
		{
			rand_elem = rand() % this->animals.size();
			rand_animal = this->animals[rand_elem];
			while (rand_animal == this->animals.at(i))
			{
				rand_elem = rand() % this->animals.size();
				rand_animal = this->animals[rand_elem];
			}

			(*this) += *this->animals.at(i) + rand_animal;
		}

		if (random <= this->pExtinct && this->animals.size() > 2)
			(*this) -= this->animals.at(i);
	}
}

template<class T>
void Zoo<T>::listAnimals()
{
	for (Animal* animal : this->animals)
	{
		animal->toString();
		cout << endl;
	}
}