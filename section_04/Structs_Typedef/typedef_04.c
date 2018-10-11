#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct dog
{
    int age;
    char breed[20];
    char fluff[20];
    bool good;
} dog;

int main(void)
{

    dog *pepper = malloc(sizeof(dog));

    // How to reference the values in your struct when it is a pointer
    // both: -> and (*variableName).field are the same, it is just that "->" looks cleaner
    pepper->age = 5;
    (*pepper).good = true;

    printf("%d\n", pepper->age);
    printf("%d\n", pepper->good);

    printf("%lu\n", sizeof(dog));
};