#pragma once
#include <vector>

template<class T>
class Zoo
{
	vector<T*> animals;
	double pBreed;
	double pExtinct;

public:
	Zoo(double _pBreed, double _pExtinct);

	Zoo& operator+=(T* animal);

	Zoo& operator-=(T* animal);

	int getZooSize();

	void breed();

	void listAnimals();
};