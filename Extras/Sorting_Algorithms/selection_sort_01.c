#include <stdio.h>

void selection_sort(int[], int);
void printArray(int[], int);

int main(void)
{
    int arr[] = {5, 2, 1, 3, 6, 4};
    // int arr[] = {-1, -4, 62, 70, 84, 90, 204, 205};
    int length = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr, length);

    // Print sorted array
    printf("Final sorted array:\n");
    printArray(arr, length);
}

void selection_sort(int arr[], int length)
{
    int low_idx = 0;

    for (int i = 0; i < length; i++)
    {
        // Track lowest index
        low_idx = i;

        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[low_idx])
            {
                // Update lowest index
                printf("%d > %d : lowest index: %d\n", arr[low_idx], arr[j], j);
                low_idx = j;
            }
        }
        // Swap
        int temp = arr[i];
        arr[i] = arr[low_idx];
        arr[low_idx] = temp;
        printf("Updated array: ");
        // Print loop after each sort
        printArray(arr, length);
    }
}

// Function to print array, nothing fancy
void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}