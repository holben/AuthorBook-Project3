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

Book::~Book()
{
}
