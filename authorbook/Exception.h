#pragma once
#include <string>
class Exception
{
	
private:
	int error;
	std::string description;

public:
	
	Exception(int e, std::string d);
	std::string getdescription();
	int geterror();
	~Exception();
};

