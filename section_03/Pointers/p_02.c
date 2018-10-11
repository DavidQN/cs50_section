#include <stdio.h>

int main(void)
{
    // Create variable and print its value
    int a = 10;
    printf("%i\n", a);

    // To set a variable to an address you have to use the asterisk(*)
    // before the variable name. So what is happening here is we are saying the variable b
    // will contain some address of data type int, for now we are setting the address to NULL.
    // The reason for setting the address of variable b to NULL?
    // Well, if we don't set the pointer to anything, it will just point to some random place in memory
    // so we can't accurately check if it is NULL.
    int *b = NULL;

    // Now let us set our recently created pointer b to the address of variable a.
    // Just like in p_01.c where we used the ampersand(&) to get access to variable's address,
    // we are using it here so we can set the pointer of variable *b which we indicated should take in
    // an address of data type int to the address of variable a, which indeed is of data type int
    // and because we are using ampersand(&) before the variables name we are getting the address, aka
    // address of data type int.
    // Whew!
    b = &a;

    // Print the addresses of both variable a and b
    printf("Pointer of variable a: %p\n", &a);
    printf("Pointer of variable b: %p\n", b);

    // AND
    // Print the values these addresseses contain
    // (they both point to the same place in memory so of course they are equal to eachother)
    printf("Value of variable a: %i\n", a);
    printf("Value of variable b: %i\n", *b);

    // Before we go any further on line 34 where we are printing pointer b's value, we have to
    // use the asterisk(*) to access to the value the address contains when the variable is a pointer
    // A little tricky I know...
    // Here use this!
    //
    // Regular variable:
    // Get value: use the variable without any changes
    // Get address: use the ampersand(&)
    //
    // Pointer variable
    // Get value: use the asterisk(*)
    // Get address: use the variable without any changes
}