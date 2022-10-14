main: main.o caesar.o vigenere.o decryption.o
	g++ -o main main.o caesar.o vigenere.o decryption.o
tests: tests.o caesar.o vigenere.o decryption.o
	g++ -o tests tests.o caesar.o vigenere.o decryption.o
caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decryption.o: decryption.cpp decryption.h

main.o: main.cpp caesar.h vigenere.h decryption.h

tests.o: tests.cpp doctest.h caesar.h vigenere.h decryption.h
	g++ -c -std=c++11 tests.cpp
clean:
	rm -f main.o caesar.o tests.o vigenere.o decryption.o tests a.out
