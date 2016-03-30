#include "stdafx.h"
#include "Author.h"


Author::Author()
{
	name = "";
	address = "";
}
Author::Author(std::string n, std::string a)
{
	name = n;
	address = a;
}
std::string Author::getname()
{
	return name;
}

std::string Author::getaddress()
{
	return address;
}
void Author::readdata(std::ifstream &filename)
{
	if (filename.eof())
	{
		throw Exception(0, "End of file reached");
	}
	if(filename.fail())
	{
		throw Exception(1, "input file has problem");
	}

	getline(filename, name);
	getline(filename, address);

	if (filename.eof())
	{
		throw Exception(0, "End of file reached");
	}
	if (filename.fail())
	{
		throw Exception(1, "unknown error with reading data");
	}
};
void Author::writedata(std::ofstream &filename)
{
	filename << name << std::endl;
	filename << address << std::endl;
};
Author::~Author()
{
}
