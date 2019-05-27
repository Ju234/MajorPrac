#include "drink.h"
#include <iostream>

using namespace std;

drink::drink(){}

drink::drink(string pName,int pPrice) : shop(pName,pPrice)
{
	
}

void drink::askingFunction()
{
	cout << "How many can of " <<  " " << this->get_name() << " " << "you want ?" << endl; 
}

drink::~drink(){}