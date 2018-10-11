#include <stdio.h>

int main(void)
{
    // Create Array we will soon copy
    int arr[] = {11, 12, 13};
    // Get length of original Array
    int arr_length = sizeof(arr) / sizeof(arr[0]);

    // Allocate how much space this new "copied" Array will have based on the Arrays
    // length we copied
    int copyArr[arr_length];

    // Copy original Array contents to the new copyArray
    for (int i = 0; i < arr_length; i++)
    {
        copyArr[i] = arr[i];
    }

    //
    // Now let us print both the Original Array and Copied Array
    //

    // Print contents of original Array
    for (int j = 0; j < arr_length; j++)
    {
        printf("Original Array: %d\n", arr[j]);
    }

    // create a new line for demonstration purposes
    printf("\n");

    // Print contents of copied Array
    for (int k = 0; k < arr_length; k++)
    {
        printf("Copied Array: %d\n", copyArr[k]);
    }
}