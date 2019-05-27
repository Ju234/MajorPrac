#include "fruit.h"
#include <iostream>

using namespace std;

fruit::fruit(){}

fruit::fruit(std::string pName,int pPrice) : shop(pName,pPrice)
{
	
}

void  fruit::askingFunction()
{
	cout << "How many killogram of " <<  " " << this->get_name() << " " << "you would you like to buy ?" << endl; 
}

fruit::~fruit(){}