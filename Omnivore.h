
#ifndef OMNIVORE_H
#define OMNIVORE_H
#include "Fauna.h"
#include <string>

class omnivore:public fauna
{
	public:

			omnivore();
			omnivore(int oAmount, std::string oName);
			int omniNum;
			std::string omniName;
			std::string get_name();
			int get_omni_number();
			

			~omnivore(){}

};

#endif