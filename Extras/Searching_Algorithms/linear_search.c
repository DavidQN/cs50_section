#include <stdio.h>

// Prototype
void linear_search(int, int[], int);

int main(void)
{
    // The element we want to find
    int search_element = 4;

    // Array that we will be searching
    int arr[] = {1,
                 2,
                 36,
                 2,
                 6,
                 2,
                 4,
                 7,
                 9,
                 10};

    // Get length of array
    int length = sizeof(arr) / sizeof(arr[0]);

    linear_search(search_element, arr, length);
}

// Searches array for given target value and prints appropriate message should
// it find the target or not
void linear_search(int target, int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (target == arr[i])
        {
            printf("Target: %d exists in array at index %d\n", target, i);
            // End function immediately
            return;
        }
    }

    // This should never run if we enter the if statement
    printf("Target: %d doesn't exist in array\n", target);
};