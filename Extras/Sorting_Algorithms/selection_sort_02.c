#include <stdio.h>

// Prototypes
void selection_sort(int[], int);
void printArray(int[], int);
void swap(int *, int *);

int main(void)
{
    int arr[] = {5, 2, 1, 3, 6, 4};
    // int arr[] = {-1, -4, 62, 70, 84, 90, 204, 205};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Sort and print out contents
    selection_sort(arr, length);
    printArray(arr, length);
}

void selection_sort(int arr[], int length)
{
    int min_index;
    for (int i = 0; i < length; i++)
    {
        min_index = i;

        for (int j = i + 1; j < length; j++)
        {
            // Find lowest value
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // swap values
        swap(&arr[i], &arr[min_index]);
    }
}

void swap(int *orig, int *min)
{
    int temp = *orig;
    *orig = *min;
    *min = temp;
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}