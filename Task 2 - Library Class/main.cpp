#include "book.h"
#include "library.h"

#include <iostream>
using namespace std;

int main()
{
	cout << "Creating 8 Books..." << endl;
	Book bone("Inkspell", "Cornelia Funke", "9780439896412");
	Book btwo("The Name of the Wind", "Patrick Rothfuss", "9780756404741");
	Book bthree("Ender's Game", "Orson Scott Card", "9788617354691");
	Book bfour("Dune", "Frank Herbert", "9781587464687");
	Book bfive("Magic 69", "Me lol", "696969696900");
	Book bsix("Honestly no time", "me AGAIN", "69591230010");
	Book bseven("I know u wan me", "hi guys its bill", "234235234523");
	Book beight("Last one honest.", "Me x99", "3252351234234");
	cout << "8 books created." << endl << endl ;
	
	cout << "Creating Library object lOne(\"Library One\")..." << endl;
	Library lOne("Library One");
	cout << "lOne created." << endl << endl;
	
	cout << "Testing post increment of lOne for librarySize of 7..." << endl;
	lOne++;
	lOne++;
	cout << "Done."<< endl << endl;
	
	cout << "Adding 7 books to lOne..." << endl;
	lOne += &bone;
	lOne += &btwo;
	lOne += &bthree;
	lOne += &bfour;
	lOne += &bfive;
	lOne += &bsix;
	lOne += &bseven;
	cout << "7 books added to lOne." << endl << endl;
	
	cout << "Now testing for error by adding an eighth book to lOne(size 7)..." << endl;
	lOne += &beight;
	cout << "Done." << endl << endl;
	
	cout << "Testing print function for lOne..." << endl << endl;
	
	lOne.print();
	
	cout << "Print test done." << endl << endl;
	
	cout << "Now testing -= operator by removing book \"Enders game\", printing," << endl
		<< " and then removing book \"Honestly no time\" followed by a print." << endl << endl;
		
	lOne -= &bthree;
	lOne.print();
	lOne -= &bsix;
	lOne.print();
	cout << endl << "Operation complete." << endl << endl;
	
	cout << "Now testing -= operator on book that is not in the library (beight)..." << endl << endl;
	lOne -= &beight;
	lOne.print();
	cout << "Done." << endl;
	
	cout << "Now testing pre-decrement operator and printing." << endl;
	--lOne;
	lOne.print();
	cout << "Done." << endl << endl;
	
	cout << "Testing getBook function for book \"Dune\"..." << endl;
	cout << "Function returns: " << (*(lOne.getBook("Dune"))).getTitle() << endl;
	cout << "Done." << endl;
	
	cout << "Testing getBook function for book \"rubbish\"..." << endl;
	if (  (lOne.getBook("rubbish")) == nullptr  )
		cout << "Function returned nullptr!" << endl;
	else
		cout << "Function did not return nullptr rekt" << endl;
	cout << "getBook test complete." << endl << endl;
	
	cout << "Testing isFull...." << endl;
	if (lOne.isFull() == true)
			cout << "Returned true" << endl << endl;
	else cout << "Returned false." << endl << endl;
	
	cout << "Printing...." << endl;
	lOne.print();
	cout << endl;
	
	cout << "Now testing copy constructor and creating lTwo..." << endl;
	Library lTwo = lOne;
	cout << "lTow created." << endl << "Printing lTwo...";
	lTwo.print();
	cout << "Now decrementing lTwo and printing..." << endl;
	--lTwo;
	lTwo.print();
	cout << endl;
	cout << "Now creating lThree(\"Third one omg\" and adding 5 books in reverse order..." << endl;
	Library lThree("Third one omg");
	lThree += &bfive;
	lThree += &bfour ;
	lThree += &bthree;
	lThree += &btwo;
	lThree += &bone;
	cout << "lThree created." << endl << "printing lThree" << endl << endl;
	lThree.print();
	cout << "Decrementing three and printing." << endl;
	--lThree;
	lThree.print();
	cout << endl<< "Incrementing three and printing..." << endl;
	lThree++;
	lThree.print();
	cout << "Now testing overloaded = operator, setting lOne = lThree..." << endl;
	lOne = lThree;
	cout << "Done, printing lOne." << endl;
	lOne.print();
	cout << "Printing lTwo..." << endl;
	lTwo.print();
	cout << endl << endl << "Now decrementing lTwo 10 times and printing." << endl;
	--lTwo;
	--lTwo;
	--lTwo;
	--lTwo;
	--lTwo;
	--lTwo;
	--lTwo;
	--lTwo;
	--lTwo;
	--lTwo;
	lTwo.print();
	
	cout << endl << "There was no way for me to test numBooks, careful." << endl;
	cout << "Disclaimer, making it through this cpp doesnt guarentee anything" << endl;
	cout << endl << endl<< endl<< "All tests complete. take it and go pls."<< endl;
	
	
	
	
	
	
	
	return 0;
}