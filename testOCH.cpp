
#include "Omnivore.h"
#include "Carnivore.h"
#include "Herbivore.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{

	omnivore mammal (4, "Bears");
	omnivore bird(5, "Ostriches");
	carnivore m (3, "Tigers");
	carnivore b(6, "Falcons");
	herbivore d(10, "Giraffes");
	herbivore k(13, "Ducks");

	cout << " " << mammal.get_omni_number() << "omnivores mammal  " << mammal.get_name() << endl;
	cout << " " << bird.get_omni_number() << "omnivores bird " << bird.get_name() << endl;
	cout << " " << m.get_carni_number() << "carnivores mammal " << m.get_name() << endl;

	return 0;
}