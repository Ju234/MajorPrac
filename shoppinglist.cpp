#include "shoppinglist.h"
#include "shop.h"
#include <iostream>

using namespace std;

shoppinglist::shoppinglist()
{
	count = 0;
}

void shoppinglist::addItem(shop* something)
{
	list[count] = something;
	count++;
}

void shoppinglist::addNumber(int something,shop* thatItem){
	numberlist[thatItem->output_order()] = something;
    count2++;
}

void shoppinglist::printList()
{
	for(int i = 0; i < count; i++)
	{
		cout << numberlist[i] << "      " << list[i]->get_name() << endl;
	}
}

shoppinglist::~shoppinglist()
{
	delete[] list;
	delete[] numberlist;
}