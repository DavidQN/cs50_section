#include <stdio.h>

int main(void)
{
    // Allocate Array with values
    int arr[] = {1, 2, 3};

    // Count how much memory this array takes up.
    // Since we know that integers are 4 bytes, an array made up of 3 integers must be...
    int arr_memory_size = sizeof(arr);

    // 12 bytes long! Since our Array is made up of 3 integers, if we multiply the byte size
    // of an integer (which is 4 bytes) by the amount of integers in the array (3) then we get 12.
    printf("Bytes of memory this array takes: %d\n", arr_memory_size);

    // How does this help us get the length of the Array?
    // Well...If we divide the amount of bytes this Array takes up, by the first element
    // in the Array we should get 3.

    // Here we are dividing the Array size (12 bytes) by the size of the first element
    // of the Array which is 4 bytes, since we know first element is an integer
    int arr_length = arr_memory_size / sizeof(arr[0]);

    printf("Length of Array: %d\n", arr_length);

    // You could just as well write this in shorter syntax:
    int arr_length_02 = sizeof(arr) / sizeof(arr[0]);
    printf("Length of Array with different syntax: %d\n", arr_length_02);
}