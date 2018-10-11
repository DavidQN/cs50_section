#include <stdio.h>

// This program does nothing but open a file and close it. Nothing gets updated!
int main(void)
{
    // open file "input.txt" in read only mode
    FILE *file = fopen("input01.txt", "r");

    // always make sure fopen() doesn't return NULL!
    // If it enters this "if statement" then we return 1.
    // Remember that a return ends the function!
    // So no code will run after if it enters this "if statement"
    if (file == NULL)
        return 1;

    // Close files to avoid memory leaks!
    fclose(file);
}