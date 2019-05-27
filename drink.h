#ifndef DRINK_H
#define DRINK_H

#include"shop.h"

class drink : public shop
{
	private:
	  		std::string name;
      		int price;

	public:			
			drink();
			drink(std::string pName,int pPrice);

			void askingFunction();
			
			~drink();
};
#endif