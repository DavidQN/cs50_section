#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Run program with command line arguments
int main(int argc, char *argv[])
{
    printf("Number of Arguments: %i\n", argc);

    // Convert user input to integer.
    // Warning: if a user enters characters instead of numbers, it will throw a segmentation fault
    //          we can defend against this, using conditionals
    int x = atoi(argv[1]);
    printf("Converted string to int: %d\n", x);
}