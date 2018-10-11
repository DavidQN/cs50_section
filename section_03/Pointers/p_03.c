#include <stdio.h>

int main(void)
{
    // Set variable a value
    int a = 10;

    // Set variable b to point to the address of variable a
    int *b = NULL;
    b = &a;

    // Print the addresses
    printf("Pointer of variable a: %p\n", &a);
    printf("Pointer of variable b: %p\n", b);

    // Print values
    printf("Value of variable a: %i\n", a);
    printf("Value of variable b: %i\n", *b);

    // So based on claims from file p_02.c, it claims that since
    // variable b points to the address of variable a, then by virtue if we
    // changed the value that the pointer b contains, it should also update the value
    // of variable a since they are pointing to the same place in memory.

    // Update the value variable b contains
    // we use asterisk(*) because we are getting the value from a pointer variable.
    *b = 3;

    // Let us print everything again!
    // Print the addresses
    printf("\nUpdated values\n");
    printf("Pointer of variable a: %p\n", &a);
    printf("Pointer of variable b: %p\n", b);

    // Print values
    printf("Value of variable a: %i\n", a);
    printf("Value of variable b: %i\n", *b);

    // If we take a close look, we can notice the addresses stay the same, but since they are pointing
    // to the same place in memory, if you update one of the values of those variables then you in turn
    // update the others since they are all pointing to the same place
}