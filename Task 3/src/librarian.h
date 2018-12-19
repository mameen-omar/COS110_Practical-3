#ifndef LIBRARIAN_H
#define LIBRARIAN_H

	#include "library.h"
	#include "book.h"
	#include <string>

	using namespace std;
	class Book;
	class Library;

	class Librarian
	{
		private:

			Library &lib;
			const string name;

		public:

			Librarian(Library &libObj, string n);
			Book* lendBook(string bookName);
			void returnBook(Book* book);

	};

#endif