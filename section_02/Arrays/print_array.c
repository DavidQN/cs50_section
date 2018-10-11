#include <stdio.h>

int main(void)
{
    // Populate Array and get the length of the Array
    int arr[] = {11, 12, 13};
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    // To print an Array in C we have to actually loop over it and print out each
    // element from the index from which it exists

    // Since we know Arrays start at index 0, we start our for loop from 0 upto the length
    // of the Array.
    for (int i = 0; i < arr_length; i++)
    {
        // We print out the element based on the index we are on.
        // In this example we enter the Array at:
        // index 0
        // index 1
        // index 2
        // We do this by using the "i" variable to index into the Array
        printf("%d\n", arr[i]);
    }
}