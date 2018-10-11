#include <stdio.h>
#include <string.h>

// Different ways to create an array
int main(void)
{
    // Version 01
    // Strings are actually one-dimensional array of characters terminated by a null character '\0'.
    // Thus a null-terminated string contains the characters that comprise the string followed by a null.
    char greeting_01[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // Version 02
    // Using double quotation marks, creates a string literal. Which basically means it will contain
    // the characters "Hello" but with an extra '\0' which is the null terminator. Essentially does
    // exactly what appears on top.
    char greeting_02[] = "Hello";

    // Print both implmentations
    printf("Greeting 1: %s\n", greeting_01);
    printf("Greeting 2: %s\n", greeting_02);
    printf("%c\n", greeting_02[4]);
}

/**
 *  So this raises the question, what is a `null terminator`?
 *      A null terminator is essentially added at the end of the string to tell who ever is 
 *      iterating over it, that they have indeed reached the end of the string, hence the name 
 *      `null-terminated string`.
 * 
 *  What happens if there is no null-character? 
 *      Well, an assortment of things can happen, or nothing at all. Your program may misbehave
 *      and print out some garbage values, the key thing here is that we don't want to have our 
 *      program to act funny at random times.
 *  
**/