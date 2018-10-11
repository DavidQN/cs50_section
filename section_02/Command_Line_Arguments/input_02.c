#include <stdio.h>

// Run program with command line arguments
int main(int argc, char *argv[])
{
    printf("Number of Arguments: %i\n", argc);

    // Print all arguments passed in
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}