#include <stdio.h>

// Using typedef
// So typedef can be used in a variety ways. It can be used to give a previous type a new name.
// We can notice here we are assigning an unsigned char to also be called BYTE.
//
// If you forgot, an unsigned char is different from ‘char’, since unsigned char can only hold positive values.
// 'signed char' is the same as saying 'char', as they both can hold positive and negative values.
// Remember char characters are mapped to numbers
// (if we look back at the ASCII table, but don’t worry about this for now)
typedef unsigned char BYTE;

int main(void)
{
    // Here we are using our newly defined BYTE datatype as if it were a ‘char’ (because essentially it is).
    // The reason we might want to call this BYTE is because if we remember correctly, a ‘char’ is made up
    // of 1 byte, aka 8 bits.
    BYTE b1 = 'h';
    BYTE b2 = 'i';

    printf("%c\n%c\n", b1, b2);
}