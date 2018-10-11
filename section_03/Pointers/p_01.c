#include <stdio.h>

int main(void)
{
    // Create variable and print its value
    int a = 10;
    printf("%i\n", a);

    // Print the variables address (we use %p when we want to print an address )
    // We do this through the use of an ampersand (&)
    // When an ampersand is used on an already declared variable it gives us
    // that variables address.
    printf("%p\n", &a);
}