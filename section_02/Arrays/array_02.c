#include <stdio.h>
#include <stdbool.h>

// Different ways to create an array
int main(void)
{
    // Version 01
    // Specify number of int's this array will take, then set them all to 0
    int arr[3] = {0};

    printf("%i\n", arr[0]);
    printf("%i\n", arr[1]);
    printf("%i\n", arr[2]);
}

// Interested in reading more? https://stackoverflow.com/questions/201101/how-to-initialize-all-members-of-an-array-to-the-same-value