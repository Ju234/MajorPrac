
#include "Carnivore.h"
#include <string>

using namespace std;

carnivore::carnivore()
{
	carniName = "?";
}

carnivore::carnivore(int cAmount, string cName)
{
	carniName = cName;
	carniNum = cAmount;
}

string carnivore::get_name()
{
	return carniName;
}

int carnivore::get_carni_number()
{
	return carniNum;
}
