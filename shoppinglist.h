#ifndef SHOPPINGLIST_H
#define SHOPPINGLIST_H

#include "shop.h"

class shoppinglist : public shop
{
	private:
			int count = 0;
			int count2 = 0;
			shop** list = new shop*[100];
			int* numberlist = new int[100];
	
	public:
			shoppinglist();
			void addItem(shop* something);
			void printList();
			void addNumber(int something,shop* thatItem);
			void printNumber();
	
			~shoppinglist();
};

#endif