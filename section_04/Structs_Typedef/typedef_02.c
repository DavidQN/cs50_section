#include <stdio.h>
#include <stdbool.h>

typedef struct dog
{
    int age;
    char breed[20];
    char fluff[20];
    bool good;
} dog;

int main(void)
{
    // Populate dog fields
    dog fido = {
        .age = 1,
        .breed = "golden",
        .fluff = "max",
        .good = true};

    printf("Dog fido attributes:\nage: %i\nbreed: %s\nfluff: %s\ngoodboy: %i\n", fido.age, fido.breed, fido.fluff, fido.good);
};