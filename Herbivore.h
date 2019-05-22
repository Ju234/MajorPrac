
#ifndef HERBIVORE_H
#define HERBIVORE_H
#include "Fauna.h"
#include <string>

class herbivore 
{
	public:

			herbivore();
			herbivore(int hAmount, std::string hName);
			int herbiNum;
			std::string herbiName;
			std::string get_name();
			int get_herbi_number();

			~herbivore(){}

};

#endif