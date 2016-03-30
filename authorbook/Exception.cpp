#include "stdafx.h"
#include "Exception.h"


Exception::Exception(int e, std::string d)
{
	error = e;
	description = d;
}
int Exception::geterror()
{
	return error;
}
std::string Exception::getdescription()
{
	return description;
}

Exception::~Exception()
{
}
