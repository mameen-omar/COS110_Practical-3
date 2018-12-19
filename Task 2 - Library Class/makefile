main: book.o library.o main.cpp
	g++ -std=c++11 library.o book.o main.cpp -o main	

library.o: library.h library.cpp
	g++ -std=c++11 -c library.cpp

book.o: book.h book.cpp
	g++ -std=c++11 -c book.cpp
	
	
run: main
	./main
	
