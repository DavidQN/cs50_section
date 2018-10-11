#include <stdio.h>

// Run program with command line arguments
int main(int argc, char *argv[])
{
    printf("Number of Arguments: %i\n", argc);
    printf("First 2 arguments passed in: %s | %s\n", argv[0], argv[1]);
}