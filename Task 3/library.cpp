#include <iostream>
#include <string>
#include "library.h"
#include <iomanip>
#include "book.h"
using namespace std;

Library::Library(string n)
{
	name = n;
	librarySize = 5;
	numBooks = 0;

	books = new Book*[librarySize]; 

	for(int i = 0; i<librarySize; i++)
	{
		books[i] = 0;
	}


}

Library::Library(const Library &obj)
{
	librarySize = obj.librarySize;

	name = obj.name;

	numBooks = obj.numBooks;

	books = new Book*[librarySize];

	for(int i = 0; i<librarySize; i++)
	{
		books[i] = 0;
	}

	for(int i = 0; i<librarySize;i++)
	{
		books[i] = obj.books[i];
	}
}

Library Library::operator+= (Book* ptr)
{
	if(numBooks == librarySize)
	{
		cout << "Library is full!\n";

		return *this;
	}

	else if(numBooks < librarySize)
	{
		books[numBooks] = ptr;

		numBooks++;

		return *this;
	}
}

Library Library::operator -= (Book* ptr)
{	
	int index = -1;

	if(numBooks == 0)
	{
		return *this;
	}

	else if(numBooks >0)
	{
		for(int i =0; i<numBooks; i++)
		{
			if(books[i] == ptr)
			{
				index = i;

				books[index] = 0;

				numBooks--;

				for(int x =index; x<(librarySize-1);x++)
				{
					books[x] = books[x+1];
				}

				books[librarySize-1] = 0;			
			}
		}
		return *this;
		
	}		
}

const Library Library::operator = (const Library &obj)
{


	delete [] books;

	librarySize = obj.librarySize;

	name = obj.name;

	numBooks = obj.numBooks;

	books = new Book*[librarySize];

	for(int i = 0; i<librarySize; i++)
	{
		books[i] = 0;
	}

	for(int i = 0; i<librarySize;i++)
	{
		books[i] = obj.books[i];
	}

	return *this;
}

Library Library::operator++(int)
{
	Book** temp = new Book*[librarySize+1];

	for(int i = 0; i<librarySize;i++)
	{
		temp[i] = books[i];
	}

	delete [] books;

	books = temp;

	books[librarySize] = 0;

	librarySize++;

	return *this;

}

Library Library::operator--()
{
	if(librarySize == 0)
	{
		return *this;
	}

	else 
	{


		Book** temp = new Book*[librarySize-1];

		if(books[librarySize-1] != 0)
		{
			numBooks--;
		}

		for(int i=0;i<librarySize-1;i++)
		{
			temp[i] = books[i];
		}

		delete [] books;

		books = temp;

		librarySize--;
		
		return *this;
	}
}

Book* Library::getBook(string a) const
{
	for(int x=0; x<numBooks;x++)
	{
		if((*(books[x])).getTitle() == a)
		{
			return books[x];
		}

	}

	return NULL;
}

bool Library::isFull () const
{
	if(numBooks == librarySize)
	{
		return true;
	}

	else
	{
		return false;
	}
}

void Library::print() const
{
	cout << "Inventory of " << name << endl;
	cout << "===================================" << endl;

	if(numBooks == 0)
	{
		cout << "EMPTY\n";
	}

	else
	{
		for(int x = 0; x<librarySize;x++)
		{
			cout << (x+1) << left << setw(2) << ".";

			if(books[x] == NULL) 
			{
				cout << "[Empty Space]" << endl;
			}

			else
			{
				cout << (*(books[x])).getTitle() << " - " << (*(books[x])).getAuthor() << " - " << (*(books[x])).getISBN() << endl;
			}
		}
	}

	cout << "===================================" << endl;
}

void Library::setName(string a)
{
	name = a;
}

string Library::getName()
{
	return name;
}