#ifndef BOOK_H
#define BOOK_H

using namespace std;

#include <string>


class Book
{
	
	private:
		string title;
		string author;
		string ISBN;
		string genre;

	public:

		Book(string tit = "", string au = "", string ISB = "");

		string getTitle() const;

		string getAuthor() const;

		string getISBN() const;

		string getGenre() const;

		void setTitle(string a);

		void setAuthor(string a);

		void setISBN(string a);

		void setGenre(string a);
		
		friend ostream &operator << (ostream &stream, const Book &object);

};

#endif