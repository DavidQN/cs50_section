#include <stdio.h>

// Prototypes
void takePointerValue(int);
void takePointer(int *);

int main(void)
{
    // Set variable a value
    int a = 10;

    // Set variable b to point to the address of variable a
    // We notice this syntax is different from the rest of the examples. It does the same thing
    // except since we know what we are setting *b to already we can just do it on one line
    // as opposed to setting it to NULL first.
    // REMEMBER: If you don’t know what your pointer is going to be yet, then set it to NULL
    int *b = &a;

    printf("Original pointer address and values of variables a and b\n");
    // Print the addresses
    printf("Pointer of variable a: %p\n", &a);
    printf("Pointer of variable b: %p\n", b);

    // Print values
    printf("Value of variable a: %i\n", a);
    printf("Value of variable b: %i\n", *b);
    printf("\n");

    // In file p_04.c I displayed how to pass in values to a function, but what if I wanted to use a pointer variable
    // instead of the regular variable we used in p_04.c?

    // If we remember, variable 'b' is pointing to a certain space in memory, in our case it is pointing to where variable 'a'
    // exists. If we wanted to access the value of variable 'a' using the pointer 'b' we created above, we can do so
    // by dereferencing a pointer. With the syntax (*b).
    //
    // OKAY! That looks weird! Didn't we just use *b above when we set variable b?!?!
    // Yes we indeed did, but after declaring a pointer variable, you no longer need to use the syntax (*) since we now
    // know it is a pointer. When we do *b we are now just passing in the variables value and not where it exists in memory
    takePointerValue(*b);

    printf("\n");
    printf("Outside takePointerValue function\n");
    printf("Pointer of variable a: %p\n", &a);
    printf("Pointer of variable b: %p\n", b);

    // Print values
    printf("Value of variable a: %i\n", a);
    printf("Value of variable b: %i\n", *b);
    printf("\n");

    // Change value by passing pointer variable
    takePointer(b);

    printf("\n");
    printf("Outside takePointer function\n");
    printf("Pointer of variable a: %p\n", &a);
    printf("Pointer of variable b: %p\n", b);

    // Print values
    printf("Value of variable a: %i\n", a);
    printf("Value of variable b: %i\n", *b);
    printf("\n");
}

// Takes in the dereferenced pointer
void takePointerValue(int b)
{
    // This should not update variable 'b' since we are not passing in the address, but rather the value that address contains
    b = 5;
    printf("Within takePointerValue function\n");
    printf("Pointer of variable b: %p\n", &b);
    printf("Value of variable b: %i\n", b);
}

void takePointer(int *b)
{
    *b = 15;
    printf("Within takePointer function\n");
    printf("Pointer of variable b: %p\n", b);
    printf("Value of variable b: %i\n", *b);
}
