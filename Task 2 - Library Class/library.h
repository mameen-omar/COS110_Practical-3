#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include <string>

class Book;

class Library
{
	private:
		string name;

		Book** books;

		int librarySize;

		int numBooks;

	public:

		Library(string n);

		Library(const Library &obj);

		Library operator+= (Book*);

		Library operator -= (Book*);
		
		const Library operator = (const Library &right);		

		Library operator++(int);

		Library operator--();

		Book* getBook(string) const;

		bool isFull () const;

		void print() const;

		string getName();

		void setName(string);

};

#endif