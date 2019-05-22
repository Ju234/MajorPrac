#include "Ecosystem.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	ecosystem F ("Jungle");
	F.set_name ("Forest");

	ecosystem A("Area");
	A.set_values(140, 120);

	cout << "This is a " << F.get_eco() << " Ecosystem" << endl;
	cout << "It is " << A.area() << " square feets" << endl;

	return 0;
}