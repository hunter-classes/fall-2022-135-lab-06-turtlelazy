#include <iostream>
#include "caeser.h"

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

    return ' ';
}