#include <stdio.h>

int binary_search(int, int, int[], int);

int main(void)
{
    // Find this element in array
    int target = 62;

    // Array that we will be searching
    int arr[] = {1, 3, 6, 22, 54, 60, 62, 90, 204, 205};
    int length = sizeof(arr) / sizeof(arr[0]);
    int start_index = 0;
    int end_index = length - 1;

    printf("Searching first array:\n");
    int result = binary_search(start_index, end_index, arr, target);
    printf("Target %d exists at index %d\n", target, result);

    // Second array we will be searching
    printf("\nSearching second array:\n");
    int arr_02[] = {1, 2, 4, 6, 14, 17, 30, 56, 60, 62, 77, 88};
    int target_02 = 60;
    int length_02 = sizeof(arr_02) / sizeof(arr_02[0]);
    int result_02 = binary_search(0, length_02 - 1, arr_02, target_02);
    printf("Target %d exists at index %d\n", target_02, result_02);
}

int binary_search(int start_index, int end_index, int arr[], int target)
{
    while (start_index <= end_index)
    {
        // Create mid point
        int middle = start_index + (end_index - start_index) / 2;

        printf("Mid: %d and value: %d start index: %d  endindex: %d\n", middle, arr[middle], start_index, end_index);
        // check if new middle is equal to target
        if (arr[middle] == target)
        {
            return middle;
        }
        // if target greater than middle update start
        if (arr[middle] < target)
        {
            // update start index
            start_index = middle + 1;
            printf("Target is greater than middle, update start index!\n");
        }
        else
        {
            // update end index
            end_index = middle - 1;
            printf("Target is less than middle, update end index!\n");
        }
    }

    return -1;
}