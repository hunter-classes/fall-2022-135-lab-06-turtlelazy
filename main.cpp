#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decryption.h"

int main()
{
    std::cout << "shiftChar 'a' by 5\n";
    std::cout <<  shiftChar('a',5) << "\n\n";

    std::cout << "Caeser Cipher Encryption: 'Hello World!' , Shift 5 \n";
    std::cout << encryptCaesar("Hello World!", 10) << "\n\n";
    std::string a = encryptCaesar("Hello World!",10);

    std::cout << "Vigenere Cipher Encryption: 'Hello World!' , Key 'cake' \n";
    std::cout << encryptVigenere("Hello World!", "cake") << "\n\n";
    std::string b = encryptVigenere("Hello World!", "cake");

    std::cout << "Decrypt Caesar: " << a << ", Shift 10\n";
    std::cout << decryptCaesar(a, 10) << "\n\n";

    std::cout << "Decrypt Vigenere: " << b << ", Key 'cake'\n";
    std::cout << decryptVigenere(b, "cake") << "\n\n";
    return 0;
}
