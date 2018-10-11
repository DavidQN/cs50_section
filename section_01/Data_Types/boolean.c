#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // True
    bool a = 3 < 5;
    printf("a: %d\n", a);

    // False
    bool b = 2 >= 8;
    printf("b: %d\n", b);

    // Are a AND b True?
    bool c = a && b;
    printf("c: %d\n", c);

    // Are a OR b True?
    bool d = a || b;
    printf("d: %d\n", d);

    // Is d NOT True?
    bool e = !d;
    printf("e: %d\n", e);
}