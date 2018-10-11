#include <stdio.h>

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

    // Search array using Linear Search
    for (int i = 0; i < length; i++)
    {
        if (search_element == arr[i])
        {
            printf("We found target %d in the array!\n", search_element);
            return 0;
        }
    }
    printf("We did not find target: %d in array :(\n", search_element);
}
