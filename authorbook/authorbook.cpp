// Copyright 2015, Utah Valley University
//Author: Roger deBry
// Date last modified: October 2015
// Driver code, Programming Project #2
// =======================================
#include "stdafx.h"
#include "authorbook.h"

void DisplayBooks(vector<Book> books)
{
	for (int i = 0; i < books.size(); i++)
	{
		cout << "\nTitle: " << books[i].gettitle() << endl;
		cout << "Author: " << books[i].getauthor().getname() << endl << "  Address: " << books[i].getauthor().getaddress() << endl;
		cout << "Pages: " << books[i].getpages() << endl;
		cout << "Price: " << books[i].getprice() << endl;
		
	}
};
void openFile(std::ifstream obj, std::string filename)
{
	obj.open(filename);
}


int main()
{

	// create a vector for storing the account objects
	vector<Book> myBooks;

	// create three Author objects
	Author p1("J.K.Rowling", "Edinburgh, Scotland");
	Author p2("Suzanne Collins", "Connecticut, USA");
	Author p3("J.R.R. Tolkien", "Bournmouth, England");

	// Create three Book objects
	Book b1(p1,"Harry Potter and the Sorcerer's Stone", 256, 24.95);
	Book b2(p2, "Mockingjay", 400, 12.99);
	Book b3(p3, "The Hobbit", 322, 14.29);

	// add the books to the vector
	myBooks.push_back(b1);
	myBooks.push_back(b2);
	myBooks.push_back(b3);

	// call the displayBooks function to display the books
	DisplayBooks(myBooks);
	

	system("PAUSE");
	return 0;
}


