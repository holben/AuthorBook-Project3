#include "stdafx.h"
#include "Book.h"


Book::Book()
{
}

Book::Book(Author a,std::string t, int p, double pr)
{
	A = a;
	title = t;
	pages = p;
	price = pr;
}
double Book::getprice() { return price; }
int Book::getpages() { return pages; }
Author Book::getauthor() { return A; }
std::string Book::gettitle() { return title; }

void Book::readdata(std::ifstream &filename)
{
	if (filename.eof())
	{
		throw Exception(0, "End of file reached");
	}
	if (filename.fail())
	{
		throw Exception(1, "input file has problem");
	}

	getline(filename, title);
	filename >> pages;
	filename >> price;


	if (filename.eof())
	{
		throw Exception(0, "End of file reached");
	}
	else if (filename.fail())
	{
		throw Exception(1, "unknown error with reading data");
	}
	else if (filename.eof() && filename.fail())
	{
		throw Exception(0, "End of file reached");
	}
};
void Book::writedata(std::ofstream &filename)
{
	filename << title << std::endl;
	filename << pages << std::endl;
	filename << price << std::endl;
}
Book::~Book()
{
}
