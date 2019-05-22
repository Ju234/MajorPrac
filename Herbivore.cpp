
#include "Herbivore.h"
#include <string>

using namespace std;

herbivore::herbivore()
{
	herbiName = "?";
}

herbivore::herbivore(int hAmount, string hName)
{
	herbiName = hName;
	herbiNum = hAmount;
}

string herbivore::get_name()
{
	return herbiName;
}

int herbivore::get_herbi_number()
{
	return herbiNum;
}