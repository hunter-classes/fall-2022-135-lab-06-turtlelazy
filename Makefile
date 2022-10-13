main: main.o caeser.o vigenere.o
	g++ -o main main.o caeser.o vigenere.o

tests: tests.o caeser.o vigenere.o
	g++ -o tests tests.o caeser.o vigenere.o

caeser.o: caeser.cpp caeser.h

vigenere.o: vigenere.cpp vigenere.h

main.o: main.cpp caeser.h vigenere.h

tests.o: tests.cpp doctest.h caeser.h vigenere.h
	g++ -c -std=c++11 tests.cpp
clean:
	rm -f main.o caeser.o tests.o vigenere.o
