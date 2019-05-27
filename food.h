#ifndef FOOD_H
#define FOOD_H

#include "shop.h"

class food : public shop
{
	private:
			std::string name;
      		int price;

	public:
			food();
			food(std::string pName,int pPrice);

			void askingFunction();
			
			~food();
};
#endif