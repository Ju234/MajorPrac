#include "shop.h"
#include <iostream>

using namespace std;

shop::shop()
{
	countName = 0;
}

shop::shop(string pName,int pPrice)
{
	name = pName;
	price = pPrice;
}

void shop::input_price(int item_price)
{
	price = item_price;
}

int shop::get_price()
{
	return price;
}

void shop::input_name(string item_name)
{
	name = item_name;
}

string shop::get_name()
{
	return name;
}

int shop::input_number()
{
	cin >> num;
	nums+= num; 
	return num;
}

int shop::get_number()
{
	return num;
}

int shop::getnums()
{
	return nums;
}


int shop::sum()
{
	return this->get_number() * this-> get_price();
}

void shop::input_order(int pOrder)
{
	order = pOrder;
}

int shop::output_order()
{
	return order;
}

void shop::askingFunction()
{
	cout << endl;
}

shop::~shop()
{

}
