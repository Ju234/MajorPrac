#ifndef SHOP_H
#define SHOP_H

#include <string>

class shop
{
      std::string name;
      int price;

public:
	int num ;
	int nums ;
	int order;

	shop();
	shop(std::string pName,int pPrice);
	int countName;

	void input_price(int price);
	int get_price();

	void input_name(std::string name);
	std::string get_name();
	int input_number();

	int get_number();
	int getnums();
	
	int sum();
	void input_order(int pOrder);
	int output_order();

	virtual void askingFunction();
	
	~shop();
};
#endif