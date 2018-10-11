#include <stdio.h>
#include <stdbool.h>

// Different ways to create an array
int main(void)
{
    // Version 01
    // Specify number of int's this array will take, then set them all to 1
    int arr[3];
    int val = 1;

    for (int i = 0; i < 3; i++)
    {
        arr[i] = val;
    }

    printf("%i\n", arr[0]);
    printf("%i\n", arr[1]);
    printf("%i\n", arr[2]);
}