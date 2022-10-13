#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caeser.h"
#include "vigenere.h"
#include "decryption.h"
// add your tests here

TEST_CASE("TASK B"){
    CHECK(shiftChar('t',1) == 'u');
    CHECK(shiftChar('a', 5) == 'f');
    CHECK(shiftChar('z', 4) == 'd');

    CHECK(shiftChar('T', 1) == 'U');
    CHECK(shiftChar('A', 5) == 'F');
    CHECK(shiftChar('Z', 4) == 'D');

    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
}

TEST_CASE("TASK C")
{

    CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}

TEST_CASE("TASK D")
{
    CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
}