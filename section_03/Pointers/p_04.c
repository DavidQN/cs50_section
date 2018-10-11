#include <stdio.h>

// Prototypes
void withoutPointer(int);
void withPointer(int *);

int main(void)
{
    // Set variable a value
    int a = 10;

    // Set variable b to point to the address of variable a
    int *b = NULL;
    b = &a;

    printf("Original pointer address and values of variables a and b\n");
    // Print the addresses
    printf("Pointer of variable a: %p\n", &a);
    printf("Pointer of variable b: %p\n", b);

    // Print values
    printf("Value of variable a: %i\n", a);
    printf("Value of variable b: %i\n", *b);
    printf("\n");

    // Pass in value from variable 'a'
    // Since the variable 'a' is NOT a pointer we can just pass it without any special * or &
    // Remember though, if we wanted to access the address of variable that isn't a pointer
    // we can use ampersand before the variable name (&a) which is called dereferencing.
    withoutPointer(a);

    printf("\n");
    printf("Outside withoutPointer function\n");
    printf("Pointer of variable a: %p\n", &a);
    printf("Pointer of variable b: %p\n", b);

    // Print values
    printf("Value of variable a: %i\n", a);
    printf("Value of variable b: %i\n", *b);
    printf("\n");
    // If we look at the values we notice nothing has changed!!
    // Why? So if you pass in a value to a function and not a pointer, the function
    // creates a copy of that variable which in turn has a different memory address than the variable
    // passed in because it is as we mentioned, a copy.
    // How do we pass in a pointer and update the values.

    // Remember that variable 'a' is NOT a pointer, BUT that doesn't mean we still can't pass in that variables
    // memory address. We can access a variables memory address (where this variable exists in memory) by
    // dereferencing.
    // Dereferencing on a variable that isn’t a pointer uses the syntax ampersand (&) before the variable name,
    // which as I mentioned gives us the memory address of that variable.
    withPointer(&a);

    printf("\n");
    printf("Outside withPointer function\n");
    printf("Pointer of variable a: %p\n", &a);
    printf("Pointer of variable b: %p\n", b);

    // Print values
    printf("Value of variable a: %i\n", a);
    printf("Value of variable b: %i\n", *b);
    printf("\n");
}

void withoutPointer(int a)
{
    a = 5;
    printf("Within withoutPointer function\n");
    printf("Pointer of variable a: %p\n", &a);
    printf("Value of variable a: %i\n", a);
}

void withPointer(int *a)
{
    *a = 15;
    printf("Within withPointer function\n");
    printf("Pointer of variable a: %p\n", a);
    printf("Value of variable a: %i\n", *a);
}
