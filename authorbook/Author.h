#pragma once
#include <string>
#include <fstream>
#include "Exception.h"
class Author
{
private:
	std::string name, address;

public:
	Author();
	Author(std::string name, std::string address);
	std::string getname();
	std::string getaddress();
	void readdata(std::ifstream &filename);
	void writedata(std::ofstream &filename);
	~Author();
};

