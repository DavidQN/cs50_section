#include <stdio.h>
#include <stdbool.h>

// Different ways to create an array
int main(void)
{
    // Version 01
    // Specify int's this array will take, then allocate what each space will contain
    int arr_01[3];
    arr_01[0] = true;
    arr_01[1] = false;
    arr_01[2] = true;

    // Version 02
    // Specificy amount of int's this array will take, then set them within bracket notation
    int arr_02[3] = {1, 2, 3};

    // Version 03
    // Don't specify the amount of int's it will take, then set them within bracket notation
    int arr[] = {1, 2, 3};

}