
#include "Fauna.h"
#include <string>

using namespace std;

void fauna::consume(int foodQuantity, string foodType)
{
	fQuantity = foodQuantity;
	fType = foodType;
}

void fauna::sleep(int period, string time)
{
	duration = period;
	Time = time;
}

void fauna::reproduce(int amount)
{
	Total = amount;
	Id ++;
	Id = ID;
}

int fauna::get_ID
{
	return Id;
}		