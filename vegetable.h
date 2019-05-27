#ifndef VEGETABLE_H
#define VEGETABLE_H

#include "shop.h"

class vegetable : public shop
{
	private:
	 		std::string name;
      		int price;

	public:
			vegetable();
   			vegetable(std::string pName,int pPrice);

			void askingFunction();
			
			~vegetable();
};
#endif