#pragma once
#include <string>
#include "Author.h"
class Book
{
private:

	std::string title;
	int pages;
	double price;
	Author A;
public:

	Book();
	Book(Author a, std::string t, int p, double pr);
	int getpages();
	double getprice();
	Author getauthor();
	std::string gettitle();

	std::ifstream readdata(std::string filename);
	std::ofstream writedata(std::string filename);

	~Book();
};