#include <iostream>
#include "caesar.h"

// add functions here

char shiftChar(char c, int rshift){
    int num = (int) c;
    if(num >= 65 && num < 97){
        return (char)((c - 65 + rshift) % 26 + 65);
    }

    else if (num >= 97)
    {
        return (char) ((c - 97 + rshift) % 26 + 97);
    }

    else{
        return c;
    }

    return ' ';
}

std::string encryptCaesar(std::string plaintext, int rshift){
    std::string return_string = "";
    for(int i = 0; i < plaintext.length();i++){
        return_string += shiftChar(plaintext[i],rshift);
    }

    return return_string;
}