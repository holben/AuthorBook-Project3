#pragma once
#include <string>
#include <fstream>
class Author
{
private:
	std::string name, address;

public:
	Author();
	Author(std::string name, std::string address);
	std::string getname();
	std::string getaddress();
	~Author();
};

