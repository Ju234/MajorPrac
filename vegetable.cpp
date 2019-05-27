#include "vegetable.h"
#include <iostream>

using namespace std;

vegetable::vegetable(){}

vegetable::vegetable(std::string pName,int pPrice) : shop(pName,pPrice)
{
	
}

void  vegetable::askingFunction()
{
	cout << "How many killogram of " <<  " " << this->get_name() << " " << "you would you like to buy ?" << endl; 
}

vegetable::~vegetable(){}