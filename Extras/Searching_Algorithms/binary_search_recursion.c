#include <stdio.h>

int binary_search(int, int, int[], int);

int main(void)
{
    int target = 62;
    int arr[] = {1, 3, 6, 22, 54, 60, 62, 90, 204, 205};
    int length = sizeof(arr) / sizeof(arr[0]);
    int end = length - 1;
    int start = 0;
    int result = binary_search(start, end, arr, target);
    printf("Found target at index: %d\n", result);

}

int binary_search(int start, int end, int arr[], int target)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }

        // If target is greater, ignore left half
        if (arr[mid] < target)
        {
            start = mid + 1;
            return binary_search(start, end, arr, target);
        }
        // Target is smaller, ignore right half
        else
        {
            end = mid - 1;
            return binary_search(start, end, arr, target);
        }
    }
    // Element doesn't exist if we get here
    return -1;
}