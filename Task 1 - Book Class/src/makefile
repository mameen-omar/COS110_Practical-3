main: book.o  book.h book.cpp 
	g++ -std=c++11 main.cpp  book.o -o main


book.o: book.h book.cpp
	g++ -std=c++11 -c book.cpp

run: main
	./main