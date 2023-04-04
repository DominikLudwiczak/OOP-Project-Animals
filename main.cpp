#include <iostream>

#include "zoo.h"
#include "elephant.h"
#include "dolphin.h"
#include "stork.h"
#include "peacock.h"

using namespace std;

int main()
{
	srand(time(NULL));
	Zoo<Animal>* zoo = new Zoo<Animal>(0.7, 0.1);

	Elephant* elephant = new Elephant(10, "Dumbo", "Earth", 2300, 2);
	*zoo += elephant;

	Dolphin* dolphin = new Dolphin(3, "Flipper", "water", 534, 1);
	*zoo += dolphin;

	Stork* stork = new Stork(5, "Anastomus", 2, "Malta");
	*zoo += stork;

	Peacock* peacock = new Peacock(7, "Brad", 3, "orange-red");
	*zoo += peacock;

	while (zoo->getZooSize() < 100)
	{
		zoo->breed();
		zoo->listAnimals();
		cout << "-----------------" << endl;
	}
	return 0;
}