#include <iostream>
#include <string>

#include "book.h"

using namespace std;

Book::Book(string tit, string au, string ISB)
{
	title = tit;
	author = au;
	ISBN = ISB;
}

string Book::getTitle() const
{
	return title;
}


string Book::getAuthor() const
{
	return author;
}

string Book::getISBN() const
{
	return ISBN;
}

string Book::getGenre() const
{
	return genre;
}

void Book::setTitle(string a)
{
	title = a;

}

void Book::setAuthor(string a) 
{
	author = a;
}


void Book::setISBN(string a) 
{
	ISBN = a;
}

void Book::setGenre(string a)
{
	genre = a;
}
	
ostream &operator << (ostream &stream, const Book &object)
{
	stream << object.title << " - " << object.author << " - " << object.ISBN << endl;

	return stream;
}