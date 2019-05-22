
#include "Omnivore.h"
#include <iostream>

using namespace std;

int main()
{
	omnivore mammal(4, "Bears");
	omnivore bird(5, "Ostriches");

	cout << " There are " << mammal.get_omni_number() << " " << mammal.get_name() << " and" ;
	cout << " " << bird.get_omni_number() << " " << bird.get_name() << " in the forest." << endl;

	return 0;
}