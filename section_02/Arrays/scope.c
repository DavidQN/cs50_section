#include <stdio.h>

// prototypes
void scope1(void);

int main(void)
{
    scope1();
}

// scope decided by parantheses
void scope1(void)
{
    {
        int a = 4;
        printf("%d\n", a); // what will this print?
    }

    {
        int a = 5;
        printf("%d\n", a); // how about this?
    }
}