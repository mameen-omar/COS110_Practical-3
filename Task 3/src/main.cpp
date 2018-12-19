#include <iostream>
#include "librarian.h"

using namespace std;

int main()
{
	
	Book bone("Inkspell", "Cornelia Funke", "9780439896412");
	Book btwo("Book2", "Author", "12345");
	Book bthree("Ender's Game", "Orson Scott Card", "9788617354691");
	Book bfour("Dune", "Frank Herbert", "9781587464687");
	Book bfive("Book1", "Author", "12345");
	
	Library lOne("Library");

	
	Librarian Markus(lOne, "Markus");
	Markus.returnBook(&bfive);
	lOne.print();
	Markus.returnBook(&btwo);
	lOne.print();


	
	
	Markus.lendBook("Book1");
		lOne.print();

	Markus.lendBook("The Name of the Wind");
		lOne.print();

	
	Markus.returnBook(&bfour);
	lOne.print();


}