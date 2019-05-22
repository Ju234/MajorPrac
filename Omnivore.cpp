
#include "Omnivore.h"
#include <string>

using namespace std;

omnivore::omnivore()
{
	omniName = "?";
}

omnivore::omnivore(int oAmount, string oName)
{
	omniName = oName;
	omniNum = oAmount;
}

string omnivore::get_name()
{
	return omniName;
}

int omnivore::get_omni_number()
{
	return omniNum;
}