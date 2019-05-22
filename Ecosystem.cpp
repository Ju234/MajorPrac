
#include "Ecosystem.h"
#include <iostream>
#include <string>

using namespace std;

ecosystem::ecosystem(string Fnature)
{
	ecoNature = Fnature;
}

void ecosystem::set_name(string eName)
{
	
	ecoName = eName;

}

string ecosystem::get_eco()
{

	return ecoName;

}

void ecosystem::set_values (int w, int l)
{
	width = w;
	length = l;

}

int ecosystem::area()
{
	int a = width*length;
	return a;
}
