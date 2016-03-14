#include "stdafx.h"
#include "Author.h"


Author::Author()
{
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
std::ifstream Author::readdata(std::string filename)
{

};
std::ofstream Author::writedata(std::string filename)
{

};
Author::~Author()
{
}
