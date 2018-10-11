#include <stdio.h>

int main()
{
    int c, first, last, middle, n, search;

    // search = 205;
    // int array[] = {-1, -4, 62, 70, 84, 90, 204, 205};
    search = 62;
    int array[] = {-1, -4, 62, 70, 84, 90, 204, 205};

    n = sizeof(array) / sizeof(array[0]);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        }
        else
            last = middle - 1;

        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}