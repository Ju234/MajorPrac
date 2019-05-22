
#ifndef ECOSYSTEM_H
#define ECOSYSTEM_H
#include <string>

using namespace std;

class ecosystem
{
	
private:

	int width, length;

public:

	ecosystem(string Fnature);
	string ecoNature;
	
	void set_name (string eName);
	string ecoName;
	string get_eco();

	void set_values (int w, int l);
	
	int area();

	~ecosystem(){}

};

#endif