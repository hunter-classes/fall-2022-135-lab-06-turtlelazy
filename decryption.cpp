#include <iostream>
#include "decryption.h"
#include <cctype>

char shiftCharBack(char c, int rshift)
{
    int num = (int)c;

    if (num >= 65 && num < 97)
    {
        return (char) (25 - (25 - (c-65) + rshift) % 26 + 65);
        //return (char)((c - 65 + rshift) % 26 + 65);
    }

    else if (num >= 97)
    {
        return (char) (25 - (25 - (c - 97) + rshift) % 26 + 97);

        //return (char)((c - 97 + rshift) % 26 + 97);
    }

    else
    {
        return c;
    }

    return ' ';
}

std::string decryptCaesar(std::string ciphertext, int rshift)
{
    std::string return_string = "";
    for (int i = 0; i < ciphertext.length(); i++)
    {
        return_string += shiftCharBack(ciphertext[i], rshift);
    }

    return return_string;
}
