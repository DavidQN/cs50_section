#include <stdio.h>

int main(void)
{
    int x = 54;

    switch (x)
    {
    case 1:
        printf("A\n");
        break;

    case 2:
        printf("B\n");
        break;

    default:
        printf("C\n");
        break;
    }
}