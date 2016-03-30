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

	void readdata(std::ifstream &filename);
	void writedata(std::ofstream &filename);

	~Book();
};