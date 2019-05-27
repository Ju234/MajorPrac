#ifndef FRUIT_H
#define FRUIT_H

#include "shop.h"

class fruit : public shop
{
	private:
	 		std::string name;
      		int price;

	public:
			fruit();
			fruit(std::string pName,int pPrice);
			
			void askingFunction();

			~fruit();
};
#endif