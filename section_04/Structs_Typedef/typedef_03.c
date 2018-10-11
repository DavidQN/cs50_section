#include <stdio.h>
#include <string.h>

struct Books
{
    char title[40];
    int pages;
};

int main(void)
{
    // Declare Book1 and Book2 of type 'Books'
    struct Books Book1;
    struct Books Book2;

    // Let us populate Book1 and Book2!

    // Book 1 info
    // strcpy copies the string in the second argument to the first argument destination (Book1.title)
    // What is Book1.title?
    // So with structs we can access its attributes, also called fields or members using the ‘dot’ notation
    // which is just a period after the variable name and it gives us access 1 level deep into the struct.
    strcpy(Book1.title, "The C Programming Language");
    // We access the pages attribute in Book1 with .pages
    Book1.pages = 1000;

    // Book 2 info
    strcpy(Book2.title, "Learn C the Hard Way");
    Book2.pages = 2400;

    // Print Book1 info
    printf("Book 1 title: %s\n", Book1.title);
    printf("Book 1 pages: %i\n", Book1.pages);

    printf("\n");

    // Print Book2 info
    printf("Book 2 title: %s\n", Book2.title);
    printf("Book 2 pages: %i\n", Book2.pages);
}