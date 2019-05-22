
#ifndef FAUNA_H
#define FAUNA_H
#include "Omnivore.h"
#include "Carnivore.h"
#include "Herbivore.h"

using namespace std;

class fauna
{

	protected:

			string mammal, bird;

	public:

			fauna();
			
			void consume(int foodQuantity, string foodType);
			int fQuantity;
			string fType;

			void sleep(int period, string time);
			int duration;
			string Time;

			void reproduce(int amount);
			int Total;

			static const int ID = -1;
			int Id;
			int get_ID;

			~fauna(){}

};

#endif