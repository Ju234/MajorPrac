
#ifndef CARNIVORE_H
#define CARNIVORE_H
#include "Fauna.h"
#include <string>

class carnivore:public fauna
{
	public:

			carnivore();
			carnivore(int cAmount, std::string cName);
			int carniNum;
			std::string carniName;
			std::string get_name();
			int get_carni_number();

			~carnivore(){}

};

#endif