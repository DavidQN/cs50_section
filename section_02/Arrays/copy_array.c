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
}