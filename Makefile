main: main.o caeser.o
	g++ -o main main.o caeser.o
tests: tests.o caeser.o
	g++ -o tests tests.o caeser.o
caeser.o: caeser.cpp caeser.h

main.o: main.cpp caeser.h

tests.o: tests.cpp doctest.h caeser.h
	g++ -c -std=c++11 tests.cpp
clean:
	rm -f main.o caeser.o tests.o
