#include "food.h"
#include <iostream>

using namespace std;

food::food(){}

food::food(std::string pName,int pPrice) : shop(pName,pPrice)
{
	
}

void food::askingFunction()
{
	cout << "How many killogram of " <<  " " << this->get_name() << " " << "you want ?" << endl; 
}

food::~food(){}