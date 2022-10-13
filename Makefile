main: main.o caeser.o vigenere.o decryption.o
	g++ -o main main.o caeser.o vigenere.o decryption.o
tests: tests.o caeser.o vigenere.o decryption.o
	g++ -o tests tests.o caeser.o vigenere.o decryption.o
caeser.o: caeser.cpp caeser.h

vigenere.o: vigenere.cpp vigenere.h

decryption.o: decryption.cpp decryption.h

main.o: main.cpp caeser.h vigenere.h decryption.h

tests.o: tests.cpp doctest.h caeser.h vigenere.h decryption.h
	g++ -c -std=c++11 tests.cpp
clean:
	rm -f main.o caeser.o tests.o vigenere.o decryption.o tests a.out
