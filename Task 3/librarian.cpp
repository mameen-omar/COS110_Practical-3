#include "librarian.h"
#include "library.h"
#include <string>

#include <iostream>
#include <string>

using namespace std;

Librarian::Librarian(Library &libObj, string n) : lib(libObj), name(n)
{
}

Book* Librarian::lendBook(string bookName)
{
	Book* myBook = 0;
	myBook = lib.getBook(bookName);

	if(myBook == 0)
	{
		cout << Librarian::name <<": Sorry, we don't have that book!\n";
		return myBook;
	}

	else
	{
		lib -= myBook;
		cout << name << ": Here is the " << bookName << ", we hope you enjoy it!\n";
		return myBook;
	}
}

void Librarian::returnBook(Book* book)
{
	bool full = lib.isFull();

	if(full)
	{
		lib++;
		lib+= book;
		cout << name << "Thanks for returning " << book->getTitle();
	}

	else if(!full)
	{
		lib+= book;
		cout << name << "Thanks for returning " << book->getTitle();
		
	}
}